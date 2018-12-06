#include <iostream>
#include <string>
using namespace std;
/*	Nama : Radiaz Ubaidillah Erland Erlangga
	NIM  : 5170411265
*/
struct Node
{
int no;
string name;
string position;

Node *link;
};

Node *top = NULL;

bool isempty()
{
 if(top == NULL)
 return true; else
 return false;
}

void push (int noPush, string namePush, string posPush)
{
  Node *ptr = new Node();
  ptr->no = noPush;
  ptr->name = namePush;
  ptr->position = posPush;
  ptr->link = top;
  top = ptr;
}

void pop ( )
{
 if ( isempty() )
  cout<<"Stack Kosong!"<<endl;
 else
 {
  Node *ptr = top;
  top = top -> link;
  delete(ptr);
 }
}

void ViewStack()
{
 if ( isempty() )
  cout<<"Stack Kosong!"<<endl;
 else
 {
  Node *temp=top;
  cout<<"ISI STACK"<<endl;
  cout<<"---------------------------------"<<endl;
  while(temp!=NULL)
  {   cout<<temp->no<<" -> "<<temp->name<<" -> "<<temp->position<<endl;
   temp=temp->link;
  }
  cout<<"\n";
 }
 }

void inputPush(){
	int noPemain;
	string namePemain, posPemain;
	cin.ignore();
	cout<<"Data Pemain Bola"<<endl;
 	cout<<"--------------------------------"<<endl;
	cout<<"No Punggung : ";cin>>noPemain;cin.ignore();
	cout<<"Nama        : ";getline(cin,namePemain);
 	cout<<"Posisi      : ";getline(cin,posPemain);	
   	push(noPemain, namePemain, posPemain);
}

int main()
{

 int choice, flag=1;
 while( flag == 1)
 {
 	cout<<"-------------------------------------------------------"<<endl;
	cout<<"              STACK MENGGUNAKAN LINKED LIST            "<<endl;
 	cout<<"1:PUSH"<<endl;
 	cout<<"2:POP"<<endl;
 	cout<<"3:TAMPIL"<<endl;
 	cout<<"4:EXIT"<<endl;
 	cout<<"PILIH(1-4): ";cin>>choice;
 	switch (choice)
 	{
	case 1: inputPush();
         	break;
 	case 2: pop();
         	break;
 	case 3: ViewStack();
         	break;
 	case 4: flag = 0;
         	break;
 	}
 }
return 0;
}