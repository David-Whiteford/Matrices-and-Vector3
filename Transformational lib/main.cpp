/// <summary>
/// Tests for the My Matrix 3
/// 
/// Summary: Tests for all the math involved with my Matrix 3, 
/// in the test values were predicted that were correct and the program should give back corract answer.
/// 
/// David Whiteford
/// 7/3/18
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyMatrix3.h"
#include "MyVector3.h"

#include <SFML\Graphics.hpp>
#include <string>
#include <math.h>
using namespace std;
/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{

	MyMatrix3 matrixThree{};
	MyMatrix3 matrixOne{ 1.0, 5.0 , 6.0 , 9.0, 12.0, 5.0, 10.0 , 12.0 , 22.0 };
	MyMatrix3 matrixTwo{ 4.0, 5.0 , 6.0 , 7.0, 8.0, 9.0, 10.0 , 12.0 , 14.0 };

	/*MyVector3 vectorOne = { 2 ,3 3 };*/


	//used to test whether the addition is correct
	matrixThree = matrixOne + matrixTwo;
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " 5.0    , 10.0    , 12.0    , 16.0    , 20.0    , 14.0    , 20.0    , 24.0    , 36.0 " << endl;
	cout << "Addition Test --------------------------------------------------" << endl;
	cout << endl;

	//used to test whether the subtraction is correct
	matrixThree = matrixOne - matrixTwo;
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " -3.0    , 0.0    , 0.0    , 2.0    , 4.0    , -4.0    , 0.0    , 0.0    , 8.0 " << endl;
	cout << " Subtraction Test --------------------------------------------------" << endl;
	cout << endl;

	//used to test whether the multiplication is correct
	matrixThree = matrixOne * matrixTwo;
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " 5.0    , 10.0    , 12.0    , 16.0    , 20.0    , 14.0    , 20.0    , 24.0    , 36.0 " << endl;
	cout << " multiplication Test --------------------------------------------------" << endl;
	cout << endl;

	//determines dteterminate
	cout << matrixOne.determinant() << endl;
	// answer that should come up during test
	cout << "-608 " << endl;
	cout << " Determinant Test --------------------------------------------------" << endl;
	cout << endl;

	//determines the invese
	matrixThree = matrixOne.inverse();
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " - 51 / 152	, 1 / 1, 47 / 608 , 37 / 152 , 1 / 16, - 49 / 608 , 3 / 152, - 1 / 16	, 33 / 608" << endl;
	cout << "  -0.335526, 0.062500 , 0.077303 , 0.243421 , 0.062500 , -0.080592 , 0.019737 , -0.062500 , 0.054276" << endl;
	cout << " Inverse Test --------------------------------------------------" << endl;
	cout << endl;

	//determines transpose
	matrixThree = matrixOne.transpose();
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " 1.0    , 9.0    , 10.0    , 5.0    , 12.0    , 12.0    , 560    , 5.0    , 22.0" << endl;
	cout << " Transpose Test --------------------------------------------------" << endl;
	cout << endl;

	//determines scale
	matrixThree = matrixOne.scale(3);
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " 1.0    , 3.0    , 0.0    , 1.0    , 3.0    , 0.0    , 1.0    , 3.0    , 0.0" << endl;
	cout << " Transpose Test --------------------------------------------------" << endl;
	cout << endl;


	cout << endl;
	//test to prove equal and not equal between two vectors 
	cout << "Test for equality (== Operator) " << endl;
	if (matrixOne == matrixTwo)
	{
		cout << "The metrices are equal" << endl;
	}
	else
	{
		cout << "The metrices are not equal" << endl;
	}

	cout << endl;
	//determines roatattion on x axis
	matrixThree = matrixOne.rotationX(180);
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << "1.000000,0.000000,0.000000,0.000000,-0.598460,0.801153,0.000000,-0.801153,-0.598460" << endl;
	cout << " Rotation on X Axis Test at 180 Degrees --------------------------------------------------" << endl;
	cout << endl;

	cout << endl;
	//determines roatattion on y axis
	matrixThree = matrixOne.rotationY(180);
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << " -0.598460,0.000000,-0.801153,0.000000,1.000000,0.000000,0.801153,0.000000,-0.598460" << endl;
	cout << "  Rotation on Y Axis Test at 180 Degrees --------------------------------------------------" << endl;
	cout << endl;

	cout << endl;
	//determines roatattion on z axis
	matrixThree = matrixOne.rotationZ(180);
	cout << matrixThree.toString() << endl;
	// answer that should come up during test
	cout << "-0.598460, 0.801153, 0.000000, -0.801153, -0.598460, 0.000000, 0.000000, 0.000000, 1.000000" << endl;
	cout << "  Rotation on Z Axis Test at 180 Degrees --------------------------------------------------" << endl;
	cout << endl;





	//matrixThree = matrixOne.translation(5);
	//cout << matrixThree.toString() << endl;
	//// answer that should come up during test
	//cout << " " << endl;
	//cout << " Transpose Test --------------------------------------------------" << endl;
	//cout << endl;


	system("pause");
	return 0;
}