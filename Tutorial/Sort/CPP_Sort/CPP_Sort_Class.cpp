#include <iostream>
#include <algorithm>

using namespace std;


class Student{
    public:
        string name;
        int score;
        Student(string name, int score){
            this->name = name;
            this->score = score;
        }
        // 정렬 기준은 점수가 작은 순서
        bool operator < (Student &student){
            return this->score < student.score;
        }
};

int main(void){
    Student students[] ={
        Student("rkrk", 90),
        Student("twee", 43),
        Student("wer", 74),
        Student("fsdf", 18),
    };
    cout << sizeof(students) / sizeof(Student) << endl;
    sort(students, students+4);
    for(int i =0; i< 4; i++){
        cout << students[i].name << ' ';
    }
    return 0;
}