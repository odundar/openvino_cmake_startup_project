# Intel(R) Distribution of OpenVINO(TM) Toolki Startup Project with CMake

Following instructions assume that you have installed OpenVINO(TM) Toolkit successfully and run the demo applications to validate your installation.

## Windows 10 -  Visual Studio Community Edition

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

## Ubuntu 16.04 - Eclipse CDT

1. Before installing Eclipse 

sudo apt-get install openjdk-8-jre ninja-build

2. After Eclipse installation find eclipse.ini in installation directory and set java directory if you encounter any error while running Eclipse IDE.

`-vm /usr/lib/jvm/java-1.8.0-openjdk-amd64/bin`

Now, you can proceed to create a new CMake project and start using CMakeLists.txt file inside this repo, however inorder to run and debug binary inside Eclipse you should define environment variables and set library paths.

3. Copy `setup_files/intel-openvino.conf` file to `/etc/ld.so.conf.d/` folder

4. Setup environment variables system wide with using `intel-openvino.sh` file, copy file to `/etc/profile.d` folder. 

Or simply run config_environment.sh and reboot your PC.

Now, your project should build and you should be able to compile, run and debug your application.

