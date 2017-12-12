
/** 4.9/5 points   (combined with while and for versions)
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
    do{
        if (firstNum%2==0){
            firstNum=firstNum+1;}
        cout << firstNum << endl;
        firstNum+=2;
    }
    while (firstNum<=secondNum);


    //"The sum of even numbers between"
    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    int sum=0;
    do{
        if (firstNum%2!=0){
            firstNum=firstNum+1;}
        sum+=firstNum;
        firstNum+=2;
    }
    while (firstNum<=secondNum);
    cout << "The sum of the even numbers between is " << sum << endl;







    //"The numbers and squares between 1 and 10."
    cout << "The numbers and squares between 1 and 10 are " << endl;
    int x=1;
    do{
        float y=pow(x,int(2));
        cout << x << " " << y << endl;
        x+=1;
    }
    while (x<=10);




    //"The sum of the square of odd numbers between"
    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    sum=0;
    do{
        if (firstNum%2==0){
            firstNum=firstNum+1;}
        sum=sum+pow(firstNum,2);
        firstNum=firstNum+2;}
    while (firstNum<=secondNum);
    cout << "The sum of the square of odd numbers between is " <<sum << endl;



    cout << "The letters from a to z uppercase" << endl;
    char a='a';
    x=int(a);
    char z='z';
    do{
        int b=x-int(32);
        cout << (char)b << endl;
        x+=1;
    }
    while (x<=int(z));

    //getline(infilex,strvar)
    return 0;
}
