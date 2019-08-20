#pragma once
#include <iostream>

template<class T>
struct pl
{
	T operator() ( T& x,  T& y) 
	{
		return x + y;
	}
};

template<class T>
struct mi
{
	T operator() ( T& x, T& y)
	{
		return x - y;
	}
};