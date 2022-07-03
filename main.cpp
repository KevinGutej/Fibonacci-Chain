#include <iostream>

using namespace std;

long int Fibonacci(int x)
{
    if(x==0||x==1)return 1;
    else return Fibonacci(x-1) + Fibonacci(x-2);
}

int main ()
{
    int array[20];
    for(int i=0;i<=20;i++)
    {
        for(int x=1;x<=i;x++)
        {
            array[i] = Fibonacci(x);
        }
    }
    cout << "Array: " << endl;
    for(int i=0;i<20;i++)
    {
        cout << "Fibonacci chain number: " << i+1 << ": " << array[i] << endl;
    }
    system("pause");
    return 0;
}
