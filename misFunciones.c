#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "misFunciones.h"




char strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p)

   {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return 0;
}


char strupper(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p)
  {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return 0;
}

void removeNewLine(char* string)

{
  size_t length;

  if( (length = strlen(string) ) >0)
  {
       if(string[length-1] == '\n')
                string[length-1] ='\0';
  }
}



void removeNewLines(char* string)

{
  size_t length = strlen(string);

  while(length>0)

  {
       if(string[length-1] == '\n')
       {
                --length;
                string[length] ='\0';
       }
       else
           break;
  }

}

void upInitialCharString (char *str)

{
int i;
int length_string;

length_string = strlen(str);


for(i=0; i<length_string; i++)
    {
        str[0] = toupper(str[0]);

        if(str[i] == ' ')
        {
            str[i+1] = toupper(str[i+1]);
        }
    }

}
