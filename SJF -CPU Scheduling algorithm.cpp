#include <iostream>
#include<algorithm>
using namespace std;

void findWaitingTime(int process[],int n,int at[],int burst_time[],int wait[])
{
    cout<<"Waiting Time"<<endl;
    wait[0]=0;
    cout<<wait[0]<<endl;
    for(int i=1;i<n;i++)
    {
        wait[i] = wait[i-1]+burst_time[i-1];
        cout<<wait[i]<<endl;
    }
    
}

void TurnaroundTime(int process[],int n,int at[],int burst_time[],int tat[],int wait[])
{
    tat[0]= burst_time[0];
    cout<<"Turn around Time"<<endl;
    cout<<tat[0]<<endl;
    for(int i=1;i<n;i++)
    {
        tat[i] = tat[i-1]+burst_time[i];
        cout<<tat[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of process";
    cin>>n;
    
    int process[n],wait[n],tat[n],burst_time[n],comp[n],at[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>process[i];
    }
    cout<<"Enter the burst time";
    for(int i=0;i<n;i++)
    {
        cin>>burst_time[i];
    }
    sort(burst_time,burst_time+n);
    
    findWaitingTime(process,n,at,burst_time,wait);
    TurnaroundTime(process,n,at,burst_time,tat,wait);

    return 0;
}


