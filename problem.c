#include<stdio.h>
#include<stdlib.h>
int main(){
int n,m,nfl1=0,nfl2=0,pfl1=0,pfl2=0,i;
printf("Enter the value of N and M");
scanf("%d%d",&n,&m);

if(n<0){
		for(i=n;i>=(n-500);i--)
		{
			nfl1++;
			if(n%m==0)
			break;
		}
		
		for(i=n;i<=(n+500);i++)
		{
			nfl2++;
			if(n%m==0)
			break;
		}
		



	}

else
	{
		for(i=n;i<=(n+500);i++)
		{
			pfl1++;
			if(n%m==0)
			break;
		}
		for(i=n;i>=(n-500);i--)
		{
			pfl2++;
			if(n%m==0)
			break;
		}
	
	

	}


if(nfl1>nfl2)
printf("The number is %d",abs(nfl2+n));
if(nfl2>nfl1)
printf("The number is %d",abs(nfl1+n));
if(pfl1>pfl2)
printf("The number is %d",abs(pfl2+n));
if(pfl2>pfl1)
printf("The number is %d",abs(pfl1+n));
	if(nfl1==nfl2)
	{
	if(abs(n+nfl1)>abs(n+nfl2))
	printf("%d",abs(n+nfl1));
	else
	printf("%d",abs(n+nfl2));
	
	}
	if(pfl1==pfl2)
	{
	if(abs(n+nfl1)>abs(n+nfl2))
	printf("%d",abs(n+nfl1));
	else
	printf("%d",abs(n+nfl2));
	
	}



return 0;
}

