//Author: Grayson Bridges
//Date: 1-30-17

#if !defined READ_H
#define READ_H

#include "Text.h"
#include <fstream>
using namespace std;

class ReadFile
{
	private:
		ifstream input_file;
		bool closed;
		bool eof;
		
	public:
		ReadFile(const char* file_name);
		~ReadFile();
		
		bool eof_f();
		void close();
		String* readLine();
};

#endif