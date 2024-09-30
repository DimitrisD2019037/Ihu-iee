
public class Main {
    
    public static void main(String args[]) {
        Foititis f1 = new Foititis("20177", 2020 , "Polikarpou Klewn");
        Foititis f2= new Foititis("20001", 2016 , "Polikarpou Klewn" ) ;
        Foititis f3= new Foititis("20002", 2018, "Georgiou Aristea");
        Foititis f4=new Foititis("20005",0 , "Petridou Danai");
        
        
        System.out.println(f1.getAM() + " " + f1.getEtosEisagwgis() + " " + f1.getOnomatEpwnymo());
        System.out.println(f2.getAM() + " " + f2.getEtosEisagwgis() + " " + f2.getOnomatEpwnymo());
        System.out.println(f3.getAM() + " " + f3.getEtosEisagwgis() + " " + f3.getOnomatEpwnymo());
        System.out.println(f4.getAM() + " " + f4.getOnomatEpwnymo());
    }
    
}
