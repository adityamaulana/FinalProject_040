#include <iostream>
#include <string>
using namespace std;

class MataKuliah 
{
	private:

		float presensi;
		float activity;
		float exercise;
		float tugasAkhir;
	
	public:
		MataKuliah() 
		{
			presensi = 0;
			activity = 0;
			exercise = 0;
			tugasAkhir = 0;
		}

		int Total(int a, int b, int c, int d)
		{
			return a + b + c + d / 4;
		}

		void display()
		{
			cout << "Nilai Presensi = " <<getPresensi << endl;
			cout << "Nilai Activity = " << getActivity << endl;
			cout << "Nilai Exercise = " << getExercise << endl;
			cout << "Nilai Tugas Akhir = " << getTugasAkhir << endl;
		}
	
	virtual float hitungNilaiAkhir() 
	{ 
		return 0; 
	}
	
	virtual void cekKelulusan() 
	{ 
		return 0; 
	}
	
	virtual void input()
	{ 
		cout<< " Masukkan Nilai Presensi = \n" << setPresensi<<endl;
		cout << " Masukkan Nilai Activity = \n" << setActivity << endl;
		cout << " Masukkan Nilai Exercise = \n" << setExercise << endl;
		cout << " Masukkan Nilai Tugas Akhir = \n" << setTugasAkhir << endl;

		return 0; 
	}
	
	void setPresensi(float nilai) 
	{
		this->presensi = nilai;
	}

	float getPresensi() 
	
	{
		return presensi;
	}
	
	void setActivity(float nilai)
	
	{
		this->activity = nilai;
	}

	float getActivity()
	
	{
		return activity;
	}

	void setExercise(float nilai)
	{
		this-> exercise = nilai;
	}

	float getExercise()
	{
		return exercise;
	}

	void setTugasAkhir(float nilai)
	{
		this-> tugasAkhir = nilai;
	}

	float getTugasAkhir()
	{
		return tugasAkhir;
	}

};

class Pemrograman : public MataKuliah 
{ 
	public:
		string FirstLine()
		{
			return "Program Dibuat";
		}

};

int main() 
{ 
	MataKuliah MK;

	MK.setPresensi();
	MK.setActivity();
	MK.setExercise();
	MK.setTugasAkhir();

	MK.display();

	return 0;
}