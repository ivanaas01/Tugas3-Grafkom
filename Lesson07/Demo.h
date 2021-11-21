#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4;
	GLuint shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, cubeVBO2, cubeVAO2, cubeEBO2, cube_texture2, stexture3, cubeVBO3, cubeVAO3, cubeEBO3, cube_texture3, stexture4;
	GLuint activeProgram;
	float angle = 0;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	int oldKeyState = GLFW_RELEASE;
	bool toggleTextured = false;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	void switchShaderProgram();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredCube2();
	void BuildColoredCube3();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredPlane();
	void BuildTexturedCube();
	void BuildTexturedCube2();
	void BuildTexturedCube3();
	void BuildTexturedPlane();
	void DrawTexturedCube();
	void DrawTexturedCube2();
	void DrawTexturedCube3();
	void DrawTexturedPlane();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

