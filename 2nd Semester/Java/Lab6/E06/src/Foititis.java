import java.util.Date;
import java.text.DecimalFormat;

public class Foititis {
    // Δήλωση πεδίων
    private static int AA=0;
    private String AM;
    private String onomatEpwnymo;
    private int etosEisagwgis;
    private String kinito;
    private String mo;
    private Date hmeromGennisis;
            
    // Δήλωση δημιουργών
    public Foititis(String AM) {
        this.AM = AM;
    }
     
    public Foititis(String onomatEpwnymo, int etosEisagwgis, String kinito, String mo) {        
        //AA++;
        //DecimalFormat mf = new DecimalFormat("0000");
        //String tempAA = mf.format(AA);
        //this.AM= (etosEisagwgis + tempAA);
        this.onomatEpwnymo = onomatEpwnymo; 
        this.etosEisagwgis = etosEisagwgis;
        this.kinito = kinito;
        this.mo = mo;
    }

    // Δήλωση μεθόδων
    public String getAM() {
        return AM;
    }

    public String getOnomatEpwnymo() {
        return onomatEpwnymo;
    }

    public int getEtosEisagwgis() {
        return etosEisagwgis;
    }

    public String getKinito(){
        return kinito;
    }

    public String getMo() {
        return mo;
    }
    
    
    public String toString() {
        return (etosEisagwgis + " " + onomatEpwnymo + " " + kinito + " " + mo);       
    }

    public void setHmeromGennisis(Date hmeromGennisis) {
        this.hmeromGennisis = hmeromGennisis;
    }
    
    
    
    
    

    
}
