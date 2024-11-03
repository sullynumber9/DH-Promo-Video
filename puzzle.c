#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 6

int* backend(void) {
    // Set up the char array for each of the letters in change: we are going to malloc it so it is actually looking inside the computers memory
    int* arrayptr;

    // Creating the actual character array with malloc because it's fun

    arrayptr = (int*) (malloc(SIZE * sizeof(char)));
    printf("Malloc run");

    // Assigning each of the letters in "CHANGE" to different indices in the array

    arrayptr[0] = 'C';
    arrayptr[1] = 'H';
    arrayptr[2] = 'A';
    arrayptr[3] = 'N';
    arrayptr[4] = 'G';
    arrayptr[5] = 'E';

    return arrayptr;

}

void deinit(int* ptr) {
    free(ptr);
    ptr = NULL;
}


int main(void) {

    // Setting up a char array

    int result = 0;
    int array[6];
    int i;
    char input[200];
    
    // array = backend();

    // // Test print of the array to make sure it's working

    // for (i = 0; i < SIZE; i++) {
    //     printf("%c", array[i]);
    // }
    // printf("\n");

    // printf("can we make it here?");

    // printf("can we make it here?");

    array[0] = 'C';
    array[1] = 'H';
    array[2] = 'A';
    array[3] = 'N';
    array[4] = 'G';
    array[5] = 'E';

    // for (i = 0; i < SIZE; i++) {
    //      printf("%c", array[i]);
    // }

    int done;


    printf("Take a look inside your computers memory!!!\n");


    for (i = 0; i < SIZE; i++) {

        printf("Enter an address: ");
        scanf("%s", input);
        printf("Data Found at Address: %d \n", array[i]);
    }








    // free(array);

    // printf("can we make it here?");





    // Executing the EXE file within C

    result = system("start \"\" \"change.exe");

    if (result == -1) {
        printf("Execution of file failed!");
        return 1;
    }

    // printf("can we make it here?");

    




    Sleep(100000);

    //deinit(array);

    return 0;







}