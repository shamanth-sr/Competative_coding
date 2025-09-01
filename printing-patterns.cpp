// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    int i=1;
    cout << "Enter number"<<"\n";
    cin >> n;
    int j=n;
    while(j!=0){
        while(i!=n+1)
        {
            cout << i;
            i++;
        }
        cout << "\n";
        i=1;
        j--;
        
    
    }

    return 0;
}
