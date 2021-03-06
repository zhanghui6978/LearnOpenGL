
#ifndef NanosuitApp_h__
#define NanosuitApp_h__

#include "GLCommon/OpenGLAPP.h"
#include "GLCommon/Model.h"

class NanosuitApp : public OpenGLApp
{
public:
	NanosuitApp();
	~NanosuitApp();

public:
	bool Init()override;
	void Render()override;
	void ClearnUp()override;

private:
	GLCommon::Shader* m_shader = 0;     // 着色器程序
	GLCommon::Shader* m_borderShader = 0;     // 着色器程序
	GLCommon::Model* m_model = 0;
};

#endif // NanosuitApp_h__