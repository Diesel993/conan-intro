import os, shutil
from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMakeDeps


class PieCutterConan(ConanFile):
    name = "piecutter"
    version = "1.0"
    url = "https://github.com/Diesel993/conan-intro.git"
    requires = "units/2.3.3"
    tool_requires = "cmake/3.28.1" 
    test_requires = "gtest/1.14.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"
