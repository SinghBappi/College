import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class myclass extends JFrame implements ActionListener {
    Container c ;
    JButton b1 = new JButton("Red");
    JButton b2 = new JButton("Yellow");
    JButton b3 = new JButton("Green");
    myclass(){
//        JFrame frame = new JFrame("My 1st Frame");
        c = this.getContentPane();
        c.setLayout(null);
        b1.setBounds(100,100,100,50);
        b2.setBounds(250,100,100,50);
        b3.setBounds(400,100,100,50);
        c.add(b1);
        c.add(b2);
        c.add(b3);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);



    }
public void actionPerformed(ActionEvent e){
        if(e.getSource()==b1){
            c.setBackground(Color.RED);
            this.setTitle("Red Color !");

        }
    if(e.getSource()==b2){
        c.setBackground(Color.YELLOW);
        this.setTitle("Yellow Color !");

    }
    if(e.getSource()==b3){
        c.setBackground(Color.GREEN);
        this.setTitle("Green Color !");
    }
    this.setVisible(true);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

}

}
public class btn_event_01 {





    public static void main(String[] args) {
//        new myclass();
    myclass f = new myclass();
    f.setTitle("Action Part 2");
    f.setVisible(true);
    f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
    f.setBounds(100,100,700,500);

    }
}
