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
#include "Renderer1.h"


void Renderer1::clear() const
{
    glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer1::Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const
{
    shader.Bind();

    va.Bind();
    ib.Bind();
    GLCall(glDrawElements(GL_TRIANGLES, ib.GetCount(), GL_UNSIGNED_INT, nullptr));
}

