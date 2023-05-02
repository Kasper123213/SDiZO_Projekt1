cmake_minimum_required(VERSION 3.24)
project(SDiZO_KasperRadom)

#set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(SDiZO_KasperRadom main/main.cpp main/Tablica.cpp main/Test.h main/Test.cpp main/Lista.h main/Lista.cpp main/ElementListy.h main/ElementListy.cpp main/KopiecBinarny.h main/KopiecBinarny.cpp main/Czas.h main/Czas.cpp main/TestAutomatyczny.h main/TestAutomatyczny.cpp)
