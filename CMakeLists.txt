cmake_minimum_required(VERSION 3.5.1)
project(cmakeJenkinsExecutable)

#Bring the headers, such as ZeroMatrix.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#SOURCES is a variable which will be used to 
#create the executable file zeroMatrix
add_executable(zeroMartix ${SOURCES})
