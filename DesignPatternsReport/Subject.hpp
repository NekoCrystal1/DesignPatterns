/**
 * @file Subject.hpp
 * @brief 抽象主题实现：可被观察者观察
 *
 */
#pragma once
#include "Observer.hpp"
#include <vector>
class Subject
{
public:
	Subject() = default;
	~Subject() = default;
public:
	virtual void attach(Observer* observer);
	virtual void detach(Observer* observer);
	virtual void notify() = 0;
protected:
	std::vector<Observer*> m_vecObservers;
};

void Subject::attach(Observer* observer)
{
	m_vecObservers.push_back(observer);
}

void Subject::detach(Observer* observer)
{
	m_vecObservers.erase(std::find(m_vecObservers.begin(), m_vecObservers.end(), observer));
}