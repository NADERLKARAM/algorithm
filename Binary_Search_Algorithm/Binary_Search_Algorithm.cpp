#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int element) {

	while (start <= end) {

		int mid = (start + end) / 2;//both=>m = l + (r - l) / 2 both=>m = (2 l + r -l)/2


		if (element == array[mid])
			return mid;

		if (element < array[mid])

			end = mid - 1;

		else

			start = mid + 1;

	}

	return -1;

}
	int main()
	{
		int arr[] = { 2, 3, 4, 10, 40 };
		int n = sizeof(arr) / sizeof(arr[0]);

		int num;
		cout << "Enter an Integer :";
		cin >> num;

		int result = binarySearch(arr, 0, n - 1, num);
		if (result == -1)
			cout << "The Number : (" << num << ") Was Not Found." << endl;
		else
			cout << "The Number : (" << arr[result] << ") Was Found At Index : (" << result << ")" << endl;

		return 0;

	}



