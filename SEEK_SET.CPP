#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *file=fopen("example.txt","r");
  if(file==NULL)
  {
   perror("error opening file");
   return 1;
   }
   fseek(file,10,SEEK_SET);
   fseek(file,-3,SEEK_CUR);

   char ch=fgetc(file);
   if(ch!=EOF)
   {
    printf("character after moving backward:%c\n",ch);
    }
   fclose(file);
   return 0;
   getch();

   }


