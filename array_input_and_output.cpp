#include<iostream>
#include<vector>

using namespace std;

int main()
 {
 int arr[10];			// declaration of an array old
 //vector<int> arr(10);	// declaration of an array new
 int i;
 
	 cout<<"Enter values to be stored in array : \n";
	 for(i=0; i<10;i++)
	 {
	 	cout<<"Value for arr["<<i<<"] : ";
	 	cin>>arr[i];
	 }
	 cout<<"Array Elements Are : \n";
	 for(i=0; i<10;i++)
	 {
	 	cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
	 }
 return 0;
 }
