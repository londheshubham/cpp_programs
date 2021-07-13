
#include<stdio.h>
int main(){
int s[3],i;
float sum,avg;
printf("Enter Three Numbers");
for(i=0;i<=2;i++)
scanf("%d",&s[i]);
sum=s[0]+s[1]+s[2];
printf("%f",sum);
avg=(s[0]+s[1]+s[2])/3;
printf("%f",avg);
}
