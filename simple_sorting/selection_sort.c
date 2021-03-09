#include <stdio.h>

void print_array(int list[], int length){

        for(int i = 0; i < length; i++)
        {
                printf("%d ", list[i]);
        }
        printf("\n");
}

void selection_sort(int list[], int size){

	int temp, swap;

	for(int i = 0; i<8; i++){
                temp = i;
                for(int j = i; j<8; j++){
                        if(list[j] < list[temp]) temp = j;
                }
                swap = list[i];
                list[i] = list[temp];
                list[temp] = swap;
        }
}

int main(){

	int list[8] = {1, 2, 0, 2, 1, 9, 9, 6};
	int i, j, temp, swap;
	
	print_array(list, 8);

	selection_sort(list, 8);

	print_array(list, 8);
	
	return 0;

}
