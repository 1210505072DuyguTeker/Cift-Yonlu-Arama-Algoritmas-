#include <iostream>
#include <algorithm>

using namespace std;


	int ikili_arama(int dizi[],int left,int right,int hedef){
		while(left<=right){
			int ortanca=(left+right)/2;
			if(dizi[ortanca]==hedef){
				return ortanca;
			}			
			else if(dizi[ortanca]<hedef){
				left=ortanca+1;
			}
			else{
				right=ortanca-1;
			}
		}
		return -1;
	}

	int CiftYonluAlg(int dizi[],int k,int hedef){
		int left=0,right=k-1;
		while(left<=right){
			if(dizi[left]==hedef){
				return left;
			}
			if(dizi[right]==hedef){
				return right;
			}
			left++;
			right--;
		}
		return -1;
	}



int main(int argc, char** argv) {
	
	int dizi[]={1,3,9,12,18,26,29,32,38,42,48};
	int k=sizeof(dizi)/sizeof(dizi[0]);
	int hedef=18;
	//�ift y�nl� arama yapabilmek i�in sort ile s�ralama yap�lmal�
	sort(dizi,dizi+k);
	int index=CiftYonluAlg(dizi,k,hedef);
	if(index==-1){
		cout<<"Aranan hedef dizide bulunamad�..."<<endl;
	}
	else{
		cout<<"Aranan hedef: "<<hedef<<endl;
		cout<<"Aranan hedefin indexi: " <<index<<endl;
	}
	
	return 0;
}
