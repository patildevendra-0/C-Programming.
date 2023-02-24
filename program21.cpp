#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int iSize;
        int *Arr;

        ArrayX(int iLength)
        {
            iSize = iLength;
            Arr = new int[iSize];
        }
        void Accept()
        {
            cout<<"Enter the numbers:\n";
            int iCnt = 0;
            for(iCnt =0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of array are:\n";
            int iCnt= 0;
            for(iCnt =0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iSize = 0;
    cout<<"Enter the size of array:\n";
    cin>>iSize;

    ArrayX obj(iSize);
    obj.Accept();
    obj.Display();



    return 0;
}
