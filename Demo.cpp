#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();

        //void InsertFirst(int no);
        void InsertLast(int no);
        //void InsertAtPos(int no,int ipos);

        //void DeleteFirst();
        void DeleteLast();
        //void DeleteAtPos(int ipos);

        void Display();
        //int count();
};
SinglyLL :: SinglyLL()
{
    First = NULL;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(First==NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
// void SinglyLL :: InsertAtPos(int no,int ipos)
// {
//     int iNodecount = 0;

//     iNodecount = count();
//     if((ipos<1)||(ipos>iNodecount+1))
//     {
//         cout<<"INVALIDE POSITION"<<"\n";
//     }
//     if(ipos==1)
//     {
//         InsertFirst(no);
//     }
//     else if(ipos==iNodecount+1)
//     {
//         InsertLast(no);
//     }
//     else
//     {
//         PNODE newn = new NODE;
//         newn->data = no;
//         newn->next = NULL;
//         PNODE temp = First;
//         int iCnt = 0;
//         for(iCnt=1;iCnt<ipos-1;iCnt++)
//         {
//             temp = temp->next;
//         }
//         newn->next = temp->next;
//         temp->next = newn;
        
//     }
// }


void SinglyLL :: DeleteLast()
{
    if(First==NULL)
    {
        return;
    }
    else if(First->next==NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp =First;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
}
// void SinglyLL :: DeleteAtPos(int ipos)
// {
//     int iNodecount = count();

//     if((ipos<1)||(ipos>iNodecount+1))
//     {
//         cout<<"invalide position";
//     }
//     if(ipos==1)
//     {
//         DeleteFirst();
//     }
//     else if(ipos==iNodecount)
//     {
//         DeleteLast();
//     }
//     else
//     {
//         PNODE temp1 = First;
//         PNODE temp2 = NULL;
//         int iCnt =0 ;
//         for(iCnt=1;iCnt<ipos-1;iCnt++)
//         {
//             temp1 = temp1->next;
//         }
//         temp2 = temp1->next;
//         temp1->next = temp2->next;
//         delete temp2;

//     }
// }

void SinglyLL :: Display()
{
    PNODE temp = First;
    cout<<"Elements of linked list are:";
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}



class ArrayX:public SinglyLL
{
    public:

    void Display(char *ptr)
    {
        char Arr[77] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','!', '@', '#', '$', '%', '^', '&', '*', '(', ')',0, 1, 2, 3, 4, 5, 6, 7, 8, 9,' '};
        
        int iCnt = 0;
        while(Arr[iCnt]!='\0')
        {
            if(*ptr == Arr[iCnt])
            {
                SinglyLL::InsertLast(iCnt);
                cout<<iCnt;
                *ptr++;
                iCnt = 0;
            }
            else
            {
                iCnt++;
            }
            
        }
       SinglyLL:: Display();
    }
    void My_values()
    {
        string User_Name;
        cout<<"Enter Full name: ";
        getline(cin, User_Name);
        cout<<User_Name;
        const int n = User_Name.length();
        char charArray[n+1];

        User_Name.copy(charArray, n+1);
        //cout << "The original string is: " << User_Name;
        cout<<"\n";
        Display(charArray);
       
        
    }

    
};

int main()
{
    ArrayX aobj;
    aobj.My_values();
    
    return 0;
}