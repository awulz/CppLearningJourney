#include<iostream>
using namespace std;

int main()
 {
   int n, numArr[20], max=0, i, j;

   cout<<"Enter total number of entities : ";
   cin>>n;

   for(i=0;i<n;i++)
   {
     cout<<"Enter value for entity ["<<(i+1)<<"] : ";
     cin>>numArr[i];
   }

   cout<<"\n  BAR CHART \n\n";

  for(i=0;i<n;i++)
  {
   if(numArr[i] > max)
   {
     max = numArr[i];
   }
  }

  for(i=0;i<max;i++)
  {
   for(j=0;j<n;j++)
   {
     if(numArr[j] >= max - i)
     {
      cout<<" #  ";
     }
     else
     {
      cout<<"    ";
     }
   }
     cout<<"\n";
  }
  cout<<"\n";
  for(i=0;i<n;i++)
  {
    cout<<" "<<(i+1)<<"  ";
  }
 }
