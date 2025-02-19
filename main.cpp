#include <iostream>

void QuickSort(int a, int b, int* arr);

int main()
{
    int arr[10] = {1, 6, 4, 8, 3, 5, 7, 3, 6, 243};
    QuickSort(0, 9, arr);

    for(unsigned short i = 0; i < 10; i++)
        std::cout << arr[i] << "\t";
    
        std::cout << "End";
    return 0;
}

void QuickSort(int a, int b, int* arr)
{
    if(a>=b)
        return;
    int m = arr[(a+b)/2];
    //pre-sort
    int l = a-1;
    int r = b+1;
    while(1)
    {
        do l++; while(arr[l] < m);
        do r--; while(arr[r] > m);
        if(l >= r)
            break;
        std::swap(arr[l], arr[r]);

    }
    l = r;
    r++;
    //
    QuickSort(a, l, arr);
    QuickSort(r, b, arr);
}