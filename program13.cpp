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
        void Display_Reverse()
        {
            int iCnt = 0;
            iCnt = iNo;
            while(iCnt>=1)
            {
                cout<<iCnt<<"\t";
                iCnt--;
            }
            
        }
};

int main()
{
    int ivalue = 0;
    cout<<"Enter the Value:";
    cin>>ivalue;

    Numbers obj(ivalue);
    obj.Display_Reverse();
    return 0;
}