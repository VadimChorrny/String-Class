#pragma once

#include<iostream>

using namespace std;

class String
{
	char* str = nullptr;
	size_t size = 0;
public:
	String();
	String(const size_t& size);

	

	void setStringSize(const size_t& size);
	String(const char* str);
	const char* getStr() const;

	String(const String& other);
	String(String&& other); // Move ctor

	String& operator = (const String& other);
	String& operator = (String&& other);

	void print() const;

	~String();


};

