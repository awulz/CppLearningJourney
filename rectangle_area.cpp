#include<iostream>
using namespace std;

void area(int height,int width)
{
	int ar=height*width;
	cout<<"Area of rectangle = " << ar;
}

int main()
{
  int h,w;
  cout << "Enter height\n";
  cin >> h;
  cout << "Enter width\n";
  cin >> w;
  area(h,w);
}

