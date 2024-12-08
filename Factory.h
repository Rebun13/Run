#pragma once

#include <vector>
#include "GameObject.h"
#include "SFML/Graphics.hpp"

using namespace sf;
using namespace std;

class Factory {
private:
	RenderWindow* m_Window;
public:
	Factory(RenderWindow* window);
	void loadLevel(
		vector <GameObject>& gameObjects,
		VertexArray& canvas,
		class InputDispatcher& inputDispatcher
	);
	Texture* m_Texture;
};