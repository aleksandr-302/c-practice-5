#include <iostream>

using namespace std;

int find_terms()
{
    int N,i,K;
    cout << "Enter number of elements: ";
    cin >> N;
    int a[N];
    for(i=0;i<N;i++)
    {
        cout << " a[" << i << "]: ";
        cin >> a[i];
    }
    cout << "Enter number that is sum of elements of arr: ";
    cin >> K;
    cout<<"This numbers give "<<K<<" in sum"<<endl;
    for(i=0;i<N;i++)
    {
        if(a[i] + a[i+1] == K)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
            cout << "a[" << i+1 << "]=" << a[i+1] << endl<< endl;
        }
    }
}
int main(int argc, char *argv[])
{
    find_terms();
}