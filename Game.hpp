#pragma once
#ifndef DEF_GAME
#define DEF_GAME

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	void run();

private:

	static const float PlayerSpeed;
	static const sf::Time Game::TimePerFrame;

	void processEvent();
	void update(sf::Time deltaTime);
	void render();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

	sf::RenderWindow mWindow;
	sf::Texture mTexture;
	sf::Sprite mPlayer;
	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingLeft;
	bool mIsMovingRight;
};

#endif // !DEF_GAME
