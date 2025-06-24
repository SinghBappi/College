import java.awt.*;
import javax.swing.*;

public class Password {
    public static void main(String[] args) {
        JFrame f = new JFrame("Password Login Page");
        Container c = f.getContentPane();
        f.setBounds(100,100,500,500);
        c.setBackground(Color.pink);
        JPasswordField pass = new JPasswordField("123");
        pass.setBounds(100,50,120,30);
        pass.setFont(new Font("Arial",Font.ITALIC,19));
        pass.setEchoChar('!');
        pass.setEchoChar((char)0);
        c.add(pass);






        f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
        c.setLayout(null);
        f.setVisible(true);
        c.setVisible(true);
    }
}
