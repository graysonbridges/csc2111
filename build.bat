:: This is a custom batch file because the build.bat provided did not work.
cls
g++ -c Keyboard.cpp
g++ -c Matrix.cpp
g++ -c Random.cpp
g++ -c String.cpp
g++ -c Tokens.cpp
g++ -c ReadFile.cpp
g++ -c WriteFile.cpp
g++ -c Lab02Driver.cpp
g++ -o final Lab02Driver.o Keyboard.o Matrix.o Random.o String.o Tokens.o ReadFile.o WriteFile.o -o read_write.exe