#include "String.h"
#include "String.h"

#include <iostream>

using namespace std;

String::String()
	:String(80)
{

}

String::String(const size_t& size)
{

	this->size = size;
	str = new char[size] {};
}

void String::setStringSize(const size_t& size)
{
	setStringSize(size);

}

String::String(const char* str)
{
	if (str == nullptr)
		setStringSize(80);
	
		return; // 
		setStringSize(strlen(str) + 1);
		strcpy_s(this->str, size, str);
	
}

const char* String::getStr() const
{
	cout << str << endl;
	return str;
}

String::String(const String& other)
{
	*this = other;
}

String::String(String&& other)
{
	cout << "~~~~~~MOVE CTOR~~~~~~~~\n";

	this->str = other.str;
	this->size = other.size;

	other.str = nullptr;
	other.size = 0;
}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		if (str != nullptr)
		{
			delete[] str;
		}
		str = new int[size = other.size];
		for (size_t i = 0; i < size; i++)
		{
			str[i] = other.str[i];
		}
	}
	return *this;
}

String& String::operator=(String&& other)
{
	if (this != &other)
	{
		if (this->str != nullptr)
		{
			delete[] str;
			this->str = other.str;
			this->size = other.size;
			other.str = nullptr;
			other.size = 0;
		}

	}
	return *this;
}

void String::print() const
{
	//cout << "Line:\t" << str << endl;
	//cout << "Size:\t" << size << endl;
	cout << "Line : " << (size == 0 ? "empty" : "") << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << str[i] << "\t";
	}
	cout << endl;
}

String::~String()
{
	delete[] str;
}
