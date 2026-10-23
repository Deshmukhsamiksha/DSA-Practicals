#include<iostream>
using namespace std;

//Function
int linear_search(int a[],int n,int x)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[20];
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter "<<n<<" Integers:"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int x;
    cout<<"Enter the Target Element to Search for:";
    cin>>x;

    int location = linear_search(a, n, x);
    if (location != -1)
    {
        cout<<"Element "<<x<<" Found at index:"<< location <<endl;
    }
    else
    {
        cout<<"Element"<<x<< "not Found in the array."<<endl;
    }
    return 0;

}
/*
output
PS C:\DSA Practicals> g++ linear_search.cpp -o linear_search
PS C:\DSA Practicals> .\linear_search.exe                   
Enter the size of the array:5
Enter 5 Integers:
1 2 3 4 5
Enter the Target Element to Search for:4
Element 4 Found at index:3
*/