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
        int Factorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                iFact = iFact *iCnt;
            }
            return iFact;

        }
};

int main()
{
    int ivalue = 0;
    int iRet = 0;
    cout<<"Enter the value:"<<"\n";
    cin>>ivalue;

    Numbers obj(ivalue);
    iRet = obj.Factorial();
    cout<<"Factorial is:"<<iRet<<"\n";

    return 0;
}