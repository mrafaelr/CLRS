#include <stdio.h>
#define TYPE int

void insertion_sort(int list[], int length)
{
	for(int i = 1; i < length; i++)
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

}

void print_array(int list[], int length){

	for(int i = 0; i < length; i++)
        {
                printf("%d ", list[i]);
        }
        printf("\n");
}



int main()
{
	int  list[8] = {1, 2, 0, 2, 1, 9, 9, 6};
	
	int length = sizeof(list)/sizeof(list[0]);

	print_array(list, length);

	insertion_sort(list, length);

	print_array(list, length);

	return 0;
}
