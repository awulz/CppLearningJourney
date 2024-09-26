#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int bar1[31], bar2[31];
	int day1 = 0, day2 = 0;
	srand(time(0));
	for(int i = 0; i < 31; i++)
	{
		bar1[i] = rand()% 999;
	}
	    
    for(int i = 0; i < 31; i++)
    {
    	bar2[i] = rand()% 999;
	}

	if (bar1[24] <= bar2[24])
	   cout << "The first BAR in the day December 25, 2020 earned: " << bar1[24] << " Fr." << endl;
	else
	   cout << "The second BAR in the day December 25, 2020 earned: " << bar2[24] << " Fr." << endl;

	for (int i = 0; i < 31; i++)
	{
	    if (bar1[i] <= 500)
	        day1++;
	    if (bar2[i] <= 500)
	        day2++;
	}
	cout << "The day the first bar earned less than 500 Fr. is on: " << day1 << " December" <<endl;
	cout << "The day the second bar earned less than 500 Fr. is on:: " << day2 << " December" <<endl;
	return 0;
}
