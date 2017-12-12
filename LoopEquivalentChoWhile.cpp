
/** 4.9/5 points   (combined with do..while and for versions)
    Validate the inputs to ensure they meet the preconditions **/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;



    /*//"The numbers between"
    while (firstNum < secondNum){
        cout << firstNum << " " << endl;
        firstNum=firstNum+1;
    }
    */

    //"The odd numbers between"
    cout << "The odd numbers between the two numbers are" << endl;
    while (firstNum%2==0 && firstNum<=secondNum){
        firstNum=firstNum+1;
        }
        while (firstNum%2!=0 && firstNum<=secondNum){
            cout << firstNum << endl;
            firstNum=firstNum+2;
        }

    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    //"The sum of even numbers between"
    int sum=0;
    while (firstNum%2!=0 && firstNum<=secondNum){
        firstNum=firstNum+1;
        }
        while (firstNum%2==0 && firstNum<=secondNum){
            sum=sum+firstNum;
            //cout << firstNum << endl;
            firstNum=firstNum+2;
        //cout<<sum<<endl;
        }
    cout<< "The sum of even numbers between the two numbers is " << sum<<endl;


    //"The numbers and squares between 1 and 10."
    cout << "The numbers and squares between 1 and 10 are " << endl;
    int x=1;
    while (x<=10){
        float y=pow(x,int(2));
        cout << x << " " << y << endl;
        x=x+int(1);

    }

    cout << "Please enter two numbers separated by a space" << endl;
    cin >> firstNum >> secondNum;
    //"The sum of the square of odd numbers between"

    //int sum=0;
    sum=0;
    while (firstNum%2==0 && firstNum<=secondNum){
        firstNum=firstNum+1;
        }
        while (firstNum%2!=0 && firstNum<=secondNum){
            sum=sum+pow(firstNum,2);
            firstNum=firstNum+2;}
    cout << "The sum of the square of odd numbers between is " <<sum << endl;


    cout << "The letters from a to z uppercase" << endl;
    char a='a';
    x=int(a);
    char z='z';
    while (x<=int(z)){
        int b=x-int(32);
        cout << (char)b << endl;
        x=x+int(1);
    }

    //getline(infilex,strvar)
    return 0;
}
