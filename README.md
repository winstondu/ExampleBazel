## Example C++ BoilerPlate with Bazel for windows. Includes gtest and pthread.

To get pthreads:

https://sourceware.org/pub/pthreads-win32/dll-latest/

For downloaded pthread.h, add at the top:
```#define HAVE_STRUCT_TIMESPEC```

Added pthread.h files to C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Tools\MSVC\14.15.26726\include

Add pthreadVC2.dll (x86 version) to:
- Microsoft Visual Studio\2017\BuildTools\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x86
- and Microsoft Visual Studio\2017\BuildTools\VC\Tools\MSVC\14.15.26726\bin\Hostx64\x86

Add pthreadVC2.dll (x64 version) to:
- Microsoft Visual Studio\2017\BuildTools\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x64
- and Microsoft Visual Studio\2017\BuildTools\VC\Tools\MSVC\14.15.26726\bin\Hostx64\x64

Add correct lib files.

Now when you run your program, if you encounter "error while loading shared libraries: pthreadVC2.dll", just make sure the right one (should be the version of it corresponding to your architecture) is on your system PATH environment somewhere.