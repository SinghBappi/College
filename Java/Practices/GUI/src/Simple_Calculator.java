import javax.swing.*;
import java.awt.event.*;
import java.awt.*;


class My_frame extends JFrame implements ActionListener{
    Container c;
    JLabel l1,l2;
    JTextField t1,t2;
    My_frame(){
        setTitle("Simple Calculator");
//        setBackground(Color.ORANGE);
        setBounds(100,110,700,500);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
        c=getContentPane();
        c.setLayout(null);


    }
    public void actionPerformed(ActionEvent e){


    }
}


public class Simple_Calculator {
    public static void main(String[] args) {
    My_frame f = new My_frame();
    }
}
