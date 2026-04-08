// एक फंक्शन बनव जे ॲरेला 'Argument' म्हणून घेईल आणि त्याचे सर्व एलिमेंट्स प्रिंट करेल.

#include<iostream>
void printArray(int arr1[5]){
    for(int i=0;i<5;i++){
        std::cout<<arr1[i]<<" ";
    }
}

int main(){
    int arr2[5] = {2,4,6,8,10};
    printArray(arr2);
    std::cout<<std::endl;
    return 0;
}