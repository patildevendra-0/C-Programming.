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
            int iCnt = 0;
            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                cout<<"Shree Ganesh...\n";
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