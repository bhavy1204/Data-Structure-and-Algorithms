//If you have some understanding of array than you can skip it
//Defination :- Array are collection of homogenous(similar) elements.
//Indexing in array starts from 0, i.e if the size of the array is 10 then it will store the elemnts till 9th index and last element(10) will be a null character '\0'.

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

    //If we tried to access the last elemt 5, Than at place of that it will give garbage value. But it might be very harmful for the code so try to avoid accessing the elemnt beyound the scope of array.
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
    return 0;
}