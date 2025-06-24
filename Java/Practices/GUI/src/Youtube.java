import javax.swing.*;
import java.awt.*;

public class Youtube {
    public static void main(String[] args) {
//        System.out.println("Hello");
        JFrame frame = new JFrame();
        frame.setBounds(100,100,700,500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setForeground(Color.green);
        frame.setTitle("First");
//        ImageIcon icon = new ImageIcon();
        ImageIcon icon = new ImageIcon("D:/JAVA/personal practices/Ashwin/GUI/src/google_co.png");
        frame.setIconImage(icon.getImage());
        Container c = frame.getContentPane();
        c.setBackground(Color.YELLOW);
        frame.setResizable(false);

    }
}
