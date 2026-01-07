/**
 * @file StepsCounterObservers.hpp
 * @brief 步数统计观察者：对步数进行播报
 *
 * @details step作为更新步数
 */
#pragma once
#include "Observer.hpp"
#include <iostream>

class StepsCounterObserver : public Observer
{
public:
	StepsCounterObserver(std::string name) : Observer(name) {};
	~StepsCounterObserver() = default;
	virtual void update(int state);
private:
};

inline void StepsCounterObserver::update(int state)
{
		std::cout << "StepsCounter : It has moved " << state << " Steps!" << std::endl;
}
