#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char ch;
char s[20];
char sen[];

int main() 
{
 scanf("%c" , &ch);
    printf("%c\n" , ch);
    
    scanf("%s" , &s);
    printf("%s\n" , s);
    
    scanf("\n%[^\n]", &sen);
    printf("%s" , sen);
      
    return 0;
}
