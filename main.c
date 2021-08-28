#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 7
int intArray[MAX] = {38,27,43,3,9,82,10};
int b[MAX];
void selectionSort(){
	int i,j,indexMin;
	for(i=0;i<MAX-1;i++){
		indexMin=i;
		for(j=i+1;j<MAX;j++){
			if(intArray[j] < intArray[indexMin]){
				indexMin=j;
			}
			
		}
		if(indexMin != i){
			int temp= intArray[indexMin];
			intArray[indexMin]=intArray[i];
			intArray[i]=temp;
		}
	}
}
void bubbleSort(){
	int temp;
	int i,j;
	int swapped =0;
	for(i=0;i<MAX-1;i++){
		
		for(j=0;j<MAX-1-i;j++){
			if(intArray[j] > intArray[j+1]){
				temp = intArray[j];
				intArray[j]=intArray[j+1];
				intArray[j+1]=temp;
				swapped = 1;
			}
		}
		if(swapped != 0){
			printf("swapped!");
		}
	}
}



void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i < MAX;i++) {
      printf("%d ", intArray[i]);
   }
	
   printf("]\n");
}


void main(void) {
   printf("Input Array: ");
   display();
   //mergeSort(intArray, 0, MAX - 1);
   //selectionSort();
   bubbleSort();
   //printf("Output Array: ");
   display();
	
}
