#include "mystring.h"
char* mystrcpy(char* pdest,const char *psrc)  //const char pstr[]
{
  int k=0;
  while(psrc[k]!='\0')  //while(pdest[k++]=psrc[k])
  {
    pdest[k]=psrc[k];
    k++;
  }
  pdest[k]='\0';
  return k;
}

int mystrlen(const char *pstr)  //const char pstr[]
	{
	  int k=0;
	  while(pstr[k]!='\0')  //while(pstr[k++])
	    k++;
	  return k;
	}

char* mystrcat(char* pdest,const char *psrc)  //const char pstr[]
{
  int i=0,j=0;
  while(pdest[i]!='\0')
    i++;
  while(psrc[j]!='\0')  //while(pdest[i++]=psrc[j++])
  {
    pdest[i]=psrc[j];
    i++;
    j++;
  }
  pdest[i]='\0';
  return pdest;
}


int mystrcmp(const char* ps1,const char* ps2)
{
  int i=0;
  while(ps1[i]==ps2[i]&&ps1[i]!='\0'&&ps2[i]!='\0')
    i++;
  if(ps1[i]==ps2[i])
    return 0;
  else if (ps1[i] < ps2[i])
    return -1;
  else //ps1[i] > ps2[i]
    return +1;
}
