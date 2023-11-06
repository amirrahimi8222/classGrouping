#include<stdio.h>
int main ()
{
    int number_of_people_in_each_groups;
      int number_of_group=0;
      int totall=0;
    scanf("%d",&number_of_people_in_each_groups);
    while(number_of_people_in_each_groups>0)
    {  totall = totall+number_of_people_in_each_groups;
    scanf("%d",&number_of_people_in_each_groups);
       number_of_group= number_of_group +1;
    }
    int divide=totall/number_of_group;
    printf("%d",divide);
    return 0 ;
}