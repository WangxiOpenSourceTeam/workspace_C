## Clion的多main支持以及c和cpp的混合遍历
将Clion默认的CMakeLists改成如下:
```cmake
#cmake运行的最低版本
cmake_minimum_required(VERSION 3.15)
#指定的项目名
project(helloWorld)
#指定代码的标准这里是C99
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
#添加可执行文件的构建目标
#add_executable(HelloClang HelloClang.c)
#add_executable(helloWorld main.c helloWorld.c)
#add_executable(HelloWorld HelloWorld.c)
#file (GLOB files *.c OR *.cpp)
file (GLOB files *.c *.cpp)
foreach(file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
#    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
    message (\ \ \ \ --\ src/${exe}.c \ OR \ --\ src/${exe}.cpp \ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
```
之后每次新建文件的时候 **tools/CMake/reload CMake project** 然后CMake就会重新从当前目录下拉取然后就可以遍历到新建的.c和.cpp文件了