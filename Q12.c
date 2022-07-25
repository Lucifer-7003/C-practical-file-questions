// WAP to enter name and roll number of a student also enter the marks of the following subjects: c,foc,cs,mm,tally,ds. Then calculate total obtained marks and percentage of the student. Now display the result in following format:
// Name of Student = ......
// Roll Number=......
// Marks of subjects:
// C=
// FOC=
// CS=
// MM=
// Tally=
// DS=
// Total Obtained marks=
// Percentage=...... (upto 2 decimal points)
// Division=

#include <stdio.h>
int main()
{
    char name[15], rollNo[6];
    float c, foc, cs, mm, tal, ds, total, per;
    printf("Enter name of student: ");
    scanf("%s", name);
    printf("Enter roll-no of student: ");
    scanf("%s", rollNo);
    printf("Enter Marks of subject: \n");
    printf("C: ");
    scanf("%f", &c);
    printf("FOC: ");
    scanf("%f", &foc);
    printf("CS: ");
    scanf("%f", &cs);
    printf("MM: ");
    scanf("%f", &mm);
    printf("Tally: ");
    scanf("%f", &tal);
    printf("DS: ");
    scanf("%f", &ds);
    printf("\n");

    printf("Name: %s\n", name);
    printf("Roll No: %s\n", rollNo);
    printf("Marks of subject\n");
    printf("C: %0.2f\n", c);
    printf("Foc: %0.2f\n", foc);
    printf("Cs: %0.2f\n", cs);
    printf("MM: %0.2f\n", mm);
    printf("Tally: %0.2f\n", tal);
    printf("DS: %0.2f\n", ds);

    total = c + foc + cs + mm + tal + ds;
    printf("Total Marks: %0.2f\n", total);

    per = (total / (6 * 100)) * 100;
    printf("Percentage: %0.2f\n", per);

    ((per <= 100) && (per > 75))  ? printf("Division: 1st\n")
    : ((per <= 75) && (per > 55)) ? printf("Division: 2nd\n")
    : ((per <= 55) && (per > 45)) ? printf("Division: 3rd\n")
                                  : printf("Division: Fail\n");

    return 0;
}