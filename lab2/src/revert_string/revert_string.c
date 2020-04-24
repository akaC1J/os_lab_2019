#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{ int i;
	int j=0;  
  char *tmp=malloc(sizeof(char) * (strlen(str))+1);
  for (i=strlen(str)-1;i>=0;i--){	
	tmp[j]=str[i];
	j++;	  
  }  
  strcpy(str,tmp);
}

