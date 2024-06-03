@ECHO OFF
cd veiculos
g++ -c *.cpp

cd ..

g++ main.cpp veiculos/*.o -o saida