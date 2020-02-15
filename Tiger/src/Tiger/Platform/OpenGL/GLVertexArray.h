#pragma once

#include <glad/glad.h>

#include "Tiger/Rendering/VertexArray.h"

namespace Tiger {

	class GLVertexArray : public VertexArray {
	public:
		GLVertexArray();
		~GLVertexArray();

		virtual void addVertexBuffer(const Ref<VertexBuffer>& buffer) override;
		virtual void bind() const override;
		virtual void unbind() const override;
	private:
		GLuint id;
		std::vector<Ref<VertexBuffer>> vertBuffers;
	};

}