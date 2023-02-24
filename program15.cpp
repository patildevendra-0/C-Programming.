#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int A)
        {
            iNo = A;
        }
        int Count_Digit()
        {
            int iCnt = 0;
            int iDigit = 0;

            while(iNo!=0)
            {
                iDigit = iNo%10;
                iNo = iNo/10;
                iCnt++;
            }
            return iCnt;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value:";
    cin>>iValue;

    Numbers obj(iValue);
    iRet = obj.Count_Digit();

    cout<<"Number of digits in given number:"<<iRet<<"\n";
    return 0 ;
}