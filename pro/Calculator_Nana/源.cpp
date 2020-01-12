
#include <gui.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/place.hpp>

using namespace nana;

struct stateinfo
{
	enum class state { init, operated, assigned };

	state   opstate{ state::init };
	wchar_t operation{ L'+' };
	double oprand{ 0 };
	double outcome{ 0 };
	label& procedure;
	label& result;
	stateinfo(label& proc, label& resl)
		: procedure(proc), result(resl)
	{}
};
//这里省略掉定义.
//完整的定义请查阅calculator.cpp
//处理数字键
void numkey_pressed(stateinfo& state, const arg_mouse& arg);
//处理运算符
void opkey_pressed(stateinfo& state, const arg_mouse& arg);
int main()
{
	form fm;
	fm.caption(STR("Calculator"));
	//使用类place来布局widgets <pre name="code" class="cpp"><pre name="code" class="cpp">    //类place的具体用法参阅 参考手册。
	place place(fm);
	place.div("vert<procedure weight=10%><result weight=15%>"
		"<weight=2><opkeys margin=2 grid=[4, 5] gap=2 collapse(0,4,2,1)>");
	label procedure(fm), result(fm);
	//label的文本向右对齐
	procedure.text_align(nana::align::right);
	result.text_align(nana::align::right);
	result.typeface(nana::paint::font(nullptr, 14, true));
	place.field("procedure") << procedure;
	place.field("result") << result;
	stateinfo state(procedure, result);
	std::vector<std::unique_ptr<nana::button>> op_keys;
	wchar_t keys[] = L"C\261%/789X456-123+0.=";
	nana::paint::font keyfont(nullptr, 10, true);
	for (auto key : keys)
	{
		op_keys.emplace_back(new button(fm));
		op_keys.back()->caption(string(1, key));
		op_keys.back()->typeface(keyfont);
		if ('=' == key)
		{
			op_keys.back()->bgcolor(static_cast<color_rgb>(0x7ACC));
			op_keys.back()->fgcolor(colors::white);
		}
		place.field("opkeys") << *op_keys.back();
		//设置按键的事件处理函数
		if (('0' <= key && key <= '9') || ('.' == key))
			op_keys.back()->events().click.connect(std::bind(numkey_pressed, std::ref(state), std::placeholders::_1));
		else
			op_keys.back()->events().click.connect(std::bind(opkey_pressed, std::ref(state), std::placeholders::_1));
	}

	place.collocate();
	fm.show();
	exec();
}
