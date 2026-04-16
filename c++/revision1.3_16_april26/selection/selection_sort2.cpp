// {3, 5, 8, 4, 1, 9}
#include <iostream>
int main()
{
    int arr[6] = {3, 5, 8, 4, 1, 9};
    for(int i=0;i<5;i++){
        int min_index = i;
        for(int j=i+1;j<6;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}