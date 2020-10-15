#include <stdio.h>
#include <string.h>

double average(int *array, int size){
    double sum = 0;
    int i;
    for(i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

void switchArrays(int *array1, int *array2, int size) {
    int i = 0;
    for(i = 0; i < size; i++){
        int temp = array1[i];
        *(array1 + i) = array2[i];
        *(array2 + i) = temp;
    }
}

int stringlen(char *p){

    int len = 0;
    while(*p) {
        len++;
        p++;
    }
    return len;
}

int main(){
    int array[] = {2,2,2,4,8,4};
    printf("Average Test: %lf\n", average(array, 6));
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    switchArrays(arr1, arr2, sizeof(arr1)/sizeof(int));
    char string[9] = "123456789";
    printf("\"123456789\" is %d chars long.\n", stringlen(string));

    //char strcpy(char *dest, const char *src)
    char bases[20];
    strcpy(bases, "Hello");
    strcpy(bases + 3, "Hello");
    printf("Demonstration of strcpy: %s\n", bases);

    //char *strcat(char *dest, const char *src)
    char testing[16] = "Testing";
    strcat(testing, "treason");
    printf("Demonstration of strcat: %s\n", testing);
    
    //strcmp
    char first[20];
    char second[20];
    strcpy(first, "a");
    strcpy(second, "A");
    char result = strcmp(first, second);
    printf("Demonstration of strcpy: ");
    if(result < 0) printf("first is smaller than second\n");
    if(result > 0) printf("first is greater than second\n");
    else printf("first is equal to second\n");

    //strchr - returns pointer to first occurrence of a char
    char string1[] = "Supper is ready";
    char *pointer;
    pointer = strchr(string1, 'r');
    printf("Demonstration of strchr: %s", pointer);

    
    
}