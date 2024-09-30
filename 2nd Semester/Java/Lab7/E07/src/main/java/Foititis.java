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
    private String hmeromGennisis;
    private String stathero;
    private String email;
            
    // Δήλωση δημιουργών
    public Foititis(String AM) {
        this.AM = AM;
    }
     
    public Foititis(String onomatEpwnymo, int etosEisagwgis, String kinito,String stathero, String mo) {        
        //AA++;
        //DecimalFormat mf = new DecimalFormat("0000");
        //String tempAA = mf.format(AA);
        //this.AM= (etosEisagwgis + tempAA);
        this.onomatEpwnymo = onomatEpwnymo; 
        this.etosEisagwgis = etosEisagwgis;
        this.kinito = kinito;
        this.stathero = stathero;
        this.mo = mo;
    }

    public void setHmeromGennisis(String hmeromGennisis) {
        this.hmeromGennisis = hmeromGennisis;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }
    

    public String getHmeromGennisis() {
        return hmeromGennisis;
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

    public String getStathero() {
        return stathero;
    }
    
    public String toString() {
        return (etosEisagwgis + " " + onomatEpwnymo + " " + kinito + " " + mo + " " + stathero + " "+ email + " "+ hmeromGennisis);       
    }

}
