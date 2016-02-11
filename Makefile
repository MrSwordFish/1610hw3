# Makefile
CXX = g++
CXXFLAGS = -I${GSLINC} -O2
LDFLAGS = -L${GSLINC}
all: pro
pro: pro.o init.o timestep.o antoutput.o
	${CXX} -o pro pro.o init.o timestep.o antoutput.o
pro.o: ants2.cc init.h timestep.h antoutput.h
	${CXX} ${CXXFLAGS} -c -o pro.o ants2.cc
init.o: init.cc
	${CXX} ${CXXFLAGS} -c -o init.o init.cc
timestep.o: timestep.cc
	${CXX} ${CXXFLAGS} -c -o timestep.o timestep.cc
antouput.o: antouput.cc
	${CXX} ${CXXFLAGS} -c -o antouput.o antouput.cc
clean:
	rm -f pro pro.o init.o timestep.o antoutput.o
