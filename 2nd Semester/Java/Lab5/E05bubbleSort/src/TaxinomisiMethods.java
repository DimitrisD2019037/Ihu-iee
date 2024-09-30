
public class TaxinomisiMethods {
    
    public static void bubbleSort(Foititis[] pin) {  
        int n = pin.length;  
        Foititis temp = null;  
        for(int i=0; i < n; i++){  
            for(int j=1; j < (n-i); j++){  
                if ((pin[j-1].getOnomatEpwnymo().compareTo(pin[j].getOnomatEpwnymo())) > 0) {  
                    temp = pin[j-1];  
                    pin[j-1] = pin[j];  
                    pin[j] = temp;  
                }  
            }  
        }  
    }
    public static void insertionSort(Foititis[] pin){
        int n = pin.length;
        Foititis temp= null;
        for(int i = 0; i<n;i++){
            for (int j=i+1;j<n;j++){
                if(pin[i].getKinito().compareTo(pin[j].getKinito())>0){
                    temp = pin[i];
                    pin[i] = pin[j];
                    pin[j] = temp;
                }
            }
        }
    }
    public static void selectionSort(Foititis[] pin){
        int n = pin.length;
        Foititis temp = null;
        for (int i = 0; i<n-1;i++){
            int index = i;
            for (int j = i+1;j<n;j++){
                if (pin[j].getMo().compareTo(pin[index].getMo())>0)
                    index = j;
            }
        temp = pin[index];
        pin[index] = pin[i];
        pin[i] = temp ;
        }
    }
    
    
    
    

}

