
#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include<sstream>
#include<fstream>
#include<string>
#include "Renderer.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Shader.h"
#include "VertexBufferLayout.h"

using namespace std;
#define ASSERT(x) if(!(x))  __debugbreak();
#define GLCall(x) GLClearError();\
x;\
ASSERT(GLLogCall(#x,__FILE__,__LINE__));


void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

