//TRIVIAL CHANGE
//slcaneer42 was here
#include "ReadFile.h"
#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
int main()
{
   ReadFile* rf = new ReadFile("cds.txt");//slcaneer kdiff3 necessary comment //testing, testing
   WriteFile* wf = new WriteFile("out.txt");

   while(!rf->eof())
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

//Grayson was here