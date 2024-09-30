
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
    
    
    public static void quickSort(Foititis[] list){
        QSort(list, 0, list.length - 1);
    }
    
    static void QSort(Foititis[] list , int first, int last){
        if (last > first) {
            int pivotIndex = partition(list, first, last);
            QSort(list, first, pivotIndex - 1);
            QSort(list, pivotIndex + 1, last);
        }
    }
    
    static int partition(Foititis[] list, int first, int last){
        Foititis pivot = list[first];
        int low = first;
        int high = last;
        while (high > low) {
            while (low <= high && list[low].getEtosEisagwgis() <= pivot.getEtosEisagwgis()){
                low++;
            }
            while (low <= high && list[high].getEtosEisagwgis() > pivot.getEtosEisagwgis()){
                high--;
            }
            if (high > low){
                Foititis temp = list[high];
                list[high] = list[low];
                list[low] = temp;
            }
        }
        while (high > first && list[high].getEtosEisagwgis() >= pivot.getEtosEisagwgis()) high--;
        if (pivot.getEtosEisagwgis() > list[high].getEtosEisagwgis()){
            list [first] = list [high]; 
            list [high] = pivot;
            return high;
        }
        else {
            return first;
        }
    }
    
    public static void mergeSort(Foititis[] A){
        if (A.length>1){
            Foititis[] firstHalf = new Foititis[A.length/2];
            System.arraycopy(A, 0, firstHalf, 0, A.length/2);
            mergeSort(firstHalf);
            int secondHalfLength = A.length - A.length/2;
            Foititis [] secondHalf = new Foititis[secondHalfLength];
            System.arraycopy(A, A.length/2, secondHalf, 0, secondHalfLength);
            mergeSort(secondHalf);
            merge(firstHalf, secondHalf, A);
        }
    }
    
    public static void merge(Foititis [] list1, Foititis[] list2, Foititis[] temp){
        int current1 = 0;
        int current2 = 0;
        int current3 = 0;
        while (current1 < list1.length && current2 < list2.length){
            if (list1[current1].getOnomatEpwnymo().compareTo(list2[current2].getOnomatEpwnymo())<0)
                temp[current3++] = list1[current1++];
            else
                temp[current3++] = list2[current2++];
        }
        while (current1 < list1.length)
            temp[current3++] = list1[current1++];
        while ( current2 < list2.length )
            temp[current3++] = list2[current2++];
    }

}

