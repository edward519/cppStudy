#include <iostream>
#include <cstring>
using namespace std;

typedef struct
{
	char name[20];
	char mphone[20];
	char group[20];
} AddressBook;

typedef struct _AddressList
{
	char name[20];
	char mphone[20];
	struct _AddressList *next;
} AddressList;

int main()
{
	AddressBook p1={"김동현", "010-2222-8888", "가족"};

	cout << "이 름 : " << p1.name << endl;
	cout << "핸드폰 : " << p1.mphone << endl;
	cout << "그 룹 : " << p1.group << endl;

	AddressList *item, *head, *current;
	item=new AddressList();
	strcpy(item->name,"Park");
	strcpy(item->mphone,"010-1111-2222");
	item->next=NULL;

	head=current=item;

	item=new AddressList();
	strcpy(item->name,"Kim");
	strcpy(item->mphone,"010-4444-2222");
	item->next=NULL;

	current->next=item;
	current=item;
	
	item=new AddressList();
	strcpy(item->name,"Jung");
	strcpy(item->mphone,"010-2222-3333");
	item->next=NULL;

	current->next=item;

	current=head;
	while(current!=NULL)
	{
		cout << current->name << "    " << current->mphone << endl;
		current=current->next;
	}

	return 0;
}