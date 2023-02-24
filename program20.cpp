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
        void Count_Even_Odd()
        {
            int iEvenCnt = 0;
            int iOddCnt = 0;
            int iDigit = 0;

            while(iNo!=0)
            {
                iDigit = iNo%10;
                iNo = iNo/10;
                if(iDigit%2==0)
                {
                    iEvenCnt++;
                }
                else
                {
                    iOddCnt++;
                }
                
            }
            cout<<"Even digits in given number are:"<<iEvenCnt<<"\n";
            cout<<"odd digits in given number are:"<<iOddCnt<<"\n";
            
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the value:";
    cin>>iValue;

    Numbers obj(iValue);
    obj.Count_Even_Odd();
    
    return 0 ;
}