#include <iostream>
using namespace std;

void tower(int n, string first, string second, string third)
{
    // Base case: If there is only one disk, move it directly from the first tower to the third tower
    if (n == 1)
    {
        cout << "Move disk 1 from " << first << " to " << third << endl;
        return;
    }
    
    // Move n-1 disks from the first tower to the second tower, using the third tower as an auxiliary
    tower(n - 1, first, third, second);
    
    // Move the nth disk from the first tower to the third tower
    cout << "Move disk " << n << " from " << first << " to " << third << endl;
    
    // Move the n-1 disks from the second tower to the third tower, using the first tower as an auxiliary
    tower(n - 1, second, first, third);
}

int main()
{
    int a;
    cout << "Enter the number of disks: ";
    cin >> a;

    tower(a, "A", "B", "C");
    
    return 0;
}