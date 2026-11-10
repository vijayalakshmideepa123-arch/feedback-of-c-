#include<stdio.h>
int main()
{
   char ch;
   FILE*fp;
   fp=fopen("feedback.txt","w");
   if(fp==NULL)
   {
      printf("File opening fails\n");
      return 0;
   }
   fprintf(fp,"Feedback about the c programming\n");
   fprintf(fp,"1)It is easy to understand\n");
   fprintf(fp,"2)The codings are easy to understand\n");
   fprintf(fp,"3)It is very much important for placement training\n");
   fprintf(fp,"4)It is used to improve my logic thinking\n");
   fprintf(fp,"5)It is used to solve problems \n");
   fclose(fp);
   fp=fopen("feedback.txt","a");
   if(fp==NULL)
   {
      printf("File opening fails\n");
      return 0;
   }
   fprintf(fp,"Feedback about the c sir\n");
   fprintf(fp,"1) His teachings is easy to understand\n");
   fprintf(fp,"2) He explains the concept clearly\n");
   fprintf(fp,"3) It would be useful if he explain the coding more in detail\n");
   fprintf(fp,"4) It would be helpful if he teach how to write code for a given problems like leetcode\n");
   fprintf(fp,"5) He is teaching the theory part good\n");
   fclose(fp);
   fp=fopen("Feedback.txt","r");
   if(fp==NULL)
   {
      printf("File opening fails\n");
      return 0;
   }
   while((ch=fgetc(fp))!=EOF)
   {
      printf("%c",ch);
   }
   fclose(fp);
   return 0;
}