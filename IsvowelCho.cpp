
/** 5/5 points **/

/*
Program Input - a string which may contain spaces
Processing:
1. Take in a string
2. Read each character in the string
3. If it is a vowel, increment the vowel counter
4. Display the number of vowels in the string.
Program output - the number of vowels in the string
*/

#include <iostream>
#include <string>

using namespace std;
/*
Input parameter - a character
Processing:
1. Read a character
2. If character is upper or lower case a, e, i, o, u, A, E, I, O, U
3. Return true or return false to main function
Output:Returns true or false
*/

bool isVowel(char x);

int main()
{
    char ch;
    int i, len, number=0;
    string str;
    cout << "Please enter a string " << endl;
    getline(cin, str);
    len = str.length();
    //cout << len << endl;
    for (i=0; i<len; i++){
        ch=str[i];
        //cout << ch << endl;
        if (isVowel(ch) == true){
            number+=1;
        }
    }
    cout << "There are " << number << " vowel(s) in the string you entered." << endl;
    return 0;
}
bool isVowel(char x){
    string Vowels = "aeiouAEIOU";
    char a;
    int length;
    length = Vowels.length();
    int z=0;
    for (z; z<length;z++){
        a=Vowels[z];
        //cout << a << endl;
        if (x==a){
            return true;
        }
    }
    return false;
}

