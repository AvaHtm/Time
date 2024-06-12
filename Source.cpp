#include<iostream>
#include<cstring>
using namespace std;
class Time{
private:
	int h,m,s;
public:
	Time(){
		int flagh=0,flagm=0,flags=0;
		do{
			cout<<"enter hour:";
			cin>>h;
			cout<<"enter minute:";
			cin>>m;
			cout<<"enter secound:";
			cin>>s;
			if(h<=23&&h>=0){
				flagh=1;
			}
			else{
				flagh=0;
			}
			if(m<=59&&m>=0)
			{
				flagm=1;
			}
			else{
				flagm=0;
			}
			if(s<=59&&s>=0)
			{
				flags=1;
			}
			else{
				flags=0;
			}
		}while(!(flagh&&flagm&&flags));
	}
    Time(int ts){
	h=ts/3600;
	m=(ts%3600)/60;
	s=(ts%60)%60;
}
	int getsecounds(){
		return h+m*60+s*60*60;
	}
	void print(){
		cout<<h<<":"<<m<<":"<<s<<endl;
	}
};
Time caldifferent(int s1,int s2){
	int d=0;
	if(s1>s2){
		d=s1-s2;
	}
	else{
		d=s2-s1;
	}
	int h=d/3600;
	int m=(d%3600)/60;
    int s=(3600%60)%60;
	Time myd(h * 3600 + m * 60 + s);
	return myd;
}
int main()
{
	Time t1,t2;
	Time diff=caldifferent(t1.getsecounds(),t2.getsecounds());
	diff.print();
	return 0;
}

