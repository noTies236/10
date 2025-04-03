#version 410 core

in vec3 fragColor;
in vec3 fragV;
out vec4 color;
in vec2 texCoord;

uniform sampler2D ourTexture;
uniform sampler2D texture2; 

void main()
{
    color = mix(texture(ourTexture, texCoord), texture(texture2, texCoord), 0.2);
}