#include <iostream>
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int start = 0, end = 4;
	int target = 2;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (target == arr[mid])
		{
			std::cout << mid << "\n";
			return -1;
		}
		else if (target > arr[mid])
		{
			start = mid + 1;
			
		}
		else
		{
			end = mid - 1;
			//std::cout << start << "\n";
		}
	}
	std::cout << -1 << "\n";
	return 0;
}
