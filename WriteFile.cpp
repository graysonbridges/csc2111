#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name);
{
   output_file.open(file_name);
   writeLine();
   closed = false;
}

WriteFile::~WriteFile()
{
  
}

void close()
{
   if (!this->closed)
   {
      this->output_file.close();
      this->closed = true;
   }
}

void writeLine(String* line)
{
   if (!this->closed && line->length() > 0)
   {
      this->output_file << line->getText() << endl;
   }
}
