/**
 * @file StespSubject.hpp
 * @brief 步数主题实现：负责记录走过的步数，并发送给观察步数的观察者
 *
 * @details m_i32step作为步数被传递
 */
#pragma once
#include "Subject.hpp"
class StepsSubject : public Subject
{
public:
	StepsSubject() = default;
	~StepsSubject() = default;
	inline int getStep() const;
	inline void setStep(int step);
	virtual void notify();
private:
	int m_i32step = 0;
};

inline int StepsSubject::getStep() const
{
	return m_i32step;
}

inline void StepsSubject::setStep(int step)
{
	m_i32step = step;
	notify();
}

inline void StepsSubject::notify()
{
	for (Observer* observer : m_vecObservers)
	{
		observer->update(m_i32step);
	}
}
