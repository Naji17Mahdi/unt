#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int n;
	float a;
	float ave;
	float sum = 0;
	cout<<"Please enter numbers you wish to see their average : "<<endl;
	cin>>n;
	
	for ( int i = 1 ; i <= n ; i++ )
	{
		cout<<"enter the number"<<i<<':'<<endl;
		cin>>a;
		
		sum += a;
	}
	ave = sum / n;
	
	cout<<"The average is : "<<ave<<endl;
}

