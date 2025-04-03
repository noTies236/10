#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "texture.h"
#include "iostream"

void myFirstTexture(unsigned int &MainTexture, unsigned int &SecondTexture)
{
	int width, height, nrChannels;
	stbi_set_flip_vertically_on_load(true);
	unsigned char *data = stbi_load("C:/Users/wally/Downloads/container.jpg", &width, &height, &nrChannels, 0);
	
	GLuint texture;
	glGenTextures(1, &texture);
	// GL_TEXTURE0 is always by default activated
	// activate the texture unit first before binding texture
	glActiveTexture(GL_TEXTURE0);

	glBindTexture(GL_TEXTURE_2D, texture);

	if (data) {
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		
		// Once glTexImage2D is called, the currently bound texture object now has the texture image attached to it. 
		glGenerateMipmap(GL_TEXTURE_2D); 
	} else {
		std::cout << "Failed to load texture" << stbi_failure_reason() << std::endl;
	}
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
	stbi_image_free(data);
	
	// texture 2
	GLuint texture2;
	glGenTextures(1, &texture2);
	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D , texture2);

	data = stbi_load("C:/Users/wally/Downloads/awesomeface.png", &width, &height, &nrChannels, 0);

	if (data) {
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else {
		std::cout << "Failed to load texture" << stbi_failure_reason() << std::endl;
	}
	
	MainTexture = texture;
	SecondTexture = texture2;
	stbi_image_free(data);
}