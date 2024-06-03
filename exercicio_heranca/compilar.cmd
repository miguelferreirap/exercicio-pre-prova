@ECHO OFF

cd classes/
g++ -c *.cpp

cd ..

cd funcionario
g++ -c *.cpp

cd ..

g++ main.cpp classes/*.o funcionario/*.o -o saida
