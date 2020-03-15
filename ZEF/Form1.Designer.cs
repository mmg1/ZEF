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
            this.lbl_ProcID = new System.Windows.Forms.Label();
            this.txt_ProcName = new System.Windows.Forms.TextBox();
            this.txt_ModName = new System.Windows.Forms.TextBox();
            this.btn_GetMod = new System.Windows.Forms.Button();
            this.lbl_ModID = new System.Windows.Forms.Label();
            this.lbl_Bytes = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btn_GetProcID
            // 
            this.btn_GetProcID.Location = new System.Drawing.Point(12, 38);
            this.btn_GetProcID.Name = "btn_GetProcID";
            this.btn_GetProcID.Size = new System.Drawing.Size(117, 23);
            this.btn_GetProcID.TabIndex = 0;
            this.btn_GetProcID.Text = "Get Process ID";
            this.btn_GetProcID.UseVisualStyleBackColor = true;
            this.btn_GetProcID.Click += new System.EventHandler(this.btnClick_GetProcID);
            // 
            // lbl_ProcID
            // 
            this.lbl_ProcID.Location = new System.Drawing.Point(648, 12);
            this.lbl_ProcID.Name = "lbl_ProcID";
            this.lbl_ProcID.Size = new System.Drawing.Size(74, 20);
            this.lbl_ProcID.TabIndex = 1;
            this.lbl_ProcID.Text = "<ProcID>";
            this.lbl_ProcID.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // txt_ProcName
            // 
            this.txt_ProcName.Location = new System.Drawing.Point(12, 12);
            this.txt_ProcName.Name = "txt_ProcName";
            this.txt_ProcName.Size = new System.Drawing.Size(630, 20);
            this.txt_ProcName.TabIndex = 2;
            this.txt_ProcName.Text = "Testing";
            // 
            // txt_ModName
            // 
            this.txt_ModName.Location = new System.Drawing.Point(12, 67);
            this.txt_ModName.Name = "txt_ModName";
            this.txt_ModName.Size = new System.Drawing.Size(630, 20);
            this.txt_ModName.TabIndex = 3;
            this.txt_ModName.Text = "Testing";
            // 
            // btn_GetMod
            // 
            this.btn_GetMod.Location = new System.Drawing.Point(12, 93);
            this.btn_GetMod.Name = "btn_GetMod";
            this.btn_GetMod.Size = new System.Drawing.Size(117, 23);
            this.btn_GetMod.TabIndex = 4;
            this.btn_GetMod.Text = "Get Module";
            this.btn_GetMod.UseVisualStyleBackColor = true;
            this.btn_GetMod.Click += new System.EventHandler(this.btnClick_GetMod);
            // 
            // lbl_ModID
            // 
            this.lbl_ModID.Location = new System.Drawing.Point(648, 67);
            this.lbl_ModID.Name = "lbl_ModID";
            this.lbl_ModID.Size = new System.Drawing.Size(74, 20);
            this.lbl_ModID.TabIndex = 5;
            this.lbl_ModID.Text = "<ModID>";
            this.lbl_ModID.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // lbl_Bytes
            // 
            this.lbl_Bytes.Location = new System.Drawing.Point(12, 123);
            this.lbl_Bytes.Name = "lbl_Bytes";
            this.lbl_Bytes.Padding = new System.Windows.Forms.Padding(10);
            this.lbl_Bytes.Size = new System.Drawing.Size(776, 318);
            this.lbl_Bytes.TabIndex = 6;
            this.lbl_Bytes.Text = "0x0000";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lbl_Bytes);
            this.Controls.Add(this.lbl_ModID);
            this.Controls.Add(this.btn_GetMod);
            this.Controls.Add(this.txt_ModName);
            this.Controls.Add(this.txt_ProcName);
            this.Controls.Add(this.lbl_ProcID);
            this.Controls.Add(this.btn_GetProcID);
            this.Name = "Form1";
            this.Text = "ZEF";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_GetProcID;
        private System.Windows.Forms.Label lbl_ProcID;
        private System.Windows.Forms.TextBox txt_ProcName;
        private System.Windows.Forms.TextBox txt_ModName;
        private System.Windows.Forms.Button btn_GetMod;
        private System.Windows.Forms.Label lbl_ModID;
        private System.Windows.Forms.Label lbl_Bytes;
    }
}

