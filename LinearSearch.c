// Linear Search Program in C
 #include<stdio.h>

int main()
{
    int a[20],i,Search,num;
    printf("Enter number of elements in array:\n");
    scanf("%d",&num);

    printf("Enter array elements:\n");
    for(i=0;i<num;i++) {
        scanf("%d",&a[i]);
          }

    printf("nEnter element to search:");
    scanf("%d",&Search);

    for(i=0;i<num;++i) {
        if(a[i]==Search)

            break;
           }

    if(i<num) {
        printf("Element found at index %d",i);
    } else {
        printf("Element not found");
    }

    return 0;
}