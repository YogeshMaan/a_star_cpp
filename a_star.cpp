/***********
 > File name: a_star.cpp
 > Reference: Github repo CppRobotics/src/a_star.cpp 
 * *********/

#include<iostream>
#include<cmath>
#include<limits>
#include<queue>
#include<vector>

//#include<opencv2/opencv.hpp>



using namespace std;



int main(){
    float sx = 10.0;
    float sy = 10.0;
    float gx = 50.0;
    float gy = 50.0;

    float grid_size = 1.0;
    float robot_size = 1.0;

    vector<float> ox;
    vector<float> oy;

    //add edges

    for (float i=0; i<60; i++){
        ox.push_back(i);
        oy.push_back(60.0);
    }

    




    std::cout<<"ox:"<<endl;
    std::cout<<"oy:"<<endl;

    for (int i=0; i<ox.size(); i++){
        cout<<ox[i]<<","<<oy[i]<<endl;
    }
    cout<<endl;
}