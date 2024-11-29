#include<stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main(){
    int i;
    struct Employee employee[2];
    for(int i=0;i<2;i++);
    printf("Name:");
    scanf("%s", employee [i].name);
    printf("ID:");
    scanf("%d",& employee [i].id);
    printf("salary:");
    scanf("%f",& employee [i].salary);
    printf("\n");
    printf("employee details:\n");
    for(int i=0;i<2;i++);
    printf("Employee %d:\n",i+1);
    printf("name:%s,ID:%d, salary:%.2f\n", employee [i].name, employee [i].id, employee [i]. salary );
return 0;
}
