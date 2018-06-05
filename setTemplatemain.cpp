#include <iostream>
#include "unorderedSet.h"


using namespace std;

int main()
{
    int iVal1[5]={1,2,3,4,5};
    int iVal2[5]={3,4,5,6,7};

   // int iVal[10] = {1,3,5,7,2,4,2,6,8,9};
    //string sVal[10] = {"one","three", "five", "seven", "two", "four", "two", "six","eight","nine"};
    string sVal1[5]={"one", "two","three","four","five"};
    string sVal2[5]={"three", "four","five","six","seven"};
    //unorderedSet<int> iSet;
    //unorderedSet<string> sSet;
    unorderedSet<int> SetA,SetB,SetC;
    unorderedSet<string> sSetA,sSetB,sSetC;
    for(int i=0; i<5;i++)
    {
        SetA.insertEnd(iVal1[i]);
        SetB.insertEnd(iVal2[i]);
        sSetA.insertEnd(sVal1[i]);
        sSetB.insertEnd(sVal2[i]);
    }
    cout<<"testing union: "<<endl;
    SetC=SetA+SetB;
    cout<<"SetA: "<<endl;
    SetA.print();
    cout<<"SetB: "<<endl;
    SetB.print();
    cout<<"SetC = SetA+SetB: "<<endl;
    SetC.print();

    sSetC=sSetA+sSetB;
    cout<<"sSetA: "<<endl;
    sSetA.print();
    cout<<"sSetB: "<<endl;
    sSetB.print();
    cout<<"sSetC= sSetA+sSetB: "<<endl;
    sSetC.print();
    /*for (int i=0; i<10; i++)
    {
        iSet.insertEnd(iVal[i]);
        sSet.insertEnd(sVal[i]);
    }
    iSet.print();
    cout << endl;
    sSet.print();
    cout << endl;*/
    cout<<"testing intersection: "<<endl;
    SetC=SetA-SetB;
    cout<<"SetA: "<<endl;
    SetA.print();
    cout<<"SetB: "<<endl;
    SetB.print();
    cout<<"SetC = SetA-SetB: "<<endl;
    SetC.print();

    sSetC=sSetA-sSetB;
    cout<<"sSetA: "<<endl;
    sSetA.print();
    cout<<"sSetB: "<<endl;
    sSetB.print();
    cout<<"sSetC= sSetA-sSetB: "<<endl;
    sSetC.print();
    return 0;
}
