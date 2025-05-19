#include <iostream>
#include <fstream>
using namespace std;
void readFileIntoArray(string fileName, char charArray[])
{
    ifstream fin;
    char line;
    int currentLine = 0;
    fin.open(fileName);
    for(int i = 0;i < 10;i++)
    {
        fin >> line;
        charArray[i] = line;
    }
    fin.close();
}
void compareArrays(char charArrayA[], char charArrayB[], int resultIndicies[])
{
    for(int i = 0; i < 10;i++)
    {
        if(charArrayA[i] != charArrayB[i])
        {
            resultIndicies[i] = 0; //0 means its wrong
        }else{
            resultIndicies[i] = 1; //1 means its correct
        }
    }
}
void displayReport(char charArrayA[], char charArrayB[], int resultIndices[], int m, int c)
{
    for(int i = 0; i < 10; i++)
    {
        if(resultIndices[i] == 0)
        {
            m++;
            cout <<"Question "<< i<<": "<<"your answered: "<<charArrayB[i]<<"correct answer: "<<charArrayA[i]<<endl;
        }else
        {
            c++;
        }
    }
    double Percent = (double)c/10;
    cout << "Number of Questions missed: " << m << endl;
    cout << "Percentage of questions answered correctly: " << Percent << endl;
    if(Percent >= .7)
    {
        cout << "pass!";
    }else
    {
        cout << "fail!";
    }
}
int main()
{
    char correctAnswers[10];
    char studentAnswers[10];
    int results[10];
    int missed, correct;
    string file1 = "CorrectAnswers.txt";
    string file2 = "StudentAnswers.txt";
    readFileIntoArray(file1, correctAnswers);
    readFileIntoArray(file2, studentAnswers);
    compareArrays(correctAnswers, studentAnswers, results);
    displayReport(correctAnswers, studentAnswers, results, missed, correct);
    return 0;
}
