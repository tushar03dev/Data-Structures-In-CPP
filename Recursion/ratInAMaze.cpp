//
// Created by tushar on 24/11/24.
//
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int newx,int newy,int row,int col,vector<vector<bool>> visited,int maze[][4]){
    // path should be open
    // out of bound
    // should not be visited previously
    if((newx >=0 && newx < row) && (newy >= 0 && newy < col ) && maze[newx][newy] == 1 && !visited[newx][newy]) return true;
    else return false;
}

void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string output,vector<vector<bool>> visited){
    // base case
    if(srcx == row-1 && srcy == col-1){
        cout<<output<<endl;
        return;
    }

    // UP
    int newx = srcx-1;
    int newy = srcy;
    if(isSafe(newx,newy,row,col,visited,maze)){
        //mark visited
        visited[newx][newy] = true;

        //recursive call
        output.push_back('U');
        printAllPaths(maze,row,col,newx,newy,output,visited);

        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }


    //DOWN
    newx = srcx+1;
    newy = srcy;
    if(isSafe(newx,newy,row,col,visited,maze)){
        //mark visited
        visited[newx][newy] = true;

        //recursive call
        output.push_back('D');
        printAllPaths(maze,row,col,newx,newy,output,visited);

        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }

    //RIGHT
    newx = srcx;
    newy = srcy+1;
    if(isSafe(newx,newy,row,col,visited,maze)){
        //mark visited
        visited[newx][newy] = true;

        //recursive call
        output.push_back('R');
        printAllPaths(maze,row,col,newx,newy,output,visited);

        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }

    //LEFT
    newx = srcx;
    newy = srcy-1;
    if(isSafe(newx,newy,row,col,visited,maze)){
        //mark visited
        visited[newx][newy] = true;

        //recursive call
        output.push_back('L');
        printAllPaths(maze,row,col,newx,newy,output,visited);

        // backtracking
        output.pop_back();
        visited[newx][newy] = false;
    }
}

int main() {
    int maze[4][4] ={
            {1,0,0,0},
            {1,1,0,0},
            {1,1,1,0},
            {1,1,1,1}
    };
    int row=4;
    int col=4;
    int srcx=0;
    int srcy=0;
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    string output="";
    printAllPaths(maze,row,col,srcx,srcy,output,visited);
    return 0;
}