@ECHO OFF
cd classes
g++ -c *.cpp

cd ..

g++ main.cpp classes/*.o -o saida