# Robotter-og-Automatisering-logbog

Dag 1 - Tirsdag d. 22 Aug.

    Startede ud med introduktion til brug a Visual Studio Code(VSC) når det kommer til at programmere de Micro-Processore(MP) der blev givet i klassen. 
    I VSC bruges platformio, en IDE der giver adgang til den infrastruktur der ligger på MP'en, så dens Pins og Porte kan blive kaldt direkte i Koden. 
    Fik lavet et "MyFirstBlink" program, hvor det var muligt at få den indbyggede diode på MP'en til at blinke i det interval, der er skrevet i Koden.
    Fik en ny MP med to indbygget Dioder, hvor opgaven til næste gang, var at få dem til at blinke på skift og at læse op på C++ klasser.

Dag 2 - Fredag d. 25 Aug.

    Fik gennemgået opgaven fra Dag 1, hvor det var muligt at få begge Dioder til at blinke på skift og fik understreget at funktionen 'delay()' ikke skal bruges i fremtiden.
![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/de14a41b-4608-4867-aae2-3b4bdd9d82aa)
![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/d54939ce-005c-443e-8f60-e0a2e93bed2e)

    Fik en introduktion til et Trafiklys signal og de stadier det går igennem, som vi skal arbejde på til næste lektion, og forsøge at kode ind på vores MCU. 
![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/4cd46835-9cc6-47fd-b52a-2e8a2eb95633)
![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/249a679f-7db7-4af8-8c62-d2b67936e711)

Dag 3 - Tirsdag d. 29 Aug.

    Fik uddelt en Button, vi skulle kunne bruges til at registrere et Button-push, der kan registreres af MCU'en til forskellige funktioner.

https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/f39c9fa6-59bf-400c-a5b4-4bc93065ff34

    Arbejdede med intergration af en Buzzer på vores Breadboard, hvor vi fosøgte at få den til at spille forskellige noter i sekvens.

    
Dag 4 - Torsdag d. 31 Aug.

    Det lykkedes at lave en forbindelse mellem Buzzer og Button, der registrede hvert Button-Push og får Buzzer'en til at give en lyd.
    Det ønskede resultat, var at Buzzer'en skulle spille forskellige Melodier og skifte ved hvert Button-Push, men det lykkedes ikke.

https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/f693f2f5-ecbd-4036-8341-66f69abae2af

    Trafiklys projektet blev også afleveret og godkendt af Tobias, som et fungerende projekt der kunne afleveres.

https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/733c9a5d-9e1a-4228-8de5-80578667f9e2

Dag 5 - Tirsdag d. 4 Sep.

    Blev introduceret til princippet bag 3D modelering og printning, via et program Tobias lavede, der oversatte Java kode til 3D objekter.
    Det 3D blev så visualiseret med et andet program, OpenSCAD, hvorefter det teoretisk er klar til at blive 3D printet.
    Fik som "lektie" at tegne et objekt der skulle kunne 3D printes til næste gang, men blev ikke særlig vellykket. 
    ![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/bdcb9d4b-bd87-4927-8c78-1287b2455a34)

Dag 6 - Torsdag d. 7 Sep.

    Fik en gennemgang af Tobias, hvor han tegnede en holder til vores NodeMCU via Java CSG, der blev vist frem i OpenSCAD.
    Lykkedes at få printet den, dog med lidt forkerte mål.
![270022843-55a3eaf7-b70a-49ad-9797-17f82b06b596](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/7bfd83dc-723b-45b4-b6ec-f601c2169b64)

Dag 7 - Tirsdag d. 12 Sep.
    På Herlev Hospitalet, var ikke til stede.

Dag 8 - Fredag d. 15 Sep.

    Blev introduceret til 3D printning af et Clip-system, der kan bruges til at forbinde brikker af forskellige størrelse og funktioner.
    Dette skulle bruges af hele klassen, så vi sammen kunne 3D printe et tog og sæt skinner, den kunne køre på.

Dag 9 - Tirsdag d. 19 Sep.

    På Herlev Hospitalet, var ikke til stede.

