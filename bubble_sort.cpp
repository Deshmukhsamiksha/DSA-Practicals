#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    int a[10];
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Enter "<<n<<" integers in any order :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubble_sort(a, n);
    cout<<"Sorted Array :";
    for( int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
OUTPUT
PS C:\DSA Practicals> g++ bubble_sort.cpp -o bubble_sort
PS C:\DSA Practicals> .\bubble_sort.exe                 
Enter the size of the array :5
Enter 5 integers in any order :
10 6 8 2 4
Sorted Array :2 4 6 8 10 
*/