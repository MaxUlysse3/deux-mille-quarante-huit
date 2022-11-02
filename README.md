# deux-mille-quarante-huit
A 2048 in c++

# How to install
First you will need git, g++ 11 and cmake 3.22 : 
```
sudo apt update
sudo apt install git
sudo apt install g++
sudo atp install cmake
```
Then create a new folder and clone the repository inside :
```
mkdir dmqh
cd dmkh
git clone https://github.com/MaxUlysse3/deux-mille-quarante-huit.git .
```
And finally compile it with cmake :
```
mkdir cmake
cd cmake
cmake ../src
cmake --build .
mv a.out ./deuxmillequarantehuit
```
If you want to use it from a terminal move it to your PATH :
```
mv deuxmillequarantehuit /usr/local/bin/
```
