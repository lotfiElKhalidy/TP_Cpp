#include <fstream>
#include <iostream>

#include "catch.hpp"
#include "Point.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

// NOTE : ce test utilise des enum "class"
// il faut donc utiliser un compilateur g++ >= 6.1
// ou activer l'option c++11 du compilateur
// -std=c++11 ou -std=c++0x sur les tres vieux compilateurs

// Les tests ne sont pas exhaustifs, loin de là

TEST_CASE("Instanciation", "[Point]") {	
	Point p1;
	REQUIRE(p1.getX() == 0);
	REQUIRE(p1.getY() == 0);
	
    p1.setX(11);
    p1.setY(21);

    REQUIRE(p1.getX() == 11);
	REQUIRE(p1.getY() == 21);

	Point p2(12, 22);

	REQUIRE(p2.getX() == 12);
	REQUIRE(p2.getY() == 22);
}


TEST_CASE("Origin", "[Point]") {
	REQUIRE(ORIGIN.getX() == 0);
	REQUIRE(ORIGIN.getY() == 0);
}


TEST_CASE("Compteur", "[Forme]") {
   // Pour être correct, ce test doit etre le premier sur Forme
   REQUIRE(0 == Shape::nextId());
   Shape f1;
   REQUIRE(0 == f1.getId());
   REQUIRE(1 ==  Shape::nextId());	
   // Verification que la valeur n'est pas decrementee accidentellement.
   Shape * p = new Shape;
   REQUIRE(1 == p->getId());
   delete p;
   REQUIRE(2 == Shape::nextId());	
}


TEST_CASE("Instanciation1", "[Forme]") {
	Shape f1;
	REQUIRE(f1.getPoint()->getX() == 0);
	REQUIRE(f1.getPoint()->getY() == 0);
	REQUIRE(f1.getColor() ==  COLORS::BLUE);
}


TEST_CASE("Instanciation2", "[Forme]") {
	Shape f2;
	
	// This line works too
	//f2.setPoint(new Point{15,25});   

	f2.getPoint()->setX(15);
	f2.getPoint()->setY(25);
	f2.setColor(COLORS::GREEN);
	REQUIRE (f2.getPoint()->getX() == 15);
	REQUIRE (f2.getPoint()->getY() == 25);
	REQUIRE (f2.getColor() == COLORS::GREEN);
	REQUIRE_FALSE (f2.getColor() == COLORS::BLUE);
	REQUIRE_FALSE (f2.getColor() == COLORS::RED);
	REQUIRE_FALSE (f2.getColor() == COLORS::YELLOW);
}


TEST_CASE("Instanciation3", "[Forme]") {
    // IL N'Y A PAS D'ERREUR DANS LE TEST, CELA DOIT MARCHER	
	Shape f2(Point(10,20), COLORS::RED);
	REQUIRE (f2.getPoint()->getX() == 10);
	REQUIRE (f2.getPoint()->getY() == 20);
	REQUIRE (f2.getColor() == COLORS::RED);
	REQUIRE_FALSE (f2.getColor() == COLORS::BLUE);

	f2.getPoint()->setX(15);
	f2.getPoint()->setY(25);
	f2.setColor(COLORS::YELLOW);
	REQUIRE (f2.getPoint()->getX() == 15);
	REQUIRE (f2.getPoint()->getY() == 25);
	REQUIRE (f2.getColor() == COLORS::YELLOW);
	REQUIRE_FALSE (f2.getColor() == COLORS::BLUE);
	REQUIRE_FALSE (f2.getColor() == COLORS::RED);
}


TEST_CASE("BoiteEnglobante", "[Forme]") {
	Shape f;
	REQUIRE (f.getW() == 0);
	REQUIRE (f.getH() == 0);
}


TEST_CASE("Cercle", "[Cercle]") {
	Shape::nbShapes = 0;
	int compteur = Shape::nextId();
	Circle c1;
	Circle c2{10,15}; 
	
	REQUIRE(c1.toString() == "CIRCLE 0 0 0 0\norder : 0");
	REQUIRE(c2.toString() == "CIRCLE 0 0 10 15\norder : 1");

	c2.setRadius(2);
	REQUIRE(c2.getRadius() == 2);
	REQUIRE(c2.toString()   == "CIRCLE 4 4 10 15\norder : 1");
	REQUIRE(c2.getW() == 10);
	REQUIRE(c2.getH() == 15);  

	REQUIRE(Shape::nextId() == (compteur+2) );
}


TEST_CASE("Polymorphisme", "[Forme]") {
	Shape::nbShapes = 0;
	Shape * f1 = new Circle;
	Shape * f2 = new Rectangle;

	REQUIRE(f1->toString() == "CIRCLE 0 0 0 0\norder : 0");
	REQUIRE(f2->toString() == "RECTANGLE 0 0 0 0\norder : 1");

	delete f1;
	delete f2;
}