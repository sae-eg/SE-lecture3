#include <stdio.h>
#include <stdlib.h>
#define N 10000000

void swap(int *x, int *y){
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int partition(int a[], int p, int r){
	int x = a[r];
	int i = p-1;

	for (int j=p; j<r; j++){
		if (a[j] <= x){
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[r]);
	return i+1;
}

int quick_sort(int a[], int p, int r){
	if (p < r){
		int q = partition(a, p, r);
		quick_sort(a, p, q-1);
		quick_sort(a, q+1, r);
	}
	return 0;
}

int main()
{
	int a[N];
	for (int i = 0; i<N; i++){
		a[i] = (rand() % N) + 1;
	}
	quick_sort(a, 0, N-1);

	for (int i=0; i<N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}