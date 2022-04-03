using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections;

namespace PaintApplication
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void updateGrid()
        {

           
            bunifuDataGridView1.Rows.Clear();
            NodeS temp = Program.s.head;
            while (temp != null)
            {
                bunifuDataGridView1.Rows.Add(temp.operation);
                temp = temp.next;
            }
            count.Text = Program.s.count.ToString();
            
        }
        private void rect_Click(object sender, EventArgs e)
        {
            Program.s.push(rect.Text);
            updateGrid();
        }

        private void circle_Click(object sender, EventArgs e)
        {
            Program.s.push(circle.Text);
            updateGrid();
        }

        private void line_Click(object sender, EventArgs e)
        {
            Program.s.push(line.Text);
            updateGrid();
        }

        private void hello_Click(object sender, EventArgs e)
        {
            Program.s.push(hello.Text);
            updateGrid();
        }

        private void canvas_Click(object sender, EventArgs e)
        {
            Program.s.push(canvas.Text);
            updateGrid();
        }

        private void undo_Click(object sender, EventArgs e)
        {
            Program.s.pop();
            updateGrid();
        }
    }
}
