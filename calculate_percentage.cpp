#include<iostream>
using namespace std;

int main()
{
    int sub[5];		// subject marks
    int i;			// loop - array index
    int total=0; 	// obtained marks
    float per;  	// percentage

    cout<<"Enter marks for 5 subjects : "<<endl;

    for (i=0; i<5; i++)
    {
        cout<<"Enter marks for subject ["<<i+1<<"] : ";
        cin>>sub[i];
    }

    for (i=0; i<5; i++)
    {
        total=total+sub[i];
    }

    per=(float)total/5;
    cout<<"Percentage : "<< per;

    return 0;
}

