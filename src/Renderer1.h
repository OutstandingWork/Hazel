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
class Renderer1
{
public:
    void clear() const;
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};