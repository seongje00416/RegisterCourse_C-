#pragma once
#ifndef COURSE_H
// inndef OOOO : OOOO ������ �������� �ʴ´ٸ� �Ʒ� ����� �����ϰڴٴ� ����
#include <string>

class Course
{
public: 
	Course(const std::string& name, int courseID, std::string& professor, std::string& classroom, std::string& time);
	// Ÿ���� �ڿ� &�� ���̴� ���� '���� �����Ϳ� �����ϰڴ�'�� �ǹ�
	// &�� ����ϴ� ���
	// 1. ������ Ÿ���� ������ ��� ( ex. vector, string �� ): ���� Ÿ���� �ƴ� ������ ������ Ÿ����	 �����͸� ����� ��
	// 2. ���� �����͸� ���� �����ϰ��� �ϴ� ��� : int, float ���� ��쵵 ���� �����͸� ��������� �Ѵٸ� &�� ����� ����
	//		-> ���� �����͸� �����ϴ� ��쿡�� int�� ���� �������� ũ�Ⱑ ���� ��쿡�� &�� ������� ���� ���� �ִ�.

	// Cousre Ŭ������ Getter �޼ҵ带 public�� ����
	std::string getName() const;
	int getCourseID() const;
	std::string getProfessor() const;
	std::string getClassroom() const;
	std::string getTime() const;

	// Course Ŭ������ Setter �޼ҵ带 public�� ����
	void setName(const std::string& name);
	void setCourseID(int courseID);
	void setProfessor(const std::string& professor);
	void setClassroom(const std::string& classroom);
	void setTime(const std::string& time);
	
private:
	// ���� �����鿡�� ���� �������� ���ϵ��� private�� ����
	std::string m_name;
	int m_courseID;
	std::string m_professor;
	std::string m_classroom;
	std::string m_time;
};

#endif
// endif : ������ ������ ifndef ������ ����Ǵ� ������ ���� �������ִ� ����

