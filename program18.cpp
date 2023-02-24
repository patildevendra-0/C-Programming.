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
        int Sum_Digit()
        {
            int iSum = 0;
            int iDigit = 0;

            while(iNo!=0)
            {
                iDigit = iNo%10;
                iNo = iNo/10;
                if(iDigit%2==0)
                {
                    iSum = iSum+iDigit;
                }
                
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value:";
    cin>>iValue;

    Numbers obj(iValue);
    iRet = obj.Sum_Digit();

    cout<<"sum of digits in given number:"<<iRet<<"\n";
    return 0 ;
}