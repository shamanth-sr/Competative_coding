/*Print this pattern
1111
222
33
4*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    
    cout<<"Value";
    cin>>n;
    
    while(i<=n){
        int j = i;
        while(j<=n){
            cout<<i;
            j++; 
        }
        cout<<endl;
        i++;
    }

    return 0;
}