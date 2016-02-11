#include <rarray>
#include <cmath>
#include "init.h"

//function which initializes the velocity field with PI*(sin((2*PI*(x+y))/(size*10)+1)) and returns it
rarray<float,2> initializeVel(int size){
	rarray<float,2> velocity_of_ants(size,size);
	for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            velocity_of_ants[i][j] = M_PI*(sin((2*M_PI*(i+j))/(size*10)+1));
        }
    }
	return velocity_of_ants;
}

//function initilizes the simulation with a setup. This simple setup places 1 and per space on the grid until you run out of ants...
rarray<float,2> initializeNum(int size, int total_ants){
	int n = 0;
    float z = 0;
    rarray<float,2> num = initializeNewNum(size);
    while (n < total_ants) {
        for (int i=0;i<size;i++) {
            for (int j=0;j<size;j++) {
                z += sin(0.3*(i+j));
                if (z>1 and n!=total_ants) {
                    num[i][j] += 1;
                    n += 1;
                }
            }
        }
    }
    return num;
}

//this returns an empty grid of required size
rarray<float,2> initializeNewNum(int size){
	rarray<float,2> new_number_of_ants(size,size);
	for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            new_number_of_ants[i][j] = 0.0;
        }
    }
	return new_number_of_ants;
}