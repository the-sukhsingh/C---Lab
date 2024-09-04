// C++ program to Traverse an Array

/*
Algrorithm to Traverse an Array
1. Start
2. Set k = 0
3. Repeat step 4 & 5 while k < n
4. Print array[k]
5. Set k = k + 1
   [End of Step 3 Loop]
6. Exit

*/

#include<iostream>
using namespace std;

// Function to traverse and print the array
void traverse(int array[], int n) {
    cout << "The array is" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int n;
    int array[10] = {12, 5, 1, 48, 18, 1544, 45, 35, 45, 95};
    n = 10;
    traverse(array, n); // Call the traverse function
    return 0;
}
