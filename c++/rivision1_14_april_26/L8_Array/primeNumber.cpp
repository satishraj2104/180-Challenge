// print prime number from array using fucntion

#include <iostream>
void isPrime(int n)
{
    if (n < 2)
    {
        return ;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return ;
    }
    std::cout<<n<<"\n";
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        isPrime(arr[i]);
    }
    std::cout << "\n";
    return 0;
}