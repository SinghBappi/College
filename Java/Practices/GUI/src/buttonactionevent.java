import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

 class myframe extends JFrame implements ActionListener {
    Container c;
    JButton btn;

    myframe(){
    c=this.getContentPane();
    c.setLayout(null);
    btn = new JButton("My Button");
    btn.setBounds(100,100,100,50);
    btn.addActionListener(this);
        c.add(btn);
    }
    public void actionPerformed(ActionEvent e){
    c.setBackground(Color.YELLOW);
    }

}

public class buttonactionevent {
    public static void main(String[] args) {
//        System.out.println("Hello");
    myframe frame = new  myframe();
        frame.setTitle("Action Demo");
        frame.setBounds(100,100,700,500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);




    }
}
