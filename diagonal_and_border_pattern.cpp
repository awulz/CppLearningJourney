#include<iostream>
using namespace std;

int main()
{
 int n = 7; // size
 int i,j;

 for(i = 1; i <= n; i++)
 {
  for(j = 1; j <= n; j++)
  {
   if (j==1 || i==j || i==n)
   {
    cout<<"*";
   }
   else
   {
    cout<<" ";
   }
  }
  cout<<endl;
 }

return 0;
}

