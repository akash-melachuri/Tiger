#pragma once

#include <glad/glad.h>

#include "Tiger/Rendering/Shader.h"

namespace Tiger {
	class GLShader : public Shader {
	public:
		GLShader(std::vector<ShaderStage> shaders);
		~GLShader();
		virtual void compile(std::vector<ShaderStage> shaders) override;
		virtual void bind() override;
		virtual void unbind() override;
	private:
		GLuint id;
	};
}