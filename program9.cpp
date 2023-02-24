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
        bool checkPerfect()
        {
            int iCnt = 0;
            int iSum = 0;
            
            for(iCnt = 1;iCnt<iNo;iCnt++)
            {
                if(iNo%iCnt==0)
                {
                    iSum = iSum+iCnt;
                }
            }
            if(iSum==iNo)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bRet = 0;

    cout<<"Enter the value:";
    cin>>iValue;

    Numbers obj(iValue);
    bRet = obj.checkPerfect();

    if(bRet==true)
    {
        cout<<"The given number perfect number";
    }
    else
    {
        cout<<"The given number is not perfect number";
    }



    return 0;
}