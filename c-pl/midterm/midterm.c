#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char numeric[2021];
  char delimiter[2021];
  int arrayList[2021]; 
  int length=0; 
  char *_numeric; 
  float sum=0, average =0;
   printf("Enter delimited numeric string: ");
   scanf("%s",numeric);
   printf("Enter delimiter: ");
   scanf("%s",delimiter);
   // Split the string with the delimiter using strtok
   _numeric=strtok(numeric, delimiter);
    printf("-------------------\n");
   while(_numeric) 
      { 
         //  addd each string sa arrayList
      arrayList[length]=atoi(_numeric); 
      length++; 

      /* convert _numeric to integer using atoi then check 
      kung integer yung value ng _numeric, if not then display error message */
      if(atoi(_numeric) == 0)
         {
            printf("Invalid Input");
            return 0;
         }
         
      _numeric=strtok(NULL, delimiter); 
      }   

      // compute average
   for(int i=0;i<length;i++) 
      { 
         sum = sum + arrayList[i];
         printf("%d\n", arrayList[i]);
      } 
   average = sum / length;
   printf("-------------------\nThe average is %.2f ",average); 
   return 0;
}