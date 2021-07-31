#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
  char str[100];
  int ctr, ch, i;

	   printf("Input any Character: ");
       fgets(str, sizeof str, stdin);  

  i=strlen(str);

  ctr = i;

  printf("\nThe given Character is   : %s",str);

  printf("After Case changed the Character  is: ");
  for(i=0; i < ctr; i++)
  {
    ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    putchar(ch);
   }
   printf("\n\n");

} 