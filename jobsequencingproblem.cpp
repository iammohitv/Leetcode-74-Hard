#include<bits/stdc++.h>
bool comp(vector<int>a,vector<int>b){
    return a[2]>b[2];
}
vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),comp);
    int deadline=0;
    for(int i=0;i<jobs.size();i++){
        if(jobs[i][1]>deadline){
            deadline = jobs[i][1];
        }
    }
    vector<int> sc_jobs(deadline+1,-1);
    int sum=0;
    int n_jobs=0;
    for(int i=0;i<jobs.size();i++){
        for(int j=jobs[i][1];j>0;j--){
            if(sc_jobs[j]==-1){
                sc_jobs[j]=jobs[i][1];
                sum+=jobs[i][2];
                n_jobs++;
                break;
            }
        }
    }
    return {n_jobs,sum};
}