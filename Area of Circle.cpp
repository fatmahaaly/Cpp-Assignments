#include<iostream>
#include<cmath>
using namespace std;

double calculateCircleArea(double radius)
{
    return M_PI * radius * radius;
}
int main()
{
    double radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    if (radius >= 0)
	{
        double area = calculateCircleArea(radius);
        cout<<"Area: "<<area<<endl;
    }
	else
	{
        cout<<"Invalid radius"<<endl;
    }
    return 0;
}
