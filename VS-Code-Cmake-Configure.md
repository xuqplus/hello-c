### VS Code & work with c++

Create/configure/build/debug c++ project  

https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/how-to.md  
https://code.visualstudio.com/docs/cpp/config-mingw  

When work with `VS Code Cmake plugin` we may not need tasks.json, launch.json files to be created. 
We can easilly debug the program by using `Cmake: Quick Start`/`Cmake: Build`/`Cmake: Debug` after installed cmake tools extension. 
Those directions will help create `CMakeLists.txt`, run `cmake .. -G "MinGW Makefiles"`, `mingw32-make.exe` in build directory, and start debug session. 
