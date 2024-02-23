//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int [] array = {1, 2, 3, 4, 5};
        int x = 3;

        boolean contemX = contemElemento(array, x);

        System.out.printf("O array contem o elemento: " + x + "? " + contemX);


    }
    public static boolean contemElemento(int[] array, int x){
        for(int elemento : array){
            if(elemento == x){
                return true;
            }
        }
        return false;
    }
}