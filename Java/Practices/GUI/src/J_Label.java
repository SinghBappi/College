import javax.swing.*;
import java.awt.*;
public class J_Label {
    public static void main(String[] args) {
//        System.out.println("Hello");
    JFrame k = new JFrame();
    k.setTitle("Hello, World!");
    k.setBounds(120,120,605,500);
    k.setDefaultCloseOperation(k.EXIT_ON_CLOSE);
    k.setVisible(true);
    Container c = k.getContentPane();
        c.setLayout(null);
        JLabel label = new JLabel("Aap Ka Naam");
//        JLabel l = new JLabel();
//        c.add(l);
//        l.setBounds(150,57,140,70);

//        l.setText("Password");
        label.setBounds(100,50,100,30);
        c.add(label);

        ImageIcon icon = new ImageIcon("D:/JAVA/personal practices/Ashwin/GUI/src/google_co.png");
//        JLabel kkk = new JLabel(icon);
//        kkk.setBounds(100,50,icon.getIconWidth(),icon.getIconHeight());
//        c.add(kkk);
        JLabel kkk = new JLabel("icon",icon,JLabel.LEFT);
        kkk.setBounds(0,100,500,100);
        c.add(kkk);






    }


}
