//ants2.cc
//Rejean Leblanc, PHYS1610, Assignment 2
#include <rarray>
#include "init.h"
#include "timestep.h"
#include "antoutput.h"

int main(){
	//parameters for the ant simulation
	const int size = 356;
	const int total_ants = 1010;
	const int timesteps = 40;
	const float velscale = 1.9;
	//initialize the velocity field and gird
	rarray<float,2> velocity_of_ants = initializeVel(size);
	rarray<float,2> number_of_ants = initializeNum(size, total_ants);
	//ready to begind simulation, make a tracker variable totants=0.0 which changes each timestep
	float totants = 0.0;
	for (int t = 0; t < timesteps; t++) {
		//print ants for this timestep, init a fresh size^2 grid to store new ands, apply a single step
		printAnts(t, size, totants, number_of_ants);
		rarray<float,2> new_number_of_ants = initializeNewNum(size);
		aSingleStep(new_number_of_ants, velocity_of_ants, number_of_ants, size, totants, velscale);
	}
	//simulation done
	return 0;
}