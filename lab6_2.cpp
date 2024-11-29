#include<iostream>
#include<cmath>
using namespace std;

double deg2rad(double deg){
    double rad = (deg*M_PI)/180;
    return rad;
    }

double rad2deg(double radi){
    double degre = (180*radi)/M_PI;
    return degre;
    }

double findXComponent(double l1,double l2, double a1,double a2){
    double vec1 = l1*cos(a1);
    double vec2 = l2*cos(a2);
    double vecx = vec1 + vec2;
    return vecx;
    }
    
double findYComponent(double l1,double l2, double a1,double a2){
    double vec1 = l1*sin(a1);
    double vec2 = l2*sin(a2);
    double vecy = vec1 + vec2;
    return vecy;
    }

double pythagoras(double l1, double l2){
    double length = sqrt(pow(l1,2)+pow(l2,2));
    return length;
    }

void showResult(double i,double k){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << i << endl;
    cout << "Direction of the resultant vector (deg) = " << k << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }
    

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
