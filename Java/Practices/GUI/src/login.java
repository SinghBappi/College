import javax.swing.*;
import java.awt.*;


public class login {
    public static void main(String[] args) {
//        System.out.println("Bappi");
        JFrame main = new JFrame("Main Screen");
        main.setBounds(100,100,500,500);

        main.setDefaultCloseOperation(main.EXIT_ON_CLOSE);
        Container screen = main.getContentPane();

        screen.setBackground(Color.ORANGE);

        screen.setVisible(true);
        screen.setLayout(null);

        Font font = new Font("Arial",Font.BOLD,22);
        JTextField t1 = new JTextField("");
        t1.setFont(font);
        t1.setForeground(Color.green);
        t1.setBackground(Color.blue);
        t1.setEditable(false);
        t1.setBounds(80,50,140,30);
        screen.add(t1);



        main.setVisible(true);
    }
}
