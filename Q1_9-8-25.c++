/*Write a C++ program that takes a string as input and transforms as provided in the example string.
 Input : "hello" 
Output : "igpqt" */ 

#include <iostream>
#include <string>
//#include <typeinfo>
using namespace std;


int main(){
    string ip, op, output_string;
    char arr[20];

    cout<< "Enter the input string";
    cin>>ip;

    //arr[ip.length()];

    
    for(int i=0; i<ip.length(); i++){
        arr[i] = ip[i];
    }

    for(int i=0; i<ip.length(); i++){
        op[i] = (int)ip[i] + (i+1);
        string output_string(op, sizeof(op)/sizeof(op[0]));
    }
    cout << "Output: "<<output_string;

}