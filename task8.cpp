#include <iostream>
using namespace std;
main()
{
int cargo,ton,total;
int minibus=0,truck=0,train=0;
float percentageM=0,percentageT=0,percentageTR=0,average=0,average1=0;
cout<<"enter count for cargo transportation :";
cin>>cargo;

for(int n=1;n<=cargo;n++)
{
cout<<"enter number of ton :";
cin>>ton;


if(ton<=3)
{
minibus=minibus+ton;
}
 if (ton>3 && ton<=11)
{
truck=truck+ton;
}
 if (ton>11  )
{
    train =train+ton;
}
}
total=minibus+truck+train;
average=((minibus*200)+(truck*175)+(train*120));
average1=average/total;
percentageM=(minibus*100)/total;
percentageT=(truck*100)/total;
percentageTR=(train*100)/total;
cout<<"average :"<<average1<<endl;
cout<<"percentage of bus :"<<percentageM<<"%"<<endl;
cout<<"percentage of truck :"<<percentageT<<"%"<<endl;
cout<<"percentage of train :"<<percentageTR<<"%"<<endl;
}
