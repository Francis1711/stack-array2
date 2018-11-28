#include<iostream>
#include<stack_array_str.h>
#include<string.h>
using namespace std;

int main()
{

	int c,arrsize=10,top=-1;
	char arrstring[arrsize],ch;
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Push \n 2.pop \n 3.Display \n 4.Display top \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{
                if(isfull(top,arrsize)==1)
                {
                    cout<<"\n Stack overflow!!!";
                }
                else
                {    char ch;
                    cout<<"\n Enter the element to be pushed to stack:";
                    cin>>ch;
                    top=push(arrstring,top,ch);
                }
				break;
				}
			case 2:{
                    if(isempty(top)==1)
                    {
                        cout<<"\n Stack underflow!!!";
                    }
                    else
                    {
                        char popped;
                        popped=pop(arrstring,top);
                        cout<<"\n The element popped is:"<<popped;
                        top--;
                    }
                    break;
                }
			case 3:{
			    cout<<"\n The element(s) in the stack is/are:";
				display(arrstring,top);
				break;
				}
			case 4:{
			    cout<<"\n the top element is:"<<display_top(arrstring,top);
				break;
				}
			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<5 && c>0);
	return 0;
}


	int push(char *arrstring,int top,char ch)//pass the address of the string array,top index of the stack
	{
        arrstring[++top]=ch;
        return top;
	}


char pop(char *arrstring,int top)//pass the address of the string array,top index of the stack
{
    return arrstring[top--];
}


 char display_top(char *arrstring,int top)//pass the address of the string array,top index of the stack
 {
        return arrstring[top];
}


void display(char *arrstring,int top)//pass the address of the string array,top index of the stack
{
        if(top==-1){
            cout<<"\n stack is empty";
        }else
        {
            cout<<"\n top "<<"\n  :\n";
            for(int i=top;i>=0;i--)
            {
                cout<<"| "<<arrstring[i]<<" |"<<"\n";
            }
        }
}



int isfull(int top,int arrsize){
    if((top+1)==arrsize)//top+1 as top array starts from 0
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(int top){
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
