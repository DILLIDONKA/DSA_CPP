#include <bits/stdc++.h>
using namespace std;

int main() {
     int n= 5; 
    int Arr[n]; 
    
    for (int i = 0; i < n; i++) {
             cout << "Enter element " << i + 1 << ": ";
             cin >> Arr[i];
    }

    
          cout << "Elements in the array: ";
    for (int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }

    return 0;
}
