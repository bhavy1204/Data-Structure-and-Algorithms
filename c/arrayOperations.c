// In the following code we will do general operations peformed on an array

// General operation that can be peformed are :-

// 1. Searching : It refers to the act of findig wether a particular value is present in the group of elements. Searching is of further 2 types binary and linear search. In this file we will only see linear search. In this file we will also look for the searching of elemts before and after the given the given value.

// 2. Sorting : It is the act of arranging the given elements in some order, Generally ascending or descending order. There are many efficient algorithms for searching but here we will only use bubble sort for sake of simplicity.

// 3. Traversal : It is act of visiting each element atleast once and peforming the desired operation on it, Generally used for display.

// 4. Addition and deletion of elemts : It is most common operation. They can in peformed in begineing,end or in middle.

// 5. Accessing elemts and their index : It is act of getting and element from the array based on its index, It can be similar to searching in some way.

// THINK : Where can we use all this operations in a real life all at one place..? The answer is given at last but think 2-3 examples before it.

// We will create functions for each operation peformed and In this example we are taking an int array but you should try it with float and character array as well.

#include <stdio.h>

// For saake of simplicity in program we have take MAX(size) as 10, Although it is not a good practice and we will further see how to solve this issue with arrays.
int MAX = 10;

void insertAll(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // We are writing i+1 for user understanding but the array is still 0 based index only.
        printf("Enter element %d => ", i + 1);
        // we use amersapnd(&) to refer to that memrory address of the variable.
        // QUESTION : What will happen if we not use "&"..? It will not work but WHY...? Form answer on your own language and search on internet to verify.
        scanf("%d", &arr[i]);
    }
}
void traverse(int arr[], int size)
{
    // QUESTION :  WHy did we not write "i <= size" insted of "i<size"...?
    for (int i = 0; i < size; i++)
    {
        printf(" %d ,", arr[i]);
    }
}

void search(int arr[], int size, int key)
{
    // This is called flag variable, we will learn about them further until learn about them on your own.
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // QUESTION : What will happen if we wrote key at place of arr[i] in below staement.
            printf("Value %d , found at index %d . ", arr[i], i);
            found = 1;
            // Observe why did we write just written "Return" without any data type and from this what can you say about "void"...?
            return;
        }
    }
    if (found != 1)
        printf("\nVALUE NOT PRESENT IN THE ARRAY\n");
    // QUESTION : How wil you search for your friend in the class in this manner...? can you write code for the same..? Try it and try to come up with a more efficient search.
}

void sort(int arr[], int size)
{
    //QUESTION : What will happen if user sort before entering the elements..? How can we prevent this...?
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray sorted \n");
    //Note how we called another function inside a function.
    traverse(arr,size);
}

int main()
{
    int choice;
    int arr[10];
    // We will create a menu driven program for the array operations.
    int key;
    do
    {
        printf("\nWELCOME TO ARRAY MENU CHOOSE YOUR OPTION ");
        printf("\n1. Enter elements in array ");
        printf("\n2. Search ");
        printf("\n3. Sort ");
        printf("\n4. Traverse(display) ");
        printf("\n5. Delete element ");
        printf("\n6. Insert element ");
        printf("\n7. Exit program ");
        printf("\n>>> ");
        // QUESTION : What will happen if we add a another space after %d in the scanf..? Try and observe the output.
        scanf("%d", &choice);
        // Switch cases for different operation function calls.

        switch (choice)
        {
        case 1:
            insertAll(arr, MAX);
            break;
        case 2:
            printf("Enter element to seearch : ");
            scanf("%d", &key);
            search(arr, MAX, key);
            break;
        case 3:
            sort(arr, MAX);
            break;
        case 4:
            traverse(arr, MAX);
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            printf("\nEXITING PROGRAM.....");
            break;
        default:
            printf("\nInvalid choice \n");
            break;
        }

    } while (choice != 7);

    return 0;
}