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
        void Display_Table()
        {
            int iCnt = 0;
            int iAns = 0;
            for(iCnt=1;iCnt<=10;iCnt++)
            {
                iAns = iNo*iCnt;
                cout<<iAns<<"\t";
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
    obj.Display_Table();
    return 0;
}