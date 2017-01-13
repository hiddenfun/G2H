// ++lib.h

#pragma once
#include "..\..\..\Test++\c++functions\ConsoleApplication1\mylib.cpp"
#include "..\..\..\Test++\c++functions\ConsoleApplication1\mylib.h"
using namespace System;

namespace liblib {

	public ref class WrapLib
	{
	public:
		WrapLib();
		int summarizer(int a, int b);
		void phoenix();
		~WrapLib();
	private:
		mylib* worker;
		// TODO: Add your methods for this class here.
	};
}
