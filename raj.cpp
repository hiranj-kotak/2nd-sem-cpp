#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int students = 1;
struct student
{
    char name[25];
    char gender;
    char phone_no[11];
    float percentile;
};
void getdata(struct student obj)
{
    printf("Enter the name : ");
    fflush(stdin);
    gets(obj.name);
    printf("Enter the gender (M/F) : ");
    fflush(stdin);
    scanf("%c", &obj.gender);
    printf("Enter your phone no. : ");
    fflush(stdin);
    gets(obj.phone_no);
    printf("Enter your percentile : ");
    scanf("%f", &obj.percentile);
}
void printdata(struct student obj)
{
    printf("Name : %s\n", obj.name);
    printf("Gender : %c\n", obj.gender);
    printf("Phone no. : %s\n", obj.phone_no);
    printf("Percentile : %f\n", obj.percentile);
}
void remove_student(int a, struct student *ptr)
{
    for (int i = a - 1; i < students; i++)
    {
        ptr[i] = ptr[i + 1];
    }
    students--;
}
int main()
{
    struct student s[students];
    char again;
    int n;
    int p_student;
    int r_student;
    printf("------------------------------------\n");
    printf("Welcome to student management system\n");
    printf("------------------------------------");
    printf("\n\n1 -> Registration of student.\n");
    printf("2 -> To see the details of particular student.\n");
    printf("3 -> To remove the details of particular student.\n");
    printf("4 -> Exit.\n\n");
    printf("Enter the no. : ");
    scanf("%d", &n);
    printf("\n");
    printf("%d\n", students);
    switch (n)
    {
    case 1:

        printf("Student no. %d,\n", students);
        getdata(s[students - 1]);
        students++;
        break;
    case 2:
        printf("Enter student no. whose detail you want to see : ");
        scanf("%d", &p_student);
        printdata(s[]);
        break;
    case 3:
        printf("Enter student no. whose detail you want to remove : ");
        scanf("%d", &r_student);
        remove_student(r_student, s);
        break;
    case 4:
        exit(0);
    default:
        break;
    }
    printf("Again want to do some modifications? (Y/N) : ");
    fflush(stdin);
    scanf("%c", &again);
    printf("%d", students);
    if (again == 'Y')
    {
        main();
    }
    else
    {
        exit(0);
    }
    return 0;
}