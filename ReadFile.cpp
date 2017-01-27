#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
	rf = new ReadFile;
	rf->closed = false;
	rf->_eof = false;
}

ReadFile::~ReadFile()
{
	delete[] rf;
}

void ReadFile::destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool eof(ReadFile* rf)
{
   return rf->_eof;
}

void close()
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
