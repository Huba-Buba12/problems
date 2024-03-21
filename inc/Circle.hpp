#pragma once
#include <SFML/Graphics.hpp>
namespace a
{
	class Circle
	{
		float a_r;
		float a_x, a_y;
		sf::CircleShape a_shape;
		
	public:
		Circle() = default;
		


		Circle(float x, float y, float r)
		{
			Setup(x, y, r);
		};

		void Setup(float x, float y, float r)
		{
			a_x = x;
			a_y = y;
			a_r = r;
			a_shape.setRadius(a_r);
			a_shape.setPosition(a_x, a_y);
			a_shape.setFillColor(sf::Color::Color(255, 255, 255));
		}

		sf::CircleShape Get()
		{
			return a_shape;
		}

	};
}