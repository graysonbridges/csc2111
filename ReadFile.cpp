//Author: Grayson Bridges
//Date: 1-30-17

#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
	this->input_file.open(file_name);
	closed = false;
	eof = false;
}

ReadFile::~ReadFile()
{
	close();
}

bool ReadFile::eof_f()
{
   return eof;
}

void ReadFile::close()
{
	if (!closed)
		closed = true;
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (eof) return NULL;

   string text;
   eof = !(getline(this->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}