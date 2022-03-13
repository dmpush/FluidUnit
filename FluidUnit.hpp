#ifndef __FLUID_UNIT_HPP__
#define __FLUID_UNIT_HPP__

#include <iostream>

using namespace std;

namespace Assert {
    template <typename T> 	class LessImpl;

    template <typename T>
    class That {
	T data_;
	friend class LessImpl<T>;
    public:
	That(T data): data_{data} {};
	That Should() { return *this; };
	void Be(T arg) {
	    cout<<(data_ == arg);
	}
	LessImpl<T> Less() { return LessImpl<T>(this); };
	
    };

    template <typename T>
    class LessImpl {
	That<T> *that_;
    public:
	LessImpl(That<T>* that) : that_{that} {};
	void Than(T arg) {
	    cout<<(that_->data_ < arg);
	};
    };
};

#endif
