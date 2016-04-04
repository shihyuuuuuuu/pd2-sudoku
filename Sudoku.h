using namespace std;
class Sudoku{
	public:
		void giveQuestion();
		void readIn();
		void solve();
		void changeNum(int a, int b);
		void changeRow(int a, int b);
		void changeCol(int a, int b);
		void rotate(int n);
		void flip(int n);
		void transform();
		void change();
		void printOut(int* su);
		int findZero(int* su);
		int* checkRow(int i, int* su, int* poss);
		int* checkCol(int i, int* su, int* pos);
		int* checkSqr(int i, int* su, int* pos);
		int* transPos(int* Pos, int* possible);
		void fillIn(int i, int* su, int* pos);
	
	private:
		int i, j, k, l;
		int map[81];
		int su[81];
		int temp[27];
		int sqr1[9][9];
		int sqr2[9][9];
		int a, b, Temp;
		int* A;
		int* B;
		int* C;
		int Map[81];
		int pos[9];
};
