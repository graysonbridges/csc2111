//Author: Samantha Caneer and Grayson Bridges
//Date: 1-30-17

#include "ReadFile.h"
#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
int main()
{
   ReadFile* rf = new ReadFile("cds.txt");
   WriteFile* wf = new WriteFile("out.txt");

   while(!rf->eof_f())
   {
      String* line = rf->readLine();
      wf->writeLine(line);
      delete line;
   }

   rf->close();
   wf->close();
   delete rf;
   delete wf;

   return 0;
}