
/** 23/25 points
    There is a logic error, see below
**/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile1, infile2;
    ofstream outfile;
    infile1.open("file1.txt");
    infile2.open("file2.txt");
    outfile.open("Outputfilemerge.txt");

    string var1, var2;
    getline(infile1, var1);
    getline(infile2, var2);

    while (!infile1.eof() && !infile2.eof()){
        if (var1 < var2){
            outfile << var1 << endl;
            getline(infile1, var1);}
            /** These lines are not needed and are causing the output to be incorrect
                with the test files I used. **/
           /* if (infile1.eof() == true){
                outfile <<var1 << endl;
            }*/
        else {
            outfile << var2 << endl;
            getline(infile2,var2);
            /** Remove **/
            /*if (infile2.eof()==true){
                outfile << var2 << endl;
            }*/
        }
    }
    while (!infile1.eof()){
        outfile << var1 << endl;
        getline(infile1, var1);
        /** Remove **/
       /* if (infile1.eof()==true){
            outfile << var1 << endl;
        }*/
    }
    while (!infile2.eof()){
        outfile << var2 << endl;
        getline(infile2, var2);
        /** Remove **/
        /*if (infile1.eof()==true){
            outfile << var2 << endl;
    }*/
    }
    infile1.close();
    infile2.close();
    outfile.close();
    return 0;
}
