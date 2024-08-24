#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int count =1;
    int v=3;
    

    cout<<"Enter the no of rows : ";
    cin>>n;
    int m=(n+1)/2;

    while(i<=m)
    {
        int sp=m-i;
        while(sp)
        {

            cout<<" ";
            sp--;
        }
        int u=i;
        while(u)
        {

            cout<<"*";
            u--;
        }
        int pr=i-1;
        while(pr)
        {

            cout<<"*";
            pr--;
        }

        cout<<endl;
        i++;
           


    }
      i=1;
    
    
    while(i<m)
    {
       int sp=i;
        while(sp)
        {

            cout<<" ";
            sp--;
        } 

        int pk=m-i;
        while(pk)
        {

            cout<<"*";
            pk--;
        }   
        int ck=m-i-1;
        while(ck)
        {

            cout<<"*";
            ck--;
        }  

    
        cout<<endl;
        i++;
   
    }
    return 0;
}