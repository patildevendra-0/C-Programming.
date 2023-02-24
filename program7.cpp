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

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                if(iNo%iCnt==0)
                {
                    cout<<iCnt<<"\t";
                }
                
            }
            
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