Dag 10 - Fredag d. 22 Sep.

    Var hjemme og hvile efter Operationen.
    Gruppen blev enige om at 3D printe en bil, med 2 motore der skulle få hjulene til at køre.
    Forskellige ideer til bilen's funktioner og design blev tegnet, som en trinvis process.
![270024154-ec067bcf-3930-45b1-aea0-524224d7ddf7](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/a5b5da9e-213d-4fcd-b9dc-da8235e77e0a)

    Oprettet et Repository for koden til bilen:
https://github.com/AbdullahMarwan/CPH-Sem4-RobotterOgAutomatisering-Bil

Dag 11 - Tirsdag d. 26 Sep.

    Jeg var stadig hjemme.

    Resten af gruppen fik målt de komponenter der skulle være inde i bilen, for at bestemme mål på bilen's krop.
![image](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/895de068-24be-4e67-913b-ea88de781b9a)
    
    Jeg tilbød dog at begynde på at tegne hjulende, så jeg ikke sad og gjorde ingenting. 
    Sad med det resten af dagen, hvor det lykkedes mig at bruge Java CSG til at tegne 2 typer hjul, med Cylinder og Torus i CSG. 
![flat_wheel](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/ee52ded0-fedd-4f0f-a7b0-e941b591ae8e)
![torus_wheel](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/b6e13159-c9ba-4c5f-a71b-0170bf292358)

    Derefter eksperimenterede jeg med antalet af tværstiver, aksel hulet og andre mål.
![aksel_internal_test1](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/c873fb14-1ce8-46fb-9205-6b452eb8ce56)
![aksel_internal_test2](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/15810949-7f9f-4cfd-8d54-5e00b9a3a0ab)


Dag 12 - Fredag d. 29 Sep.

    Jeg var stadig hjemme, men fik rettet i min Java kode til hjulende og sendte den til gruppen, så de kunne se og gøre brug af den.
(make new, focused repository)

    Jeg fik også sæt Java SCG sat op med objekt-mål i toppen af koden, der direkte kunne ændre hjulets mål.
![wheel_measurements](https://github.com/Chriswihu/Robotter-og-Automatisering-logbog/assets/99390466/f65e7e06-3964-4c14-9ac8-d13e03433205)

    Det lykkedes gruppen at få begge motore til at "køre", så de var klar til at blive installeret i bil kroppen.
https://cdn.discordapp.com/attachments/1154696073630187582/1157241326031618139/20230929_110309.jpg?ex=653b7cf8&is=652907f8&hm=ef4959a3b356b3d1269ea6dfac85528039783c6fb4964a8bdad9d3ca8c4e5c35&

    Resten af gruppen havde dog besluttet sig for at bruge Fusion 360, istedet for Java CSG, som jeg begyndte at installere og læse op på.

Dag 13 - Tirsdag d. 3 Okt.

    Grundet en fejl kommunikation, endte Arsim med at være den eneste der mødst på, mens jeg var forsinket med en time+.
    Lykkedes mig at nå frem og få Fusion 360 op og køre, hvorefter jeg fik Nikolaj's model til generet og printet.
https://cdn.discordapp.com/attachments/1154696073630187582/1158685422541619230/image.png?ex=6540bde4&is=652e48e4&hm=c8fbe7b0281f7a208290c6385f8480e42ddd026bc848d791ecf0bf285f23d48a&
    
    Arsim og jeg fik diskuteret en ny krop til bilen, der bedre ville holde fast på motorende, MCU'en og Motor-control.

Dag 14 - Fredag d. 6 Okt.

    Jeg havde glemt en læge tid om morgenen, men det lykkedes mig at komme online så jeg kunne hjælpe med modelering af hjul i Fusion 360.
    Fik målt motorene igen, specifikt de Pins der stikker ud og skal forbinde til hjulende, så de ikke sad for løst eller for fast. 

Dag 15 - Tirsdag d. 10 Okt.
    

Dag 16 - Fredag d. 13 Okt.

