#include <stdio.h>
#include<string.h>
struct students_details{
    int roll;
    float cgpa;
    char name[100];
};
int main() {
struct students_details s1;
s1.roll=1101022;
s1.cgpa=89.011;
strcpy(s1.name,"Chandra");
printf("Name:%s",s1.name);
printf("\nRoll number=%d",s1.roll);
printf("\nCGPA=%f",s1.cgpa);
struct students_details s2;
s2.roll=1101023;
s2.cgpa=90.11;
strcpy(s2.name,"Mohan");
printf("\n\nName:%s",s2.name);
printf("\nRoll number=%d",s2.roll);
printf("\nCGPA=%f",s2.cgpa);
    return 0;
}
