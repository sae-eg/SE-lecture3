// • Insertion sort (mandatory)
// • Quick sort (optional)

#include <stdio.h>
#include <stdlib.h>
#define N 10000000

int insertion_sort(int a[]){

	for (int j = 1; j < N; j++){
		int key = a[j];
		int i = j-1;

		while(i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}

	for (int i=0; i<N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int a[N];
	for (int i = 0; i<N; i++){
		a[i] = (rand() % N) + 1;
	}
	insertion_sort(a);
	return 0;
}