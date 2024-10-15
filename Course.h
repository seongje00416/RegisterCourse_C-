#pragma once
#ifndef COURSE_H
// inndef OOOO : OOOO 파일이 존재하지 않는다면 아래 블록을 실행하겠다는 선언문
#include <string>

class Course
{
public: 
	Course(const std::string& name, int courseID, std::string& professor, std::string& classroom, std::string& time);
	// 타입의 뒤에 &를 붙이는 것은 '원본 데이터에 접근하겠다'는 의미
	// &를 사용하는 경우
	// 1. 데이터 타입이 복잡한 경우 ( ex. vector, string 등 ): 원시 타입이 아닌 구조가 복잡한 타입의	 데이터를 사용할 때
	// 2. 원본 데이터를 직접 수정하고자 하는 경우 : int, float 등의 경우도 원본 데이터를 변경해줘야 한다면 &를 사용해 참조
	//		-> 원본 데이터를 수정하는 경우에도 int와 같이 데이터의 크기가 작은 경우에는 &를 사용하지 않을 수도 있다.

	// Cousre 클래스의 Getter 메소드를 public을 지정
	std::string getName() const;
	int getCourseID() const;
	std::string getProfessor() const;
	std::string getClassroom() const;
	std::string getTime() const;

	// Course 클래스의 Setter 메소드를 public에 지정
	void setName(const std::string& name);
	void setCourseID(int courseID);
	void setProfessor(const std::string& professor);
	void setClassroom(const std::string& classroom);
	void setTime(const std::string& time);
	
private:
	// 실제 변수들에는 직접 접근하지 못하도록 private로 선언
	std::string m_name;
	int m_courseID;
	std::string m_professor;
	std::string m_classroom;
	std::string m_time;
};

#endif
// endif : 위에서 선언한 ifndef 조건이 적용되는 범위의 끝을 지정해주는 선언문

