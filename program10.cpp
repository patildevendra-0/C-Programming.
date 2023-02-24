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
        void Display_Non_Factors()
        {
            int iCnt = 0;
            for(iCnt=1;iCnt<iNo;iCnt++)
            {
                if(iNo % iCnt != 0)
                {
                    cout<<iCnt<<"\t";
                }
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
    obj.Display_Non_Factors();
    return 0;
}