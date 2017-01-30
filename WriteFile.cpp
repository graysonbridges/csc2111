#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   this->output_file.open(file_name);
   //writeLine(); //Remove?
   closed = false;
}

WriteFile::~WriteFile()
{
	close();
}

void WriteFile::close()
{
	if (!closed)
		closed = true;
}

void WriteFile::writeLine(String* line)
{
	if (!closed && line->length() > 0)
		this->output_file << line->getText() << endl;
}