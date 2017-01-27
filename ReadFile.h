#if !defined READ_H
#define READ_H

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
		
	public:
		ReadFile(const char* file_name);
		~ReadFile();
		
		void destroyReadFile(ReadFile rf);
		void close(ReadFile rf);
		bool eof(ReadFile rf);
		String* readLine(ReadFile rf);
};

#endif
