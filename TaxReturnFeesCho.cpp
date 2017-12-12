
/** 5/5 points **/

/*
Input:Program Input - Customer's income and consultation time (in minutes)

Constants -
Low income is <= $25000
Low income rate is 40% of regular rate for minutes over 30
High income rate is 70% for minutes over 20
Regular hourly rate is $50

Process:
1. Get customer income and consulting time
2. If person has low income and consulting time <= 30minutes,
    fee is $0
otherwise fee is 40%* hourly rate * difference between consulting time and 30 minutes
3. If person has high income and consulting time <= 20minutes,
    fee is $0
otherwise fee is 70%* hourly rate * difference between consulting time and 20 minutes
4. Display fee

Output:Fee for services
*/
#include <iostream>
#include <iomanip>

using namespace std;
bool isLowIncome(double x, int & y);
/*
Input - customer income, consulting time (in minutes)

Constants
-Low income is <= $25000

Process:
1. Get customer income, consulting time (in minutes)
2. Return true if customer income <= 25000,
otherwise return false

Output: Returns true for low income, false for high income
Postcondition - consulting time is updated by reference
*/
double calcFee(int a, int b, double c, double d);
/*
Input parameters: consulting time (in minutes), free minutes, service rate, hourly rate

Process:
1. if (consulting time <= free minutes),
    fee is 0
otherwise fee is the service rate * hourly rate * ((consulting time - free minutes) / 60)

Output:Returns fee
*/
int main()
{
    double income, service_charge, hour_rate = 50;
    int consult_time, freetime;
    if (isLowIncome(income,consult_time)==true){
        service_charge=0.4;
        freetime=30;
        cout << "The total tax return fee is $" << fixed << setprecision(2) << calcFee(consult_time,freetime,service_charge,hour_rate) << endl;
    }
    else {
        service_charge=0.7;
        freetime=20;
        cout << "The total tax return fee is $" << fixed << showpoint << setprecision(2) << calcFee(consult_time,freetime,service_charge,hour_rate) << endl;
    }
    return 0;
}
bool isLowIncome(double x, int & y){
    cout << "Please enter income " << endl;
    cout << "Please enter consultation time in minutes" << endl;
    cin >> x >> y;
    if (x<=25000){
        return true;
    }
    else {
        return false;
    }
}
double calcFee(int a, int b, double c, double d){
    double totalfee;
    if (a <= b){
        totalfee=0;
    }
    else{
        totalfee =c*d*((a-b)/double(60));
    }
    return totalfee;
}

