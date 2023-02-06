#include<iostream> 
using namespace std; 
 
int p[4]={0,0,1,1},q[4]={0,1,0,1},r[4]; 
 
void first(){ 
 for(int i=0;i<4;i++){ 
  if(p[i]==1 && q[i]==1) r[i]=0; 
  else r[i]=1; 
 } 
} 
 
void second(){ 
 for(int i=0;i<4;i++){ 
  if(p[i]==1&&q[i]==0) r[i]=0; 
  else r[i]=1; 
 } 
 for(int i=0;i<4;i++){
 
 if (p[i]==1 && r[i]==1) r[i]==1;
 else r[i]==0;
}
} 
 
void show(){ 
 for(int i=0;i<4;i++){ 
   cout<<"|\t"<<p[i]<<"\t|\t"<<q[i]<<"\t|\t"<<r[i]<<"\t|"<<endl;   
 } 
}
 
int main(){ 
 int num; 
 cout<<"Which compound proposition truth table do you want to print?\n1. p->7q\n2. p^(p->q)"<<endl; 
 cin>>num; 
 switch(num){ 
  case 1: 
   first(); 
   cout<<"-----------------------------------------------------"<<endl; 
   cout<<"\t\t***p->~q***\n"<<endl; 
   cout<<"|\tp\t|\tq \t|\tp->~q\t|"<<endl; 
   show(); 
   break; 
  case 2: 
   second(); 
   cout<<"-----------------------------------------------------"<<endl; 
   cout<<"\t\t*** p^(p->q) ***\n"<<endl; 
   	cout<<"|\tp\t|\tq \t|\tp^(p->q)\t|"<<endl; 			 
   show(); 
   break; 
  default: 
   cout<<"Please enter values between 1 and 2"<<endl; 
 } 
}
