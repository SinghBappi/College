import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


class Myframe extends JFrame implements ActionListener{
    Container c;
    JLabel l1,l2;
    JTextField user;
    JPasswordField pass;
    JButton btn;

Myframe(){
//    JFrame frame = new JFrame("Login Title");
    setTitle("Login Title");
    setBounds(100,100,700,500);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setVisible(true);
    c=getContentPane();
    c.setLayout(null);
    l1 = new JLabel("Username:");
    l2 = new JLabel("Password:");
    l1.setBounds(10,50,100,20);
    l2.setBounds(10,100,100,20);
    c.add(l1);c.add(l2);
    user = new JTextField();
    user.setBounds(120,50,120,20);
    c.add(user);
    pass = new JPasswordField();
    pass.setBounds(120,100,120,20);
    c.add(pass);
    btn = new JButton("Login");
    btn.setBounds(100,150,70,30);
    c.add(btn);

    btn.addActionListener(this);
    setVisible(true);


}
public  void actionPerformed(ActionEvent e){
    System.out.println("Username:"+ user.getText());
    System.out.println("Password:"+ pass.getText());

}
}
public class Login_Page {
    public static void main(String[] args) {
//        System.out.println("Hello Bhai");
        Myframe frame = new Myframe();



    }
}
