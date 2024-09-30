
public class Foititis {
    private String AM;
    private String onomatEpwnymo;
    private int etosEisagwgis;
    
    public Foititis(String AM){
        this.AM = AM;
    }
    

    public Foititis(String AM, int etosEisagwgis, String onomatEpwnymo) {
        this.AM = AM;
        this.onomatEpwnymo = onomatEpwnymo;
        this.etosEisagwgis = etosEisagwgis;
    }

    public String getAM() {
        return AM;
    }

    public String getOnomatEpwnymo() {
        return onomatEpwnymo;
    }

    public int getEtosEisagwgis() {
        return etosEisagwgis;
    }
}