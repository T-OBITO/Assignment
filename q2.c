#include <stdio.h>
struct MarkSheet {
    char name[50];
    int roll;
    float math;
    float science;
    float english;
};

int main() {
    struct MarkSheet student;

    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%[^\n]s",&student.name);
    // fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks in Math: ");
    scanf("%f", &student.math);

    printf("Enter marks in Science: ");
    scanf("%f", &student.science);

    printf("Enter marks in English: ");
    scanf("%f", &student.english);

    printf("Displaying Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll);
    printf("Marks in Math: %.2f\n", student.math);
    printf("Marks in Science: %.2f\n", student.science);
    printf("Marks in English: %.2f\n", student.english);

    return 0;
}


    printf("\nDisplaying Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    printf("Class: %s\n",s.class);
    return 0;
}   
