#include <iostream>
#include<algorithm>
using namespace std;

void getFrequency(int numbers[], int arraySize) {
    int maxNum = *max_element(numbers, numbers+arraySize);
    int freqArray[maxNum+1];
    
    for(int i = 0; i <= maxNum; i++) {
        freqArray[i] = 0;
    }
    
    for(int i=0;i<arraySize;i++){
        freqArray[numbers[i]]++;
    }
    cout<<"Elements and their frequencies :"<<endl;
    for(int i=0;i<=maxNum;i++){
        cout<<i<<"->"<<freqArray[i]<<endl;
    }
    
}

int main() {
    cout << "Enter the number of test cases: ";
    int numberOfTestCases;
    cin >> numberOfTestCases;
    
    while (numberOfTestCases--) {
        cout << "Enter the size of the array: ";
        int arraySize;
        cin >> arraySize;
        
        cout << "Enter " << arraySize << " integers (0-1000): ";
        int inputNumbers[1001]; // static array to hold input numbers
        for (int index = 0; index < arraySize; index++) {
            cin >> inputNumbers[index];
        }
        
        getFrequency(inputNumbers, arraySize);
        
        cout << endl; // extra newline between test cases
    }
    
    return 0;
}
