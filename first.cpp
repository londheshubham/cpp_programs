#include<iostream>
#include<conio.h>
   int main()
     {
       int n,i,j,k;
       clrcr();
       cout<<"\nEnter no. of rows";
       cin>>n;
       for(i=1;i<=n;i++)
       {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"* ";
        cout<<"\n";
       }

            return 0;

     }

