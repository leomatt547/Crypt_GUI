using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class VerticalTabControl : TabControl {
    public:
    VerticalTabControl() {
        this.Alignment = TabAlignment.Right;
        this.DrawMode = TabDrawMode.OwnerDrawFixed;
        this.SizeMode = TabSizeMode.Fixed;
        this.ItemSize = new Size(this.Font.Height * 3 / 2, 75);
    }
    Override Font Font{
        get { return base.Font;  }
        set {
            base.Font = value;
            this.ItemSize = new Size(value.Height * 3 / 2, base.ItemSize.Height);
        }
    }
        protected override void OnDrawItem(DrawItemEventArgs e) {
            using (var _textBrush = new SolidBrush(this.ForeColor)) {
                TabPage _tabPage = this.TabPages[e.Index];
                Rectangle _tabBounds = this.GetTabRect(e.Index);

                if (e.State != DrawItemState.Selected) e.DrawBackground();
                else {
                    using (var brush = new System.Drawing.Drawing2D.LinearGradientBrush(e.Bounds, Color.White, Color.LightGray, 90f)) {
                        e.Graphics.FillRectangle(brush, e.Bounds);
                    }
                }

                StringFormat _stringFlags = new StringFormat();
                _stringFlags.Alignment = StringAlignment.Center;
                _stringFlags.LineAlignment = StringAlignment.Center;
                e.Graphics.DrawString(_tabPage.Text, this.Font, _textBrush, _tabBounds, new StringFormat(_stringFlags));
            }
        }
}