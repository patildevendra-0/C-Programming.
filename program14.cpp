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
        void Display_Even_Factors()
        {
            int iCnt = 0;
            for(iCnt=2;iCnt<=(iNo/2);iCnt++)
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
    cout<<"Enter the Value:";
    cin>>ivalue;

    Numbers obj(ivalue);
    obj.Display_Even_Factors();
    return 0;
}