//init.h
#ifndef INIT_H
#define INIT_H

//This function will initialize the velocity field of the ants and returns it
rarray<float,2> initializeVel(int size);
//This function will initialize the grid of the ants and place them then returns it
rarray<float,2> initializeNum(int size, int total_ants);
//This function will initialize a new grid for the ants (empty) and returns it
rarray<float,2> initializeNewNum(int size);

#endif