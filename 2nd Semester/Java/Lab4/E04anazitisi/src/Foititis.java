import java.text.DecimalFormat;
import java.util.Date;

public class Foititis {
    // Δήλωση πεδίων
    private static int AA=0;
    private String AM;
    private String onomatEpwnymo;
    private int etosEisagwgis;
    private Date hmeromGennisis;
        
    // Δήλωση δημιουργών
    public Foititis(String AM) {
        AA++;
        DecimalFormat mf = new DecimalFormat("0000");
        String tempAA = mf.format(AA);
        this.AM= (etosEisagwgis + tempAA);
    }
     
    public Foititis(int etosEisagwgis, String onomatEpwnymo) {         
        DecimalFormat mf = new DecimalFormat("0000");
        String tempAA = mf.format(AA);
        this.AM= (etosEisagwgis + tempAA);
        this.onomatEpwnymo = onomatEpwnymo; 
        this.etosEisagwgis = etosEisagwgis;
    }

    // Δήλωση μεθόδων
    public String dwseAM() {
        return AM;
    }

    public String getOnomatEpwnymo() {
        return onomatEpwnymo;
    }

    public int getEtosEisagwgis() {
        return etosEisagwgis;
    }

    public String toString() {
        return (AM + " " +
                onomatEpwnymo + " ");       
    }

    public void setHmeromGennisis(Date hmeromGennisis) {
        this.hmeromGennisis = hmeromGennisis;
    }

    public Date getHmeromGennisis() {
        return hmeromGennisis;
    }
    
    
    
    
    

    
}
