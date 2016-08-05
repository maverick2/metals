#include<iostream>
#include<algorithm>

using namespace std;

void partition(int arr[], int p, int q) {
	int i = 1, j = 0;
	for (j = 1;j < q;j++) {
		if (arr[j] < arr[0]) {
			swap(arr[j], arr[i]);
			i++;
		}
	}
	swap(arr[i-1], arr[0]);
	/*for (int i = 0;i < q;i++) {
		cout << arr[i]<<" ";
	}*/
}


int main() {
	int arr[] = { 3,2,5,4,1,7,6,8 };
	partition(arr, 0, 8);
	
	cin.get();
	return 0;
}
