
#version 430 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 proj;

out vec3 Normal;
out vec3 WorldPos;

void main()
{
    gl_Position = proj*view*model*vec4(aPos,1.0f);	
	WorldPos = vec3(model*vec4(aPos,1.0f));
	Normal = mat3(transpose(inverse(model)))*aNormal;	
}