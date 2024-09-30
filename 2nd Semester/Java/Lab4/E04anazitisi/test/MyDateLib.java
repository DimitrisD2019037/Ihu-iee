
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;


public class MyDateLib {
    private static String dateToStr(Date hmeromGennisis) {
        DateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        String str = df.format(hmeromGennisis);
        return str;
    }
    
}
