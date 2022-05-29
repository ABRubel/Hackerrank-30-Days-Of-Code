#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores; 
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id)
        {
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = id;
            this->testScores = scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int sum = 0;
            int n   = testScores.size();
            for(int score : testScores) 
            {   
                sum += score;
            }
            int avg  = sum / n;
            if (90 <= avg && avg <= 100) {
                return  'O';
            } else if (80 <= avg && avg < 90) {
                return  'E';
            } else if (70 <= avg && avg < 80) {
                return  'A';
            } else if (55 <= avg && avg < 70) {
                return  'P';
            } else if (40 <= avg && avg < 55) {
                return  'D';
            } else if (avg < 40) {
                return  'T';
            }
            return  'O';
        }
};

int main() {