# ifndef SUBJECT_HPP
# define SUBJECT_HPP

#include <string>


class Subject
{
	public:
		Subject();
		void updateReleaseNumber();
		size_t	getReleaseNumber() const;
	private:
		size_t releaseNumber;
};


# endif// SUBJECT_HPP