#include<iostream>
using namespace std;
int main(){
	int set1[40],set2[40],set3[40],i,j,s1,s2,k=0;
	cout<<"Enter the no of elements in set 1:"<<endl;
	cin>>s1;
	cout<<"Enter the no of elements in set 2:"<<endl;
	cin>>s2;
	//entering the elements in set1
	cout<<"Enter the elements in set 1"<<endl;
	for(i=0;i<s1;i++){
		cin>>set1[i];
		
	}
	//entering the elements in set2
	cout<<"Enter the elements in set 2"<<endl;
	for(i=0;i<s2;i++){
		cin>>set2[i];
		
	}
	//displaying the elements of sets
	cout<<"\nThe elements of set 1 are: {";
		for(i=0;i<s1;i++){
		cout<<set1[i]<<",";	
	}
	cout<<"}"<<endl;
		cout<<"The elements of set 2 are: {";
		for(i=0;i<s2;i++){
		cout<<set2[i]<<",";	
	}
	cout<<"}";
	//finding Difference of sets
	for(i=0;i<s1;i++){
		int flag = 1;
		for(j=0;j<s2;j++){
			if(set1[i]==set2[j]){
				flag = 0;
				break;
			}
		}
		if(flag==1){
			set3[k]=set1[i];
			k++;
		}
	}
	//displaying difference of sets
		cout<<"\nThe intersection of set1 - set2 is: {";
		for(i=0;i<k;i++){
		cout<<set3[i]<<",";	
	}
	cout<<"}";
	return 0;
}
