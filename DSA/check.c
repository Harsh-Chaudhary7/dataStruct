#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back

void heapify(int a[], int n, int i) {
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && a[l] > a[largest])
		largest = l;
	if (r < n && a[r] > a[largest])
		largest = r;

	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}

}

void heapsort(int &a[], int n) {
	for (int i = 0; i < (n / 2) - 1; i >= 0; i--)
		heapify(a, n, i);

	for (int i = n - 1; i > 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}


}


int main() {
	int a[] = {2, 7, 3, 13, 75, 32};
	int n = sizeof(a) / sizeof(a[0]);
	printf("Unsorted array is\n");

	heapsort(a, n);

	printf("Sorted array is\n");
	for (int i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
}