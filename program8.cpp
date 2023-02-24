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
        void Factors()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                if(iNo%iCnt==0)
                {
                    cout<<iCnt<<"\t";
                    iSum = iSum+iCnt;
                }
            }
            cout<<"\n";
            cout<<"Addition of factors is :"<<iSum<<"\n";
            
        }
};

int main()
{
    int ivalue = 0;

    cout<<"Enter the value:"<<"\n";
    cin>>ivalue;

    Numbers obj(ivalue);
    obj.Factors();

    return 0;
}