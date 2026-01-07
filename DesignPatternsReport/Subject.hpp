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
	inline void setState(int state);
	inline int getState() const;
	inline void attach(Observer* observer);
	inline void detach(Observer* observer);
	inline void notify();
protected:
	int m_i32state = 0;
	std::vector<Observer*> m_vecObservers;
};
inline void Subject::setState(int state)
{
	m_i32state = state;
	notify();
}

inline int Subject::getState() const
{
	return m_i32state;
}

inline void Subject::attach(Observer* observer)
{
	m_vecObservers.push_back(observer);
}

inline void Subject::detach(Observer* observer)
{
	m_vecObservers.erase(std::find(m_vecObservers.begin(), m_vecObservers.end(), observer));
}

inline void Subject::notify()
{
	for (Observer* observer : m_vecObservers)
	{
		observer->update(m_i32state);
	}
}
