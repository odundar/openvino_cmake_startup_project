# Intel(R) Distribution of OpenVINO(TM) Toolki Startup Project with CMake

This folder contains the CMakeLists.txt files to include Intel Distribution of OpenVINO(TM) Toolkit Inference Engine libraries and header files when you create a new CMake C++ project with Visual Studio Community Edition.

*NOTE*: An additional step required to make this project work correctly is to setting environment variables for all system in Windows.

How to load this project Visual Studio Community Edition on Windows 10?

- Setup Environment Variables as indicated from Intel(R) OpenVINO(TM) Toolkit installation folder. Search for how to setup environment variables in Windows, it would help you. 

```
C:\Program Files (x86)\IntelSWTools\openvino\bin\setupvars.bat
```

- Clone this repository

```bash
git clone https://github.com/odundar/openvino_cmake_startup_project.git
```

- Open Visual Studio and Open a folder.

- Wait for processing of files and CMakeLists.txt

- Select x64-Debug or x64-Release

- Select CMake -> Build All

- Then, select target `openvino_startup.exe` from Toolbar clicking on down arrow, select the exe file.

- Click on Debug and Run or Debug the application.
