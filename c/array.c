//If you have some understanding of array than you can skip it

//IMAGINE :- if you have to store the roll numbers of 1000 student how will you do it...? if you want to store eggs how do you store them...? 

//Defination :- Array are collection of homogenous(similar) elements.
//Indexing in array starts from 0, i.e if the size of the array is 10 then it will store the elemnts till 9th index.

// Last element is not a null character unless explicitly initialized or used in a string.

#include <stdio.h>
#include <Windows.h>
int main()
{
    //To clear the screen 
    system("cls");
    int array[5];
    //Accessing elemts by index.
    array[0]=10;
    //Above statement means "Assign '1' at 0th index of array."
    array[1]=20;
    array[2]=30;
    array[3]=40;
    array[4]=50;
    //To show elements
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    //If we tried to access the last elemt 5,
    // Last element is not a null character unless explicitly initialized or used in a string.
    printf("\nAccessing last element : -"); 
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", array[i]);
    }
    //We can also do as follow to understand more cleary 
    for(int i=0 ; i<5;i++){
        printf("\nValue of %d index of array is : %d ",i,array[i]);
    }
    //We can also use for loop for the assignment
    for (int i = 0; i < 5; i++)
    {
        array[i]=i+1;
    }
    //To show elements
    printf("\nArray assingment through loop : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    //We can also access the middle elemnts of the array directly;
    printf("%d", array[3]);

    //Similarly we can also make arrays for float,chars.
    char arr[5];
    //Asks from user and assign it to array 
    //TRY : give the string like "abcde" in the first iteration of the loop and observe what happens.
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter char : ");
        scanf("%c", &arr[i]);
    }
    //TRY : change the %c format specifier and observe the changes
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", arr[i]);
    }
    //This was about dynamic array means that here we were known about the size of the array like 5 or any contant number.

    // we can not do the following in c because the array size must be known at compile time only, It can not be a variable.
    // int n;
    // printf("Enter n : ");
    // scanf("%d", &n);
    // int arr[n];

    //QUESTION : List any one advantage and disadvantage of array. The answer will be given in next code(dynamicArray.c).
    return 0;
}