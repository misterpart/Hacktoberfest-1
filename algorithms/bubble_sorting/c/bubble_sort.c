//algorithm of bubble sort in c
//start from the first elemnent 
/*1. start comparing it with the next element
  2. swap the element with the first smaller element it encounters.
  3. every traversal pushes the largest element towards the end.
*/
  




#include <stdio.h>
#include <stdbool.h>

#define n 10

int list[n] = {1,8,4,6,0,3,5,2,7,9};

int i = 0;
bool switched = true;

void display() {
   int i;
   printf("[");
	

   for(i = 0; i < n; i++) {
      printf("%d ",list[i]);
   }
	
   printf("]\n");
}

void bubbleSort() {
   int temp;
   int j;
   //bool switched;
   //i = 0;
   //for(i = 0; i < n-1; i++) { 
   if(i == n - 1 && switched == false) return;//solucao trivial
    //if(i == n - 1) return;

    switched = false;		
   for(j = 0; j < n-i-1; j++) {
        printf("     Items compared: [ %d, %d ] ", list[j],list[j+1]);
			
        if(list[j] > list[j+1]) {
           switched = true;
           temp = list[j];
           list[j] = list[j+1];
           list[j+1] = temp;

           printf(" => swapped [%d, %d]\n",list[j],list[j+1]);
        }else {
           printf(" => not swapped\n");
        }
		
     }//end for
      
      //printf("Iteration %d#: ",(i+1)); 
      //display();
        i = i + 1;
     
    bubbleSort();
	
}

void main() {
   printf("Input Array: ");
   display();
   printf("\n");
	
   bubbleSort();
   printf("\nOutput Array: ");
   display();
}
