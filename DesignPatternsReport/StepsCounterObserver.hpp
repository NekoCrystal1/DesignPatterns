/**
 * @file StepsCounterObservers.hpp
 * @brief 步数统计观察者：对步数进行播报
 *
 * @details step作为更新步数
 */
#pragma once
#include <iostream>
#include "Observer.hpp"

class StepsCounterObserver : public Observer
{
public:
	StepsCounterObserver(std::string name);
	~StepsCounterObserver() = default;
	virtual void update(int state);
private:
};

StepsCounterObserver::StepsCounterObserver(std::string name) : Observer(name)
{}

void StepsCounterObserver::update(int state)
{
		std::cout << "It has moved" << state << " Steps!" << std::endl;
}
