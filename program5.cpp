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
        int Display()
        {
            int iCnt = 0;
            int iSum = 0;
            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                iSum = iSum+iCnt;
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter how many times you want to display"<<"\n";
    cin>>iValue;

    DisplayX obj(iValue);
    iRet = obj.Display();
    cout<<"Sum of number :"<<iRet<<"\n";

    return 0;
}