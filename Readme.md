# CPP_MINIMAL

Configuring and building a C++ project to use a standard compiler, turn on
higher standards of compliance with the language, and work out of the box on
multiple OS's is hard. This quick start project will make it a lot easier and
offer a few more desirable features. It is a tried and true recipe that works
well for small programs, such as small demos, learning tutorials, and class
projects.

## What is it

This template provides a minimal project in C++ that is ready to build and
integrate with a basic development toolset. I found myself recreating these
files over and over with very minor tweaks, so made it into a template,
hopefully of more general use. You can have an even more minimalistic template
than this, but in that case your IDE toolset is probably already doing it for
you. For instance, the CMake extension for Visual Studio Code can get you
started with a CMake project in seconds. This template provide a few more common
and useful additions. Here are a few features:

- Minimal dependencies: you add what you need.
- Uses CMake as build tool. Allows you to rebuild your project on Windows, Linux
  and Mac, seamlessly.
- Minimal set of files for sharing using Git.
- MIT License file.

## Dependencies

This project assumes that you have installed:

    - CMake, a free build system by Kitware.
    - A C++ compiler, e.g.: GNU `gcc`, LLVM `clang`, or Microsoft's Visual Studio.

Explaining how to install these tools is beyond the scope of this document.
Refer to the respective vendors. Hint: gcc and clang are free and excellent.
These are often already installed on Linux. Visual Studio has a free Community
Edition for non-commercial applications. CMake is also free.

## Build

By build, I mean three steps: 1) Configure, 2) Compile, and 3) Link. CMake can
do all of them for you. Here is the quick start guide for Linux/Mac/Windows:

    ```bash
    # make build the active directory
    cd build
    # configure
    cmake ..
    # compile & link
    cmake --build .
    ```

Your executable will be in the `bin` folder (inside `build` obviously) on Linux
and inside the `Debug` or `Release` folder on Windows, depending on which
configuration you want (see below).

## Configurations

This section shows how to compile for different configurations on Linux/Mac or
Windows. The assumption is that you are using Makefiles on Linux/Mac and using
Visual Studio on Windows. These are the most common cases. Consider providing
more information for alternative build systems: I will review and merge pull
requests, if appropriate, but KIS please (keep it simple).

Choosing a different configuration on Linux or Mac, assuming that you already
have a `Debug` and `Release` folder:

    ```bash
    # Debug:
    cd Debug
    # configure Debug build
    cmake -DCMAKE_BUILD_TYPE=Debug ..
    # build it
    cmake --build .

    # Release:
    cd Release
    # configure a Release build
    cmake -DCMAKE_BUILD_TYPE=Release ..
    # build it
    cmake --build .
    ```

On Windows, assuming you are using Visual Studio (MSVC), you get the two
configurations "for free" (it is how Visual Studio works by default). Thus, you
select the build-type when building not when configuring.

    ```cmd
    cd build
    cmake ..
    cmake --build . --config Debug
    cmake --build . --config Release
    ```

The difference is that MSVC is a multi-configuration buld system, so you do not
need to configure it twice. The instructions above will create two folders:
Debug and Release with the two versions of the executable.

## Launching

Launch (Linux):

    ```bash
    ./bin/myproject
    ```

That is it. I hope it will be useful to you.
