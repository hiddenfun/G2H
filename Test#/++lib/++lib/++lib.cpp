// This is the main DLL file.

#include "stdafx.h"
#include "..\..\..\Test++\c++functions\ConsoleApplication1\mylib.cpp"
#include "..\..\..\Test++\c++functions\ConsoleApplication1\mylib.h"
#include "++lib.h"
liblib::WrapLib::WrapLib(){
	worker = new mylib();
}

liblib::WrapLib::~WrapLib() {
	delete worker;
}

int liblib::WrapLib::summarizer(int a, int b) {
	return worker->summarizer(a, b);
}
void liblib::WrapLib::phoenix() {
	worker->phoenix();
}
