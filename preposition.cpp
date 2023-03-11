#include <iostream>
using namespace std;

//This function displays truth table of Conjunction
void conjunction(){
    cout<<endl<<"Truth Table of Conjunction(AND):"<<endl;
    cout<<"|\tp\t|\tq \t|\tp^q\t|"<<endl;
    for(int i = 0; i <= 1 ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            cout<<"|\t"<<i<<"\t|\t"<<j<<"\t|\t"<<i*j<<"\t|"<<endl;
        }
    }
}


//This function displays truth table of Implication
void implication(){
    cout<<endl<<"Truth Table of Implication(p->q):"<<endl;
    cout<<"|\tp\t|\tq \t|\tp->q\t| "<<endl;
    for(int i = 0; i <= 1 ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            cout<<"|\t"<<i<<"\t|\t"<<j<<"\t|";
            if(i==1 && j==0){
                cout<<"\t0\t|"<<endl;
            }
            else{
                cout<<"\t1\t|"<<endl;
            }
        }
    }
}


//This function displays truth table of Disjunction
void disjunction(){
    cout<<endl<<"Truth Table of Disjunction(OR):"<<endl;
    cout<<"|\tp\t|\tq \t|\tpVq\t| "<<endl;
    for(int i = 0; i <= 1 ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            cout<<"|\t"<<i<<"\t|\t"<<j<<"\t|\t"<<max(i,j)<<"\t|"<<endl;
        }
    }
}


//This function displays truth table of Bi-implication
void bi_implication(){
    cout<<endl<<"Truth Table of Bi-implication(p<->q):"<<endl;
    cout<<"|\tp\t|\tq \t|\tp<->q\t| "<<endl;
    for(int i = 0; i <= 1 ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            cout<<"|\t"<<i<<"\t|\t"<<j<<"\t|";
            if(i==j){
                cout<<"\t1\t|"<<endl;
            }
            else{
                cout<<"\t0\t|"<<endl;
            }
        }
    }
}



int main(){
    char cP;
    int option;
    cout<<"This is a program to give truth table of";
    cout<<endl<<"1. Conjunction";
    cout<<endl<<"2. Disjunction";
    cout<<endl<<"3. Implication";
    cout<<endl<<"4. Biimplication";
    top:
    	//Selecting the option
        cout<<endl<<"Enter 1-4: ";
        cin>>option;

        switch (option){
            case 1:
                conjunction();
                break;
            case 2:
                implication();
                break;
            case 3:
                disjunction();
                break;
            case 4:
                bi_implication();
                break;
            default:
                cout<<endl<<"Enter a valid number"<<endl;//if the user enters a number other than 1-4
                break;
        }

        cout<<"Do you want to continue? (y/n)  ";//to continue the program
        cin>>cP;
        if(cP =='Y'|| cP =='y'){
        	goto top;
		}
		return 0;
}
