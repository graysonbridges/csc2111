#include "ReadFile.h"
#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
int main()
{
   ReadFile* rf = new ReadFile("cds.txt");
   WriteFile* wf = new WriteFile("out.txt"); //wf

   while(!rf->eof_f()) //Change to eof
   {
      String* line = rf->readLine();
      wf->writeLine(line); //wf
      delete line;
   }

   rf->close();
   wf->close(); //wf
   delete rf;
   delete wf; //wf

   return 0;
}