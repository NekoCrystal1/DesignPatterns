/**
 * @file StepObserver.hpp
 * @brief 步数观察者：当步数达到一定值时进行播报（步数成就）
 *
 * @details step作为更新步数
 */
#pragma once
#include "Observer.hpp"
#include "iostream"

class StepsObserver : public Observer
{
public:
	StepsObserver(std::string name, int targetSteps);
	~StepsObserver() = default;
	virtual void update(int state);
private:
	int m_i32TargetSteps;
	bool b_hasTrigger;
};

StepsObserver::StepsObserver(std::string name, int targetSteps) : Observer(name), m_i32TargetSteps(targetSteps), b_hasTrigger(false)
{}

void StepsObserver::update(int state)
{
	if(!b_hasTrigger && state > m_i32TargetSteps)
		std::cout << m_i32TargetSteps << " Steps!" << std::endl;
	}
}
