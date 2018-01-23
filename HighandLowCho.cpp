/** 5/5 points  **/
#include <iostream>
#include <iomanip>
/*
Input: total number of numbers in array, each individual number in array
Processing:
1. Get the total number of numbers in array
2. Get each individual number in array
3. small(array, length)
4. large(array, length)
Output:
Display the index of the first occurrence of the smallest number and the index of the last occurrence of the largest number.
*/
int small(int[],int length);
/*
Input: array and length of array
Processing:
1. Get array and length of array
2. For each index in array, find smallest number
3. Display index of smallest number
Output:
Return index of the first occurrence of smallest number
*/
int large(int[],int length);
/*
Input: array and length of array
Processing:
1. Get array and length of array
2. For each index in array, find largest number
3. Display index of largest number
Output:
Return index of the last occurrence of largest number
*/
using namespace std;

int main()
{
    int index;
    int length;
    cout << "How many numbers are in your array? " << endl;
    cin >> length;

    int numbers[length];
    cout << "Enter the numbers in your array, and make sure to return after each number entry" << endl;
    for (index = 0; index < length; index++)
        cin >> numbers[index];
    /*for (index = 0; index < length; index++)
        cout << numbers[index] << " ";*/    //printing array
    cout << "The index of the first occurrence of the smallest item is " << small(numbers,length) << endl;
    cout << "The index of the last occurrence of the largest item is " << large(numbers,length) << endl;
    return 0;
}
int small(int numbers[],int length)
{
int index;
int minIndex = 0;
for (index = 1; index < length; index++)
    if (numbers[minIndex] > numbers[index])
        minIndex = index;

return minIndex;

}
int large(int numbers[],int length)
{
int index;
int maxIndex = 0;
for (index = 1; index < length; index++)
    if (numbers[maxIndex] <= numbers[index])
        maxIndex = index;

return maxIndex;
}
