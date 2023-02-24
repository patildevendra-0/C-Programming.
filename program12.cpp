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
           
            for(iCnt=iNo;iCnt>=1;iCnt--)
            {
                cout<<iCnt<<"\t";
            }
            cout<<"\n";
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