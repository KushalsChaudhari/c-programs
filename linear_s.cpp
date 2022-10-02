#include <iostream>
using namespace std;

// int search(int arr[],int key,int n)
// {
//     for (int i=0; i<n; i++)
//     {
//         if (arr[i]==key)
//         {
//             return i;
//         }
//         else
//         {
//             return 0;
//         }
//     }

// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n, key,i=0;
    cout << "enter numbers tobe search in array" << endl;
    cin >> key;
    n = (sizeof(arr) / sizeof(arr[0]));
    // for (int i = 0; i < n; i++)
    while (i < n)
    {
        if (key == arr[i])
            cout << "element found at index " << i << endl;
            i++;
    }
    return 0;
}
