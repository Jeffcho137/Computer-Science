#include<iostream>
#include<cmath>

using namespace std;

double root(double x, double y, double e);

int main() {

double x,e,est;

cout<<"Enter a number : ";
cin>>x;
est=x;
cout<<"Enter the tolerance: ";
cin>>e;
cout << root(x,est,e);
return 0;
}
double root(double x, double est, double e) {

double a = est;
if (abs(a*a - x) <= e)
{
return a;
}
else
{
//a=((a*a + x)/(2*a));
return root(x,((a*a) + x)/(2*a),e);
}

}
