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

/* Pattern 
1 2 3
1 2 3
1 2 3 */

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    
    cout << "Enter the value";
    cin >> n;
    
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* Pattern 
3 2 1
3 2 1
3 2 1*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1; //or i=0;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (i <= n){             //while (i< n)
        int j = 1;              // j=0
        while (j <= n){         //while (j < n )
            cout << n-j+1;      // cout << n-j
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* Pattern
1 2 3
4 5 6
7 8 9*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1, count = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << count << "\t";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* Pattern
*
**
***
****    */

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (i <= n){
        int j = 1;
        while (j <= i){
           cout<< "*";
           j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* Pattern
1
2 2
3 3 3
4 4 4 4 */

#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (row <= n){
        int col = 1;
        while (col <= row){
           cout<< row << "\t";
           col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/* Pattern
1
2 3
4 5 6
7 8 9 10 */

#include<iostream>
using namespace std;

int main(){
    int n, row = 1, count = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (row <= n){
        int col = 1;
        while (col <= row){
           cout<< count << "\t";
           col++;
           count++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/* Pattern
1
2 3
3 4 5
4 5 6 7*/

#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (row <= n){
        int col = 1;
        while (col <= row){
           cout<< row + col - 1 << "\t";
           col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/* Pattern
1
2 3
3 4 5
4 5 6 7*/

#include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    
    cout << "Enter the value ";
    cin >> n;
    
    while (row <= n){
        int col = 1;
        while (col <= row){
           cout<< row - col + 1 << "\t";
           col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}