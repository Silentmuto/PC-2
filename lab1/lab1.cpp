// lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sumaArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
int cautaArray(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            return true;
    }
    return false;
}
int main()
{
    int a[1000],n,k;
    std::cout << "Introduceti dimensiunea array-ului si apoi elementele acestuia \n";
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    std::cout << "Introduceti nr cautat \n";
    std::cin >> k;
    std::cout << " Suma elementelor este " << sumaArray(a, n)<<" \n";
    if (cautaArray(a, n, k))
        std::cout << "gasit";
    else
        std::cout << "nu gasit";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
