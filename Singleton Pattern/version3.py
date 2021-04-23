import sys, time
from PyQt5.QtWidgets import (QMainWindow, QWidget, QApplication, QPushButton,
                             QMdiSubWindow, QMdiArea, QLineEdit, QLabel,
                             QHBoxLayout, QGridLayout)


class mainwindow(QMainWindow):
    def __init__(self):
        super(mainwindow, self).__init__()

        # 主界面的布局
        layout = QHBoxLayout()
        w = QWidget()
        w.setLayout(layout)
        self.setCentralWidget(w)

        # 显示弹出的子窗口
        self.new_subwindow_btn = QPushButton("新建")
        layout.addWidget(self.new_subwindow_btn)
        self.new_subwindow_btn.clicked.connect(self.count)

        # 创建多文档区域
        self.mdi = QMdiArea()
        layout.addWidget(self.mdi)

    def count(self):
        # 只能创建一个
        if self.mdi.currentSubWindow() == None:
            sub = QMdiSubWindow()
            # 每次 sub 页面关闭，都会销毁包含的对象
            # 所以将包含的 半径、角度 等对象封装为一个类，每次都新建
            subwindow_widget = QWidget()
            subwindow_layout = QGridLayout()

            radis_label = QLabel("半径")
            radis_line = QLineEdit()
            subwindow_layout.addWidget(radis_label, 0, 0)
            subwindow_layout.addWidget(radis_line, 0, 1)

            angle_label = QLabel("角度")
            angle_line = QLineEdit()
            subwindow_layout.addWidget(angle_label, 1, 0)
            subwindow_layout.addWidget(angle_line, 1, 1)

            radis_label = QLabel("螺距")
            radis_line = QLineEdit()
            subwindow_layout.addWidget(radis_label, 2, 0)
            subwindow_layout.addWidget(radis_line, 2, 1)

            confirm_btn = QPushButton("确定")
            subwindow_layout.addWidget(confirm_btn, 3, 0, 1, 2)

            subwindow_widget.setLayout(subwindow_layout)

            sub.setWidget(subwindow_widget)
            sub.setWindowTitle("弹出窗口")
            # 如果不包含，弹出对话框可以位于任何位置，否则只能位于 mdi 区域内
            self.mdi.addSubWindow(sub)
            sub.show()


if __name__ == '__main__':
    app = QApplication([])
    m = mainwindow()
    m.show()
    sys.exit(app.exec())