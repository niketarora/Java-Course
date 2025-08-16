public class prime {

    public static void main(String[] args) {
        for(int i=1; i<100; i++){
            int flag = 0;
            for(int j=2; j<i; j++){
                if(i%j == 0){
                    flag++;
                }
            }
            if(flag == 0){
                System.out.print(i + " ");
            }
        }
    }
}