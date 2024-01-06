#include "Publisher.hpp"
#include "Subscriber.hpp"
#include "Subject.hpp"


int main()
{
	std::shared_ptr <Subject> subject = std::make_shared<Subject>();
	Publisher	observer(subject);

	std::shared_ptr <ISubscriber> sub1 = std::make_shared<Subscriber>(Subscriber("Gago"));
	std::shared_ptr <ISubscriber> sub2 = std::make_shared<Subscriber>(Subscriber("Davo"));
	std::shared_ptr <ISubscriber> sub3 = std::make_shared<Subscriber>(Subscriber("Edo"));
	std::shared_ptr <ISubscriber> sub4 = std::make_shared<Subscriber>(Subscriber("Yuro"));
	observer.addSubscriber(sub1);
	subject->updateReleaseNumber();

	observer.checkIfSubjectUpdated();
	
	observer.addSubscriber(sub2);
	observer.addSubscriber(sub3);
	observer.addSubscriber(sub4);
	observer.checkIfSubjectUpdated();

	subject->updateReleaseNumber();
	observer.checkIfSubjectUpdated();

	observer.removeSubscriber(sub2);
	subject->updateReleaseNumber();

	observer.checkIfSubjectUpdated();
	return 0;
}