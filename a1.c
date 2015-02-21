#include <stdio.h>
#include <string.h>


// Count the numberof # symbols in the string
int pndCount(char a[], int arraySize);

// Count the number of numeric digits in the string
int digitCount(char a[]);

//Find the length of the longest sequence of @'s in the string
int findAtSymbolLength(char a[]);


int main()
{
 char aline[100];
 int i, len;
 char c;

 printf("Type in a phrase: " );
 fgets( aline, 100, stdin );
 printf("Typed @%s@\n", aline);

 len = strlen(aline);
 len--;
 aline[len] = '\0';

 printf("Now @%s@\n", aline);

 for (i = 0; i < len; ++i )
 {
  c = aline[i];
  printf("%2d: %c\n", i, c );

 }

 pndCount(aline, len);
 
 return 0;
}

int pndCount(char a[], int arraySize)
{
 // Count the number of # symbols in the string
 char c;
 int i;
 int count = 0;

 for(i = 0; i< arraySize; ++i)
 {
  c = a[i];
  //printf("%2d: %c\n", i, c );
  if(c == '#')
  {
	count++;
  }


 }

 printf("\nThe number of '#' characters is: %d\n", count);	
 return count;
}
