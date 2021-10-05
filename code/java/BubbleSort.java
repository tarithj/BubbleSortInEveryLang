import java.util.Arrays;

class BubbleSort {

  static void sort(int array[]) {
    int size = array.length;
    
    for (int i = 0; i < (size-1); i++) {
    
      boolean swapped = false;
      
      for (int j = 0; j < (size-i-1); j++) {
          
        if (array[j] > array[j + 1]) {
            
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
          
          swapped = true;
        }
      }
      
      if (!swapped)
        break;
    }
  }

  public static void main(String args[]) {
      
    int[] data = {21, 50, 12, 31, 61, 40, 30};

    System.out.println(Arrays.toString(data));
    
    BubbleSort.sort(data);
    
    System.out.println(Arrays.toString(data));
  }
}
