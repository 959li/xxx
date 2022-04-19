#include<stdio.h>
//int feibo(int x) {
//	int a = 1;
//	int b = 1;
//	if (x <= 2)
//		return a;
//	else
//		return feibo(x - 1) + feibo(x - 2);
//}
//int main() {
//
//	int n = 0;
//	printf("需要求第几个斐波那契数：");
//	scanf_s("%d", & n);
//	int ret = feibo(n);
//	printf("%d\n", ret);
//}

void maopao(int arr[], int sz) {
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i < sz - 1; i++) {
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] < arr[j + 1])
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
		}
	}
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, sz);
	for (int i = 0; i < 10; i++) {
	printf("%d ", arr[i]);
	}
	
}
