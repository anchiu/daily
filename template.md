## 谈下模板
class template
以复数这个类来举例子
```
template <typename T>     //声明下面的T是模板
class complex
{
public:
    complex (T r = 0, i = 0) : re (r) , im (i);
    { } 
    complex& operator += (const complex&);
    T real () const {return re;}
    T imag () const {return im;}
private:
    T re, im;
    
    friend complex& _doapl (complex* ,const complex&); 
};

```
上面是类模板的形式，下面是使用方法
```
complex <double> c1(2.5, 1.5);
complex <int> c2(1,3);

```

下面是function template
如果是好多函数都是完成同一个功能，但是因为传入的数据类型不同，就要重新写一个函数，太浪费时间精力了，所以有了函数模板
下面以比大小的函数为例
```
class stone
{
public:
    stone (int w,int h,int we): _w(w),_h(h)_weight (we){}
    bool operator< (const stone&  rhs) const { return _weight < rhs._weight}
private:
    int _w, _h, _weight;
};             //类的后面要有分号（;）

```
可以看到上面的操作符重载是非常必要的，因为类是开发人员设计的，但是要想让类的使用者准确使用小于，这里面就要重载操作符，这样的写法是很规范的
下面是模板函数
```
template <class T>
inline  
const T& min (const T& a,const T& b)
{
    return b < a ? b :a ;
}
```

