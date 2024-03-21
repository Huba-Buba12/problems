#pragma once
#include <string>

namespace a
{
	class Game
	{
		int a_width;
		int a_height;
		std::string a_capture;
		a::Circle* a_c;
		int a_n;
		sf::RenderWindow a_window;

	public:
		Game(int width, int height, const std::string& capture)
		{
			a_width = width;
			a_height = height;
			a_capture = capture;
			
			
		}

		void Setup(int n)
		{
			a_n;
			a_window.create(sf::VideoMode(a_height, a_width), a_capture);
			
			sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

			srand(time(0));
			

			a_c = new a::Circle[a_n];
			for (int i = 0; i < a_n; i++)
			{
				int x = rand() % 1000;
				int y = rand() % 600;
				int r = rand() % 100 + 1;
				a_c[i].Setup(x, y, r);
			}
		}
	

		void LifeCycle()
		{
			while (a_window.isOpen())
			{
				sf::Event event;
				while (a_window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						a_window.close();
				}

				a_window.clear();
				for (int i = 0; i < a_n; i++)
					a_window.draw(a_c[i].Get());
				a_window.display();
			}
		}

	};
}