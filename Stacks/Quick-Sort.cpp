// C++ program to implement quick sort using stack

/*
Algorithm for quick sort using stack:

Procedure:-

QUICK(array, n, BEG, END, LOC)

1. [Initialize]
   Left = BEG
   Right = END
   LOC = BEG

2. [Scan from right to left]
   Repeat while array[LOC] <= array[Right] and LOC != Right
      Right = Right - 1
   If LOC = Right, then
      Return
   If array[LOC] > array[Right], then
      Swap array[LOC] and array[Right]
      LOC = Right
      Go to step 3

3. [Scan from left to right]
    Repeat while array[Left] <= array[LOC] and Left != LOC
        Left = Left + 1
    If LOC = Left, then
        Return
    If array[Left] > array[LOC], then
        Swap array[LOC] and array[Left]
        LOC = Left
        Go to step 2

Algorithm for quick sort using stack:-

QUICKSORT(array, n, LOC, lower[], upper[])

1. START

2. [Initialize]
   Top = -1
   If n > 0, then
      Top = Top + 1
      lower[Top] = 0
      upper[Top] = n - 1

3.  [Repeat steps 4 to 7 while Top != -1]

4. [Pop sublist from stacks]
    Beg = lower[Top]
    End = upper[Top]
    Top = Top - 1

5. [Call QUICK]
    QUICK(ARRAY, N, BEG,END, LOC)

6. [Push Left Sublist onto Stacks when it has 2 or more elements]
    If BEG < LOC -1 then:
        Top = Top + 1 ; lower[Top] = BEG ; upper[Top] = LOC -1
        [End of If Structure]

7. [Push Right Sublist onto Stacks when it has 2 or more elements]
    If LOC + 1 < END then:
        Top = Top + 1 ; lower[Top] = LOC + 1 ; upper[Top] = END
        [End of If Structure]
[End of step 3 loop]

8. EXIT


*/
#include <iostream>
using namespace std;

// Function to display the array
void display(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to perform the partition step of quick sort
void quick(int array[], int n, int BEG, int END, int& LOC) {
    int Left = BEG;
    int Right = END;
    LOC = BEG;

    // Scan from right to left
    right_to_left:
    for (int i = n; i > 0; i++) {
        while (array[LOC] <= array[Right] && LOC != Right) {
            Right = Right - 1;
        }
        if (LOC == Right) {
            break;
        }
        if (array[LOC] > array[Right]) {
            swap(array[LOC], array[Right]);
            LOC = Right;
            goto left_to_right;
        }
    }

    // Scan from left to right
    left_to_right:
    for (int i = 0; i < n; i++) {
        while (array[Left] <= array[LOC] && Left != LOC) {
            Left = Left + 1;
        }
        if (LOC == Left) {
            break;
        }
        if (array[Left] > array[LOC]) {
            swap(array[LOC], array[Left]);
            LOC = Left;
            goto right_to_left;
        }
    }
}

// Function to perform quick sort using stack
void quickSort(int array[], int n, int& LOC, int lower[], int upper[]) {
    int Top = -1;
    if (n > 0) {
        Top = Top + 1;
        lower[Top] = 0;
        upper[Top] = n - 1;
    }

    while (Top != -1) {
        int Beg = lower[Top];
        int End = upper[Top];
        Top = Top - 1;
        quick(array, n, Beg, End, LOC);
        if (Beg < LOC) {
            Top = Top + 1;
            lower[Top] = Beg;
            upper[Top] = LOC - 1;
        }
        if (LOC + 1 < End) {
            Top = Top + 1;
            lower[Top] = LOC + 1;
            upper[Top] = End;
        }
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int lower[n];
    int upper[n];
    int LOC = 0;
    cout<<"The array is\n";
    display(array, n);
    quickSort(array, n, LOC, lower, upper);
    cout<<"The sorted array is\n";
    display(array, n);

    return 0;
}