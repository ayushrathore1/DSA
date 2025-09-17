#include<stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    
    printf("Enter a limit\n");
    scanf("%d", &n);

    printf("Input %d elements into arrayy: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Now enter the key element to be searched\n");
    scanf("%d", &key);

    for(i = 0; i <n; i++)
    {
        if(arr[i] == key)
        {
            printf("key element %d is found at location %d", key, i+1);
            return 0;    
        }
    }

    printf("Key element %d is not found\n", key);
    printf("Search Unsuccessful\n");

    return 0;
    

}