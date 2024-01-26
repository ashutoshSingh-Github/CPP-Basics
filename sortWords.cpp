#include<iostream>
using namespace std;
int main(){
    string names[5], temp;
    // taking input for the names
    for(int i=0; i<5; i++){
        cout<<"Enter name "<<i+1<<": ";
        cin>>names[i];
    }
    // sorting
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(names[i]>names[j])
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    // displaying
    cout<<"The alphabetical order is: "<<endl;
    for(int i=0; i<5; i++){
        cout<<"Name "<<i+1<<": "<<names[i]<<endl;
    }

    return 0;
}