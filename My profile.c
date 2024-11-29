include<stdio.h>
struct Student {
    char name[24];
    int age;
    char gender;
    char department;
    char college;
    };
    int main()
{
    struct Student s1;
    printf("enter the name:");
    scanf("%s",&s1.name);
    printf("enter the age:");
    scanf("%s",&s1.age);
    printf("enter the gender: ");
    scanf("%s",&s1.gender);
    printf("enter the department:");
    scanf("%s",&s1.department);
    printf("enter the college :");
    scanf("%s",&s1.college);
    printf("\nStudent detail\n");
    printf("name:%s\nage:%d\ngender:%s\ndepartment:%s\ncollege:%s\n",s1.name,s1.age,s1.gender,s1.department,s1.college);
    return 0;
}
