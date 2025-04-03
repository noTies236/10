#version 410 core

layout (location = 0) in vec3 aVert;
layout (location = 1) in vec3 aColor;
layout (location = 2) in vec2 aTexCoord;

out vec3 fragColor;
out vec3 fragV;
uniform float Offset;
out vec2 texCoord;

void main()
{ 
    gl_Position = vec4(aVert.x + Offset, aVert.y, aVert.z, 1.0);
    fragColor = aColor;
    fragV = aVert;
    texCoord = aTexCoord;
}