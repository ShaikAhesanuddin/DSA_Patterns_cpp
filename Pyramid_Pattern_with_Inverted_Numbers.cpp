
#include<iostream> 
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter the no of rows :";
    cin>>n;
    while(i<=n)
    {
       int r=1;
       int p=n-i+1;
        while(p)
        {
           cout<<r<<" ";
           r++;
           p--;
           
        }
         
        int k=i-1;
        while(k)
        {

         cout<<"* ";
         k--;
            
        }
        int g=i-1;
        while(g)
        {

            cout<<"* ";
            g--;
        }
        int c=n-i+1;
        while(c)
        {

            cout<<c<<" ";
            c--;
        }

        
        
        i++;
        cout<<endl;
    }

    
    return 0;
}    