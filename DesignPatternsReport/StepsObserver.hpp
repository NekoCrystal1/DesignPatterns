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
	bool m_bHasTrigger;
};

StepsObserver::StepsObserver(std::string name, int targetSteps) : Observer(name), m_i32TargetSteps(targetSteps), m_bHasTrigger(false)
{}

void StepsObserver::update(int state)
{
	if(!m_bHasTrigger && state > m_i32TargetSteps)
	{
		std::cout << "!Steps " << m_i32TargetSteps << " Steps!" << std::endl;
		m_bHasTrigger = true;
	}
}
