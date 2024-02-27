#include "Course.h"
using namespace std;

void Course::PrintCourseList(unordered_map<string, Course> t_courses) {
	//If table is not empty
	if (!t_courses.empty()) {

		//Sort the table using an ordered map
		map<string, Course> orderedTable(t_courses.begin(), t_courses.end());

		cout << "Here is a sample schedule:" << endl;
		cout << endl;
		for (auto& iter : orderedTable) {
			cout << iter.second.courseNumber << ", " << iter.second.courseName << endl;
		}
		//Empty the sorted map
		orderedTable.clear();
	}
	//If the table is empty
	else {
		cout << "The course list is empty." << endl;
	}
}