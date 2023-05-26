#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *n, float h, int a) // Constructor
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{
    Person maruf("Maruf Hasan", 6.00, 24); // Passing Values
    Person kona("Nishat Jahan Kona", 5.80, 25); // Passing Values

    // Compare the ages of maruf and kona
    if (maruf.age > kona.age)
    {
        cout << "Maruf is older than Kona" << endl;
    }
    else if (maruf.age < kona.age)
    {
        cout << "Kona is older than Maruf" << endl;
    }
    else
    {
        cout << "Maruf and Kona are the same age" << endl;
    }

    return 0;
}
