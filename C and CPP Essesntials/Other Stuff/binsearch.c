#include<stdio.h>

int main()
{
    int a[80];
    int n, i, low, high, mid, key, flag  = 0;
    
    printf("Enter a limit\n");
    scanf("%d", &n);
    low = 0; high = n - 1;

    printf("Input %d elements into array\n", n);
    for(i = 0; i <n; i++)
        scanf("%d", &a[i]);

        printf("Enter key element\n");
        scanf("%d", &key);
        
        while(low <= high)
        {
            mid = (low + high)/2;
            if(key < a[mid])
                high = mid - 1;
            else if(key > a[mid])
                low = mid + 1;
            else if(key == a[mid])
            {
                printf("Search Successful\n");
                printf("Key element %d is found at location %d", key , i+1);

                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("Search Unsuccessful\n");

    return 0;
}