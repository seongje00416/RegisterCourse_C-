#include "Course.h"

Course::Course(const std::string name, int courseID, std::string professor, std::string classroom, std::string time): 
	m_name(name), m_courseID(courseID), m_professor(professor), m_classroom(classroom), m_time(time) {}

std::string Course::getName() const {
	return m_name;
}
int Course::getCourseID() const {
	return m_courseID;
}
std::string Course::getProfessor() const {
	return m_professor;
}
std::string Course::getClassroom() const {
	return m_classroom;
}
std::string Course::getTime() const {
	return m_time;
}

void Course::setName(const std::string& name) {
	m_name = name;
}
void Course::setCourseID(int courseID) {
	m_courseID = courseID;
}
void Course::setProfessor(const std::string& professor) {
	m_professor = professor;
}
void Course::setClassroom(const std::string& classroom) {
	m_classroom = classroom;
}
void Course::setTime(const std::string& time) {
	m_time = time;
}


