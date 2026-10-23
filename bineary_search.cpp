#include<iostream>
using namespace std;

//Function
int bineary_search(int a[], int n, int x)
{
    int first=0;
    int last=n-1;
    int mid;

    while(first<=last)
    {
        mid=(first+last)/2;
        if (a[mid]==x)
        {
            return mid;
        }
        else if (a[mid]<x)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        }
        return -1;
}

int main()
{
    int n ,x ;
    int a[20];
    cout<<"Enter the size of the array :";
    cin>>n;

    cout<<"Enter "<< n <<" sorted integers :\n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter the Target Element to search for :";
    cin >>x;

    int position=bineary_search(a, n, x);
    if (position!=-1)
    cout<<"Element found at position :"<<position <<endl;
    else
    cout<<"Element not found."<<endl;

    return 0;
}

/*
OUTPUT
PS C:\DSA Practicals> g++ bineary_search.cpp -o bineary_search
PS C:\DSA Practicals> .\bineary_search.exe
Enter the size of the array :10
Enter 10 sorted integers :
1 2 3 4 5 6 7 8 9 10
Enter the Target Element to search for :7
Element found at position :6
*/