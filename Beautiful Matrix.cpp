//  https://codeforces.com/contest/263/problem/A

#include<iostream>
#include<string>
using namespace std;

int main()
{
      
      int m[5][5];
      int ipos,jpos;
      for(int i=0;i<5;i++)
      {
             for(int j=0;j<5;j++)
             {
                    cin>>m[i][j];
                    if(m[i][j]==1)
                    {
                        ipos=i;
                        jpos=j;
                    }
             }
      }
       
       
       cout<<abs(jpos-2)+abs(ipos-2)<<endl;
       return 0;
}
