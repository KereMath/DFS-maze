#include "the5.h"
vector<int> maze_trace(vector<Room*> maze) { 
    vector<int> path;
    vector<int> pop;
    Room* l;
    int flag=1;
    int o=maze.size();
    int max=INT_MIN;
    for(int k=0;k<o;k++){
        if(max<maze[k]->id){
            max=maze[k]->id;
        }
    }
    int arr1[max];
    l=maze[0];
    arr1[l->id]++; 
    for(int i=0;i<o;i++){
        arr1[i]=0;
    }arr1[0]++;
    path.push_back(l->id);
    while(flag){
    int reverse = INT_MAX;
    if(int(l->content) == 42)
        {break;}
        for(int i = 0; i < l->neighbors.size(); i++){
            if(arr1[l->neighbors[i]->id]==0){
                pop.push_back(l->id);
                l = l->neighbors[i];
                reverse = 0;
                break;
                return path;}}arr1[l->id]++; 
        if(reverse)
        {for(int p = 0; p < l->neighbors.size(); p++)
            {if(l->neighbors[p]->id == pop.back())
                {pop.pop_back();
                    l = l->neighbors[p];
                    break;}}}path.push_back(l->id);}
    int j=pop.size();
    for(int i=j-1;i>=0;i--)
    {
        path.push_back(pop[i]);
    }
    flag=0;
    return path; 
}


