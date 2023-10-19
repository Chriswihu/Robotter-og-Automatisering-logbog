package org.abstractia.javacsgmodules.carWheel;

import org.abstractica.javacsg.Geometry3D;
import org.abstractica.javacsg.JavaCSG;
import org.abstractica.javacsg.JavaCSGFactory;

public class CarWheel {

    //Wheel parametre
    private static double wheelRadius = 100;
    private static double wheelThickness = 20;
    private static double wheelWidth = 15;
    private static double wheelSpoolRadius = 15;
    private static double wheelSpoolThickness = 8;
    private static double wheelConnectRadius = 10;
    private static double wheelTreadThickness = 5;

    public static void main(String[] args) {

        JavaCSG csg = JavaCSGFactory.createDefault();

        //Torus Wheel
        Geometry3D torus = csg.torusSegment3D
                (
                        wheelThickness,
                        wheelRadius,
                        csg.degrees(360),
                        csg.degrees(360),
                        16,
                        64,
                        true
                );

        //Cylinder Wheel
        Geometry3D rubber = csg.cylinder3D(wheelRadius, wheelThickness, 64, true);
        Geometry3D rubberCut = csg.cylinder3D(wheelRadius-wheelWidth, wheelThickness+1, 64, true);
        rubber = csg.difference3D(rubber, rubberCut);

        //Spool and connect parametre
        Geometry3D spool = csg.cylinder3D(wheelSpoolRadius, wheelSpoolThickness, 32, true);
        Geometry3D connect = csg.cylinder3D(wheelConnectRadius, wheelSpoolThickness+1, 32, true);
        spool = csg.difference3D(spool, connect);

        //Basic tread parametre
        Geometry3D tread = csg.box3D(wheelRadius-1, wheelTreadThickness, wheelTreadThickness, true);
        Geometry3D tread90 = csg.rotate3DZ(csg.degrees(90)).transform(tread);

        //4-legged tread parametre
        Geometry3D treads = csg.union3D(tread, tread90);

        //8-legged tread parametre
//        Geometry3D treads = csg.union3D(tread, tread90);
//        Geometry3D treads45 = csg.union3D(tread, tread90);
//        treads45 = csg.rotate3DZ(csg.degrees(45)).transform(treads45);
//        treads = csg.union3D(treads, treads45);

        //12-legged tread parametre
//		Geometry3D treads = csg.union3D(tread, tread90);
//		Geometry3D treads30 = csg.union3D(tread, tread90);
//		Geometry3D treads60 = csg.union3D(tread, tread90);
//		treads30 = csg.rotate3DZ(csg.degrees(30)).transform(treads30);
//		treads60 = csg.rotate3DZ(csg.degrees(60)).transform(treads60);
//		treads = csg.union3D(treads, treads30, treads60);

        //Parts put together
        Geometry3D wheel = csg.union3D(treads, spool);
        wheel = csg.difference3D(wheel, connect);

        //Wheel and rubber put together
        wheel = csg.union3D(wheel, rubber);
        csg.view(wheel);

        //Wheel and torus put together
//		torus = csg.union3D(torus, wheel);
//		csg.view(torus);
    }
}
