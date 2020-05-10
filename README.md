# CGLAB
This repository contains lab programs and additional programs for Computer Graphics Laboratory (17CSL68).

## Running OpenGL programs in Ubuntu 
**Requirement:** GCC Compiler (7.5.0 +)

Use the following commands to get FreeGLUT, open source alternative for OpenGL:
```
sudo apt update
sudo apt-get install freeglut3-dev
sudo apt-get install mesa-utils
sudo apt-get install libxmu-dev libxi-dev
```

**Compilation command:**
```
g++ filename.cpp -lGL -lGLU -lglut
```

**Execution command:**
```
./a.out
```
