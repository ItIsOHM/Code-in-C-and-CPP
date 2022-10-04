#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
   char string[1000], temp;
   int i, length;

   printf("Rhythm Garg, 2100290120141\n");

   printf("\nEnter String : ");
   scanf("%[^\n]s", &string);

   length=strlen(string)-1;

   for(i=0;i<length/2;i++){
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
   }
   printf("Reversed string : %s",string);
}