// {7, 11, 3, 9, 2} (Normal Case)

#include <iostream>
int main()
{
    int arr[5] = {1,2,4,3,5};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        bool swapped = false;
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
                count++;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout<<"\n"<<count;
    return 0;
}