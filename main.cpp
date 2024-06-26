#include <iostream>
#include <vector>
#include "Caminist.h"
#include "InvalidAn.h"
#include "InvalidNota.h"
#include "camera.h"
#include "palier.h"
#include "camin.h"
#include "caministlicenta.h"
#include "caministmaster.h"
#include "caministdoctorat.h"
#include "clasaderivata.h"
#include "altaclasa.h"
#include "clasavirtuala.h"
#include "CameraFactory.h"
#include "CaministDecorator.h"
#include "Generic.h"
auto printCaministDetails = [](const Caminist& caminist1, const Caminist& caminist2) {
    std::cout << "Detaliile caministului 1: " << caminist1 << std::endl;
    std::cout << "Detaliile caministului 2: " << caminist2 << std::endl;
};
int main()
{
    Caminist Caministlipsa,Caminist1,Caminist2,Caminist3,Caminist4,Caminist5,Caminist6,Caminist7,Caminist8,Caminist9,as_vrea_sa_fiu_Caminist_dar_nu_am_medie;
    try{
        Caministlipsa=Caminist("",0,0,"");
        Caminist1=Caminist("Suhan Nicoleta", 1, 8.87, "Informatica");
        Caminist2=Caminist("Onisie Andreea", 1, 8.99, "Informatica");
        Caminist3=Caminist("Carciumaru Adelin", 1, 8.50, "Informatica");
        Caminist4=Caminist("Lumanararu Ionut", 1, 8.40, "Informatica");
        Caminist5=Caminist("Glod Cosmin", 1, 9.91, "Informatica");
        Caminist6=Caminist("Trifan Marius", 1, 7.23, "Matematica");
        Caminist7=Caminist("Nistor Horia", 1, 8.53, "Matematica");
        Caminist8=Caminist("Trifan Iustin", 1, 6.87, "CTI");
        Caminist9=Caminist("Iovan Andrei", 1, 7.87, "CTI");
        as_vrea_sa_fiu_Caminist_dar_nu_am_medie=Caminist("Cristea Alexandru", 1, 5.70, "Informatica");
    } catch(const InvalidAn& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch(const InvalidNota& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    camera camera335=camera(Caminist1, Caminist2, 2, 335, "nu au");
    camera camera321=camera(Caminist3, Caminist4, 2, 321, "nu au");
    camera cameragoala=camera(Caministlipsa, Caministlipsa, 0, 0, "au");
    camera camera313=camera(Caminist5, Caministlipsa, 1, 313, "au");
    camera camera307=camera(Caminist6, Caminist7, 2, 307, "au");
    camera camera310=camera(Caminist8, Caminist9,2,310,"au");


    palier etaj1=palier(camera335, camera321, "INFORMATICIENII", 1);
    palier etaj2=palier(camera313, cameragoala, "ETAJUL APROAPE GOL", 2);
    palier etaj3=palier(camera307, camera310, "CTI+MATE", 3);

    camin caminD=camin("Camin Grozavesti D", 10, 9);
    caminD.add_palier(etaj1);
    caminD.add_palier(etaj2);
    caminD.add_palier(etaj3);
    /*

    std::cout<<etaj1;
    std::cout<<etaj2;
    std::cout<<etaj3;


    std::cout<<camera335;
    std::cout<<camera321;
    std::cout<<camera313;
    std::cout<<camera307;
    std::cout<<camera310;

    //testam constructorul de copiere
    Caminist Caminist10=Caminist1;
    Caminist10.prezinta_te();

    //testam operatorul= de copiera
    Caminist Caminist11;
    Caminist11=Caminist2;
    Caminist2.prezinta_te();

    //testam destructorul(haha teapa nu-l mai apelam si noi pentru ca vom avea bug-uri, eu sigur nu l-am apelat si apoi am facut debugging 2 ore)

    //testam operatorul<<
    std::cout<<Caminist1;
    std::cout<<caminD;

    //urmeaza sa testam functiile
    Caminist1.prezinta_te();
    Caminist2.prezinta_te();
    Caminist3.prezinta_te();

    Caminist1.ai_medie_pentru_camin();
    Caminist2.ai_medie_pentru_camin();
    as_vrea_sa_fiu_Caminist_dar_nu_am_medie.ai_medie_pentru_camin();

    etaj1.dampetrcere();
    etaj2.dampetrcere();
    etaj3.dampetrcere();

    etaj1.sef_palier();
    etaj2.sef_palier();
    etaj3.sef_palier();

    camera313.estevreunlocliber();
    camera335.estevreunlocliber();

    //caminD.media();

    CaministLicenta licenta("John Doe", 2, 9.5, "Mecanica", "Advanced Algorithms", true, "Dr. Smith");
    licenta.prezinta_te();

    CaministMaster master("Alice Johnson", 2, 9.5, "Computer Science", "Machine Learning in Healthcare", 2, "Machine Learning");
    master.prezinta_te();

    CaministDoctorat doctorat("Ionescu Costin", 1, 9.5, "Biologie", "Machine Learning", true, "Dr. Paun");
    doctorat.prezinta_te();

    // Creăm un obiect de tip ClasaFunctieVirtuala și un pointer către Caminist care pointează către obiectul ClasaFunctieVirtuala
    Caminist* ptr_caminist = new ClasaFunctieVirtuala();

    // Apelăm funcția virtuală pură prin intermediul pointerului către Caminist
    ptr_caminist->functie_virtuala_pura();
    delete ptr_caminist;



    //Utilizam clasa derivata
    ClasaDerivata obj("John Doe", 2024, 9.5, "Informatica");
    Caminist* pointer_caminist = new ClasaDerivata("Alice Smith", 2023, 8.7, "Matematica");
    ptr_caminist->prezinta_te();
    obj.setPtrCaminist(new ClasaDerivata("Bob Johnson", 2022, 9.0, "Fizica"));
    obj.prezinta_te();
    delete ptr_caminist;

    //uitilizam alta clasa
    altaclasa student("John Doe", 2023, 9.5, "Informatica");
    // Apelăm metoda specifică clasei "altaclasa"
    student.functieTest();


    */


    std::cout<<"Afisari pentru tema 3:"<<std::endl;
    //TEMA 3

    //DESIGN PATTERN 1
    //Utilizarea design patternului Factory Method
    //utilizarea claselor CameraFactory si ConcreteCameraFactory
    std::cout<<"TESTARE DESIGN PATETRN Factory Method"<<std::endl;
    Caminist Caminist10("Popescu Mihai", 2, 9.10, "Matematica");
    Caminist Caminist11("Ionescu Elena", 2, 9.20, "Fizica");
    Caminist Caminist12("Georgescu Andrei", 2, 8.75, "Chimie");
    Caminist Caminist13("Dumitrescu Ana", 2, 8.80, "Biologie");

    ConcreteCameraFactory factory;
    camera cam1 = factory.createCamera(Caminist10, Caminist11, 2, 101, "Matematica, Fizica");
    camera cam2 = factory.createCamera(Caminist12, Caminist13, 2, 102, "Informatica, Chimie");
    //testarea claselor CameraFactory si ConcreteCameraFactory
    cam1.estevreunlocliber();
    Caminist cel_mai_bun1 = cam1.cinearemediamaimareincamera();
    std::cout << "Caministul cu media mai mare in camera 1: " << cel_mai_bun1.getNume() << "\n";

    cam2.estevreunlocliber();
    Caminist cel_mai_bun2 = cam2.cinearemediamaimareincamera();
    std::cout << "Caministul cu media mai mare in camera 2: " << cel_mai_bun2.getNume() << "\n";
    std::cout<<std::endl;
    //DESIGN PATTERN 2
    //utilizarea design patternului prototype
    std::cout<<"TESTARE DESIGN PATETRN Prototype"<<std::endl;
    Caminist* clonedCaminist1 = Caminist1.clone();
    Caminist* clonedCaminist2 = Caminist2.clone();

    std::cout << "Original: " << Caminist1 << "\n";
    std::cout << "Clone: " << *clonedCaminist1 << "\n";

    std::cout << "Original: " << Caminist2 << "\n";
    std::cout << "Clone: " << *clonedCaminist2 << "\n";

    delete clonedCaminist1;
    delete clonedCaminist2;
    std::cout<<std::endl;
    //DESIGN PATTERN 3
    //utilizarea design patternului Decorator
    std::cout<<"TESTARE DESIGN PATETRN Decorator"<<std::endl;
    Caminist CaministSPORTIV("Suhan Nicoleta", 1, 8.87, "Informatica");
    SportivCaminist sportivCaminist(Caminist1);
    sportivCaminist.prezinta_te();
    std::cout<<std::endl;


    //CLASA SABLON SI FUNCTIE SABLON
    //SCRISE IN FISIERELE GENERIC.H SI GENERIC.COM
    //TESTATE MAI JOS
    std::cout<<"AFISARI CLASA SI FUNCTIE SABLON"<<std::endl;
    Generic<Caminist> generic(Caminist1, Caminist2);
    generic.performComplexOperation();
    generic.performCustomOperation(printCaministDetails);
    return 0;

}
