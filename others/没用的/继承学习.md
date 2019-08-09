# 继承之前一直都是懵懵的，今天看到一篇好的文章，学习记录一下

假设父类（基类）是一个富豪
```
class RichMan
{
    public:
         RichMan();  //构造函数
         ~RichMan();  //析构函数
         int m_company;  //钱
    private:
        int m_money; //钱
        int m_car;
    protect;
        int m_house;
};        类的后面要加括号
```

现在来讨论下共有继承，私有继承和保护继承的区别，假定子类是富豪的儿子；

公司是public的，那么他自己（基类），创业伙伴（友元），儿子（子类），其他人（外部）都可以访问。

钱和车子是private的，自己（基类），创业伙伴（友元）可以访问。儿子和外人都不给开。

房子是protected的，自己（基类），创业伙伴（友元）可以访问，儿子（子类）也可以访问，外人是不可以访问。

## 共有继承
在共有继承中，public和protect中成员函数和成员变量保持不变，而private中的就访问不到了

## 私有继承
在私有继承中，可以想象富豪的儿子是一个自私的人，原来父类中public和protect在子类中变成private的，

## 保护继承

在保护继承中，可以通过名字理解下，原来的public已经被保护起来，protect中的已经被保护再保护一下任然是保护，
公司、房子是除了外人不可以访问，自己，友元和子类都可以访问。

# 下面是具体实例

定义一个类 shape（形状）
```
//基类
class shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHight(int h)
        {
            hight = h;
        }
    protect:
        int wight;
        int hight;
}
//派生类
class Cshape
{
    
}

```
未完待续


















