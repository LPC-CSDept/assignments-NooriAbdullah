#include<iostream>
#include<fstream>
using namespace std;

const unsigned short N = 5;
struct Scores {
    double sc[N];
    string grade;
};

struct Grade {
    string first;
    string last;
    string ssn;
    Scores score;
};

Grade g;

int main()
{
    const int records = 16;

	ifstream ifs;
    ofstream ofs;
    ifs.open("grades.txt");
    ofs.open("grades.bin", ios::out | ios::binary);

	if(!ifs) 
    {
        cout << "File Open Error : Sure that there is the file grades.txt \n";
        exit(0);
    }
     
    
    for (int i = 0; i < records; i++)
    {
        //read from file
        ifs >> g.first;
        ifs >> g.last;
        ifs >> g.ssn;
        for (int i = 0; i < N; i++)
            ifs >> g.score.sc[i];
        ifs >> g.score.grade;

        //write in file
        ofs.write((char*)&g, sizeof(g));
    }

	return 0;
}