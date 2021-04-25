import sys, time
from PyQt5.QtWidgets import (QMainWindow, QWidget, QApplication, QPushButton,
                             QMdiSubWindow, QMdiArea, QLineEdit, QLabel,
                             QHBoxLayout, QGridLayout)


# 弹出窗口类
class PopWindow(QWidget):
    def __init__(self) -> None:
        super(PopWindow, self).__init__()

        self.subwindow_widget = QWidget()
        subwindow_layout = QGridLayout()

        radis_label = QLabel("半径")
        self.radis_line = QLineEdit()
        subwindow_layout.addWidget(radis_label, 0, 0)
        subwindow_layout.addWidget(self.radis_line, 0, 1)

        angle_label = QLabel("角度")
        self.angle_line = QLineEdit()
        subwindow_layout.addWidget(angle_label, 1, 0)
        subwindow_layout.addWidget(self.angle_line, 1, 1)

        dis_label = QLabel("螺距")
        self.dis_line = QLineEdit()
        subwindow_layout.addWidget(dis_label, 2, 0)
        subwindow_layout.addWidget(self.dis_line, 2, 1)

        # confirm_btn = QPushButton("确定")
        # subwindow_layout.addWidget(confirm_btn, 3, 0, 1, 2)

        self.subwindow_widget.setLayout(subwindow_layout)

    def get_window(self):
        return self.subwindow_widget

    def get_angle(self):
        return self.angle_line.text()

    def get_radis(self):
        return self.radis_line.text()

    def get_dis(self):
        return self.dis_line.text()


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

        # 读取子窗口数据
        self.read_content_btn = QPushButton("读取")
        layout.addWidget(self.read_content_btn)
        self.read_content_btn.clicked.connect(self.get_content)

        # 创建多文档区域
        self.mdi = QMdiArea()
        layout.addWidget(self.mdi)

        # 要被创建的子窗口
        self.w = QWidget()

    def count(self):
        # 使用 mdi 类来管理，判断当前窗口是否包含对象
        # 如果不包含，创建。包含，不创建。
        if self.mdi.currentSubWindow() == None:
            sub = QMdiSubWindow()
            # 每次 sub 页面关闭，都会销毁包含进来的对象
            # 所以将包含的 半径、角度 等对象封装为一个类，或每次都新建
            self.w = PopWindow()
            sub.setWidget(self.w.get_window())
            sub.setWindowTitle("弹出窗口")
            # 如果不包含，弹出对话框可以浮动于任何位置，否则只能位于 mdi 区域内
            self.mdi.addSubWindow(sub)
            sub.show()

    def get_content(self):
        if self.mdi.currentSubWindow() != None:
            angle, radis, dis = self.w.get_angle(), self.w.get_radis(
            ), self.w.get_dis()
            print(angle, radis, dis)


if __name__ == '__main__':
    app = QApplication([])
    m = mainwindow()
    m.show()
    sys.exit(app.exec())
