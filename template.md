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
