//Dynamic memory allocation
//#These functions are defined in stdlib.h header file
//1.malloc()-->it stands for memory allocation method in C is used to dynamically allocate a single large block of memory with the specific size. It returns void* and it can be cast to any pointer variable. It initializes each block with defaullt garbage value.
//-->syntax:  (return_type*)malloc(n*sizeof(data_type)); {default return type is void}   n is number of elements
//-->int *ptr = (*int)malloc(n*sizeof(int));
//-->here, we take the size of 4 bytes, this segment will allocate 4*n bytes of memory and pointer ptr holds the address of first byte in the allocated memory.
//if space is insufficient, allocation fails and it returns a NULL pointer
//blocks initially associates with garbage value in malloc

//2.calloc()--> it stands for contiguous memory allocation method in c is used to dynamically allocate the specified number of block of memory of the specified type. It initializes each block with a default value as 0.
//-->syntax: (return_type*)calloc(n,element-size);

//3.realloc()-->it stands for reallocation is used to dynamically change the memory allocation of a previously allocated memory.
//syntax: pointer = realloc(pointer,n*sizeof(data_type)); 
//Example:  int *ptr = (int*)malloc(10*sizeof(int));  ptr=realloc(ptr,20*sizeof(int));

//4.free()--> this method in c is used to deallocate or free the memory which was allocated my malloc() or calloc()
//syntax: free(ptr);

