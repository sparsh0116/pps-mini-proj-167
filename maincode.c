#include <stdio.h>

struct numbers
{
   float english;
   float maths;
   float chem;
};
struct location
{
    char buildingno[50];
    char colony[20];
    char cityname[20];
    char statename[15];
};

struct student
{
   char firstName[50];
   int roll;
   struct numbers marks;
   struct location address; 
};

int main()
{
   int student;

   printf("Enter the no. of students:");
   scanf("%d", &student);
   struct student s[student];
   int i, j;
   printf("Enter information of students:\n");

   // storing information
   for (i = 0; i < student; ++i)
   {
      s[i].roll = i + 1;
      printf("\nFor roll number %d,\n", s[i].roll);
      printf("Enter first name: ");
      scanf("%s", s[i].firstName);
      printf("Enter your english marks:");
      scanf("%f", &s[i].marks.english);
      printf("Enter your math marks: ");
      scanf("%f", &s[i].marks.maths);
      printf("Enter your chemistry marks:");
      scanf("%f", &s[i].marks.chem);
      printf("Enter your building no:");
      scanf("%s", s[i].address.buildingno);
      printf("Enter your colony name:");
      scanf("%s", s[i].address.colony);
      printf("Enter your city name:");
      scanf("%s", s[i].address.cityname);
      printf("Enter your state name:");
      scanf("%s", s[i].address.statename);
      
   }
   printf("Displaying Information:\n\n");

   // displaying information
   for (i = 0; i < student; ++i)
   {
      printf("\nRoll number: %d\n\n", s[i].roll);
      printf("First name: ");
      puts(s[i].firstName);
      printf("\n");
      printf("English: %.lf Maths: %.lf Chemistry: %.lf\n", s[i].marks.english, s[i].marks.maths, s[i].marks.chem);
      printf("\n");
      printf("Address: \n Building no:%s\n Colony:%s\n City:%s\n State:%s\n", s[i].address.buildingno,s[i].address.colony,s[i].address.cityname,s[i].address.statename);
      printf("\n");
   }
   int total;
FILE *fp=fopen("filename.txt","w");
   for (i = 0; i < student; ++i)
   {
      fprintf(fp,"\nRoll number: %d\n", s[i].roll);
      fprintf(fp,"First name: %s\n\n ",s[i].firstName);
      fprintf(fp,"English: %.lf\n Maths: %.lf\n Chemistry: %.lf\n", s[i].marks.english, s[i].marks.maths, s[i].marks.chem);
      fprintf(fp,"Total Marks=%.lf\n",s[i].marks.english+s[i].marks.maths+s[i].marks.chem);
      fprintf(fp,"Address: \n Building no:%s\n Colony:%s\n City:%s\n State:%s\n\n", s[i].address.buildingno,s[i].address.colony,s[i].address.cityname,s[i].address.statename);
      
   }
   fclose(fp);



   return 0;
}