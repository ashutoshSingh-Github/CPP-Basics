#include<iostream>
using namespace std;

class className{
    private:
	    int age;
	    char name[10];
	    className *next;

	public:
		className(){
			next = NULL;
		}
		void getdata(){
			cout<<"Enter name and age: ";
			cin>>name>>age;
		}
		void link(className *pointerVariable){
			next = pointerVariable;
		}
		void print(){
			className *pointer = this;
			while(pointer != NULL){
                cout<<"Name: "<<pointer->name<<endl<<"Age: "<<pointer->age<<endl;
				pointer = pointer->next;
			}
        }
};

main()
{
	className o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3.getdata();
	o1.link(&o2);
	o2.link(&o3);
	o1.print();

    return 0;
}