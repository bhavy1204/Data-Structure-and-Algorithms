
//If you have good knowledge of dynamic array you can skip this.
//Dynamuc array : A Dynamic Array is allocated memory at runtime and its size can be changed later in the program.

//We use pointers(memory address) to allocate the memory in this case 
//We will use malloc() function,calloc() function and realloc() function.


//Dynamic memory allocation using malloc
//format :- (type*) malloc(byte-size);
//The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It is defined inside <stdlib.h> header file 

#include <stdio.h> 
#include <stdlib.h> 
//OBSERVE :- Where did we created the array in the program..?
int main() 
{ 

	// Creating pointer ptr to store address given by malloc(); 
	int* ptr; 
	int size; 

	// Asking user for the size, But notice that we are not diectly assigning it to the array.
	printf("Enter size of elements:"); 
	scanf("%d", &size); 

	// Memory allocates dynamically using malloc() 
    //The ptr was of type int that is why we also casted the pointer into int type.
    //size * sizeof(int) means that sppose the size if 5 and size of one int data type is 4 byte then (5*4) which will become 20.
    //The whole sentence means that we are asking the malloc to please give us 20 size of memory from the storage, It will give a pointer which would be pointing to that memory and then we typecast that pointer to the we want in this case "int".
	ptr = (int*)malloc(size * sizeof(int)); 

	// Checking for memory allocation 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
	} 
	else { 

		// Memory allocated 
		printf("Memory successfully allocated using "
			"malloc.\n"); 

		// Get the elements of the array 
		for (int j = 0; j < size; ++j) { 
			ptr[j] = j + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (int k = 0; k < size; ++k) { 
			printf("%d, ", ptr[k]); 
		} 
	} 

	return 0; 
}
