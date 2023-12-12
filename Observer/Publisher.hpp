# ifndef PUBLISHER_HPP
# define PUBLISHER_HPP

#include <memory>
#include <string>
#include <vector>
#include "Subscriber.hpp"

class Subject;
class ISubscriber;

class Publisher
{
	public:
		explicit	Publisher(std::shared_ptr<Subject> s);

		void checkIfSubjectUpdated();
		void addSubscriber(std::shared_ptr<ISubscriber>);
		void removeSubscriber(std::shared_ptr<ISubscriber>);
		void notify();

	private:
		std::vector<std::shared_ptr<ISubscriber>>	subscribers;
		std::shared_ptr<Subject>					subject;
		size_t										currentReleaseOfSubject;

};


# endif// PUBLISHER_HPP