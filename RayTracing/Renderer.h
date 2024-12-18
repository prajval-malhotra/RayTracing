#pragma once

#include "Walnut/Image.h"
#include <memory>
#include <glm/glm.hpp>

class Renderer {
public:
	Renderer() = default;

	void Render();
	void OnResize(uint32_t, uint32_t);

	std::shared_ptr<Walnut::Image> GetFinalImage() const { return m_FinalImage; }
private:
	std::shared_ptr<Walnut::Image> m_FinalImage;
	uint32_t* m_ImageData = nullptr;

	uint32_t PerPixel(glm::vec2 coord);
};