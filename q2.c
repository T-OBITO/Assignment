#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    char class [10];
};
int main()
{

    struct student s;

    printf("Enter The Information of Students :\n\n");

    printf("Enter Name : ");
    scanf("%[^\n]s",&s.name);

    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);

    printf("Enter marks : ");
    scanf("%f",&s.marks);

    printf("Enter the class :");
    scanf ("%s",&s.class);

    printf("\n\n");


    printf("\nDisplaying Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    printf("Class: %s\n",s.class);
    return 0;
}   
