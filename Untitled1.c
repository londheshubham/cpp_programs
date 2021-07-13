#include<iostream.h>
#include<conio.h>
    void main()
      {
          int i,j,k,n;
          clrscr();
          cout<<"\nEnter no. of rows";
          cin>>n;
          for(i=1;i=<n;i++)
             {
                 for(j=1;j<=n-i;j++)
                    cout<<" ";
                for(k=1;k<=i;k++)
                    cout<<"* ";
                 cout<<"\n";
             }
            getch();


      }
