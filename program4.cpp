#include<iostream>
using namespace std;

class DisplayX
{
    public:
        int iNo;

        DisplayX(int i)
        {
            iNo = i;
        }
        void Display()
        {
            int iCnt = 1;
            while(iCnt<=iNo)
            {
                cout<<iCnt<<"\n";
                iCnt++;
            }
        }
};

int main()
{
    int iValue = 0;
    cout<<"Enter how many times you want to display"<<"\n";
    cin>>iValue;
    DisplayX obj(iValue);
    obj.Display();

    return 0;
}