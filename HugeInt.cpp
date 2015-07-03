#include"HugeInt.h"
#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<string>
#include<algorithm>

using namespace std;

HugeInt::HugeInt(const char* num){
	int a,leng=0;
	while(num[leng]!='\0') 
	leng++;
	num.resize(leng);
	for(int i=0; i<leng; i++){
                	switch (num[i]){
                        	case '1':num.at(i)=1;break;
                        	case '2':num.at(i)=2;break;
                        	case '3':num.at(i)=3;break;
	                        case '4':num.at(i)=4;break;
        	                case '5':num.at(i)=5;break;
                	        case '6':num.at(i)=6;break;
	                       	case '7':num.at(i)=7;break;
        	                case '8':num.at(i)=8;break;
                	        case '9':num.at(i)=9;break;
	                        case '0':num.at(i)=0;break;
        	        }
	}
}


