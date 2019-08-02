cout在输出操作符（<<）中中什么都能打印，为什么他这么厉害呢

标准库中的源代码

```
class _IO_ostream_withassign
    :public ostream
{
    ...
};

extern _IO_ostream_withassign cout;

```

下面是实现的功能 ：重载 操作符 <<

```
class ostream : virtual public ios
{
    public:
      ostream& operator << (char c);
      ostream& operator << (unsign char c) {return (this*) << (char) c};
      ostream& operator << (sign char c) {return (this*) << (char) c};
      ostream& operator << (const char *s);
      ostream& operator << (const unsign char *s) {return (*this) << (const char*) s};
      ostream& operator << (const unsign char c) {return (*this) << (const char*) s};
      ostream& operator << (const void *p);
      ostream& operator << (int n);
      ostream& operator << (unsign int n);
      ostream& operator << (long n);
      ostream& operator << (unsign n);
...
}
```
cout 重载了操作符之后把 << 能输出这些变量，所以我们使用的时候可以随意把 变量，常量丢进 cout里面。
