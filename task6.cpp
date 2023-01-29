#include <iostream>
using namespace std;
main()
{
    int patients,nontreated1=0,doctors=7,treated=0;
    int days;
    cout<<"enter number  of days :";
    cin>>days;

    for(int n=1;n<=days;n++)
    {
        
        cout<<"enter number of patients :";
        cin>>patients;
        if(patients>=7)
        {
        nontreated1=nontreated1+(patients-doctors);
        }
        if(patients<7)
        {
            treated=patients;
        }
         treated=treated+(patients-nontreated1);
           
        if(n%3==0 && nontreated1>treated)
        {
            doctors=doctors+1;
             nontreated1=nontreated1+(patients-doctors);
             if(patients<8)
             {
                treated=patients;
                }
             treated=treated+(patients-nontreated1);
        }
        }
        cout<<"treated patients are :"<<treated<<endl;
        cout<<"un-treated patients are :"<<nontreated1<<endl;
}


        
