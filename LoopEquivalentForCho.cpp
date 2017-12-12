
/** 4.9/5 points   (combined with do..while and while versions)
    Validate the inputs to ensure they meet the preconditions **/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;

    //"The odd numbers between"
    cout << "The odd numbers between the two numbers are" << endl;
    if (firstNum%2==0 && firstNum<=secondNum){
            firstNum=firstNum+1;
    }
    for (firstNum; firstNum<=secondNum;firstNum=firstNum+2)
        cout << firstNum << endl;

    //"The sum of even numbers between the two numbers"
    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    int sum=0;
    if (firstNum%2!=0 && firstNum<=secondNum){
        firstNum=firstNum+1;
        }
    for (firstNum; firstNum<=secondNum;firstNum=firstNum+2)
        sum=sum+firstNum;
    cout<< "The sum of even numbers between the two numbers is " << sum <<endl;

    //"The numbers and squares between 1 and 10."
    cout << "The numbers and squares between 1 and 10 are " << endl;
    int x=1;
    float y;
    for (x; x<=int(10); x++){
        y=pow(x,int(2));
        cout << x << " " << y << endl;
    }

    //"The sum of the square of odd numbers between"
    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    sum=0;
    if (firstNum%2==0 && firstNum<=secondNum){
        firstNum=firstNum+1;
        }
    for (firstNum; firstNum<=secondNum;firstNum=firstNum+2)
        sum=sum+pow(firstNum,int(2));
    cout<< "The sum of odd numbers and their squares between the two numbers is " << sum <<endl;


    cout << "The letters from a to z uppercase" << endl;
    char a='a';
    x=int(a);
    char z='z';
    for (x; x<=int(z); x++){
        int b=x-int(32);
        cout << (char)b << endl;
    }

    //getline(infilex,strvar)
    return 0;
}

