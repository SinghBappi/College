import javax.swing.*;
import javax.swing.plaf.basic.BasicArrowButton;
import java.awt.*;

public class btn {
    public static void main(String[] args) {
        JFrame frame = new JFrame("MyButton");
        Container screen =frame.getContentPane();
        screen.setLayout(null);

        frame.setBounds(100,100,500,500);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        screen.setBackground(Color.CYAN);

        JButton btn = new JButton("Click Me");
        btn.setBounds(150,90,100,40);
        btn.setFont(new Font(Font.SERIF,Font.PLAIN,13));
        screen.add(btn);


//        Cursor cur = new Cursor(Cursor.HAND_CURSOR);
//        Cursor cur = new Cursor(Cursor.MOVE_CURSOR);
        Cursor cur = new Cursor(Cursor.WAIT_CURSOR);
//        screen.add(cur); will not work
        btn.setCursor(cur);
//        btn.setEnabled(false); it will diable the button
        /*
        *
        ImageIcon btn = new ImageIcon("");
        * JButton  k = new JButton(btn);
        * k.setBounds(100,100,btn.getIconWidth(),Icon.getIconWidth())
        *
        *
        * */


        screen.setVisible(true);
        frame.setVisible(true);
    }
}
