#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    

    cout<<"Enter the no of rows : ";
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
}                                                                                                                                                                                                                                                                                       (i==(n-1))
      {
        cout<<"*";
      }

      if(i<n)
      {
        int sk=(n-(i+1));
        while(sk)
        {

          cout<<" ";
          sk--;
        }
        int kh=n-2;
        if(i<=kh)
        {
          cout<<"*";
        }
      }
      
      int fj=i-1;
      while(fj)
      {

        cout<<" ";
        fj--;
      }

      int dg=i-1;
      while(dg)
      {

        cout<<" ";
        dg--;
      }
      if(i<=n)
      {
        cout<<"*";
      }
      if(i<n)
      {
        int yt=n-(i+1);
        while(yt)
        {

          cout<<" ";
          yt--;
        }
        cout<<"*";
      }
     




      cout<<endl;
      i++;
     }
     return 0;



}