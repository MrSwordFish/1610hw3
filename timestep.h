//timestep.h
#ifndef TIMESTEP_H
#define TIMESTEP_H

//This is the function which takes in all of the information on the current state and performs a single timestep
void aSingleStep(rarray<float,2> new_number_of_ants,rarray<float,2> velocity_of_ants,rarray<float,2> number_of_ants,int size, float totants, float velscale);

#endif