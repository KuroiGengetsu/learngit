#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	scanf("%d", &n);
	int *array = (int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < i; j++)
		{
			if(array[j] > array[i])
				array[j] ^= array[i] ^= array[j] ^= array[i];
		}
	for(int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");
	free(array);
	return 0;
}
