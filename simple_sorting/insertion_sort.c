#include <stdio.h>
#define TYPE int


int main()
{
	int  list[8] = {1, 2, 0, 2, 1, 9, 9, 6};
	
	int size_of_array = sizeof(list)/sizeof(list[0]);
	
	for(int i = 1; i < size_of_array; i++)
	{
		int key = list[i];
		int j = i - 1;
		while((j >= 0) && (list[j] > key))
		{
			list[j + 1] = list[j];
			j--;
		}
		list[++j] = key;
	}

	for(int i = 0; i < 8; i++)
	{
		printf("%d ", list[i]);
	}

	return 0;
}
