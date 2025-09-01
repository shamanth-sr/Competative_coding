// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char al=65,bl=al;
    int n;
    cout << "Enter number";
    cin >> n;
    int i=0,j=n;
    while(n)
    {
        while(i<j)
        {
            if(al>'Z')
             break;
        
            cout << al ;
            al++;
            i++;
        }
        bl++;
        al = bl;
        if(al>'Z')
        break;
        
        cout<< "\n";
        i=0;
        
        n--;
    }
    
    
    return 0;
}
