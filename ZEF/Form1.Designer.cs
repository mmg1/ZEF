namespace ZEF
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn_GetProcID = new System.Windows.Forms.Button();
            this.txt_ProcName = new System.Windows.Forms.TextBox();
            this.txt_ModName = new System.Windows.Forms.TextBox();
            this.btn_GetMod = new System.Windows.Forms.Button();
            this.lbl_Bytes = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.txt_Addr = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.txt_ProcID = new System.Windows.Forms.TextBox();
            this.txt_ModAddr = new System.Windows.Forms.TextBox();
            this.txt_Size = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btn_GetProcID
            // 
            this.btn_GetProcID.Location = new System.Drawing.Point(12, 55);
            this.btn_GetProcID.Name = "btn_GetProcID";
            this.btn_GetProcID.Size = new System.Drawing.Size(117, 23);
            this.btn_GetProcID.TabIndex = 0;
            this.btn_GetProcID.Text = "Get Process ID";
            this.btn_GetProcID.UseVisualStyleBackColor = true;
            this.btn_GetProcID.Click += new System.EventHandler(this.btnClick_GetProcID);
            // 
            // txt_ProcName
            // 
            this.txt_ProcName.Location = new System.Drawing.Point(12, 29);
            this.txt_ProcName.Name = "txt_ProcName";
            this.txt_ProcName.Size = new System.Drawing.Size(427, 20);
            this.txt_ProcName.TabIndex = 2;
            this.txt_ProcName.Text = "Testing";
            // 
            // txt_ModName
            // 
            this.txt_ModName.Location = new System.Drawing.Point(12, 97);
            this.txt_ModName.Name = "txt_ModName";
            this.txt_ModName.Size = new System.Drawing.Size(427, 20);
            this.txt_ModName.TabIndex = 3;
            this.txt_ModName.Text = "Testing.exe";
            // 
            // btn_GetMod
            // 
            this.btn_GetMod.Location = new System.Drawing.Point(12, 123);
            this.btn_GetMod.Name = "btn_GetMod";
            this.btn_GetMod.Size = new System.Drawing.Size(117, 23);
            this.btn_GetMod.TabIndex = 4;
            this.btn_GetMod.Text = "Get Module";
            this.btn_GetMod.UseVisualStyleBackColor = true;
            this.btn_GetMod.Click += new System.EventHandler(this.btnClick_GetMod);
            // 
            // lbl_Bytes
            // 
            this.lbl_Bytes.AutoSize = true;
            this.lbl_Bytes.Location = new System.Drawing.Point(12, 246);
            this.lbl_Bytes.MaximumSize = new System.Drawing.Size(1000, 0);
            this.lbl_Bytes.Name = "lbl_Bytes";
            this.lbl_Bytes.Padding = new System.Windows.Forms.Padding(10);
            this.lbl_Bytes.Size = new System.Drawing.Size(91, 33);
            this.lbl_Bytes.TabIndex = 6;
            this.lbl_Bytes.Text = "<BytesRead>";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(233, 13);
            this.label1.TabIndex = 7;
            this.label1.Text = "Process Name (without extension such as .exe):";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 81);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(76, 13);
            this.label2.TabIndex = 8;
            this.label2.Text = "Module Name:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 149);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(118, 13);
            this.label3.TabIndex = 12;
            this.label3.Text = "Address (prefix with 0x):";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 191);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(117, 23);
            this.button1.TabIndex = 10;
            this.button1.Text = "Read";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.btnClick_ReadAddr);
            // 
            // txt_Addr
            // 
            this.txt_Addr.Location = new System.Drawing.Point(12, 165);
            this.txt_Addr.Name = "txt_Addr";
            this.txt_Addr.Size = new System.Drawing.Size(320, 20);
            this.txt_Addr.TabIndex = 9;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(135, 191);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(117, 23);
            this.button2.TabIndex = 13;
            this.button2.Text = "Write";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // txt_ProcID
            // 
            this.txt_ProcID.BackColor = System.Drawing.SystemColors.Control;
            this.txt_ProcID.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.txt_ProcID.Location = new System.Drawing.Point(445, 32);
            this.txt_ProcID.Name = "txt_ProcID";
            this.txt_ProcID.ReadOnly = true;
            this.txt_ProcID.Size = new System.Drawing.Size(100, 13);
            this.txt_ProcID.TabIndex = 14;
            // 
            // txt_ModAddr
            // 
            this.txt_ModAddr.BackColor = System.Drawing.SystemColors.Control;
            this.txt_ModAddr.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.txt_ModAddr.Location = new System.Drawing.Point(445, 100);
            this.txt_ModAddr.Name = "txt_ModAddr";
            this.txt_ModAddr.ReadOnly = true;
            this.txt_ModAddr.Size = new System.Drawing.Size(100, 13);
            this.txt_ModAddr.TabIndex = 15;
            // 
            // txt_Size
            // 
            this.txt_Size.Location = new System.Drawing.Point(338, 165);
            this.txt_Size.Name = "txt_Size";
            this.txt_Size.Size = new System.Drawing.Size(101, 20);
            this.txt_Size.TabIndex = 16;
            this.txt_Size.Text = "0";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(335, 149);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(69, 13);
            this.label5.TabIndex = 17;
            this.label5.Text = "Size of R/W:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txt_Size);
            this.Controls.Add(this.txt_ModAddr);
            this.Controls.Add(this.txt_ProcID);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.txt_Addr);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.lbl_Bytes);
            this.Controls.Add(this.btn_GetMod);
            this.Controls.Add(this.txt_ModName);
            this.Controls.Add(this.txt_ProcName);
            this.Controls.Add(this.btn_GetProcID);
            this.Name = "Form1";
            this.Text = "ZEF";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_GetProcID;
        private System.Windows.Forms.TextBox txt_ProcName;
        private System.Windows.Forms.TextBox txt_ModName;
        private System.Windows.Forms.Button btn_GetMod;
        private System.Windows.Forms.Label lbl_Bytes;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox txt_Addr;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.TextBox txt_ProcID;
        private System.Windows.Forms.TextBox txt_ModAddr;
        private System.Windows.Forms.TextBox txt_Size;
        private System.Windows.Forms.Label label5;
    }
}

