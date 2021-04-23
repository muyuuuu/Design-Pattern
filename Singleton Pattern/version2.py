import sys, time
from PyQt5.QtWidgets import (QMainWindow, QWidget, QApplication, QPushButton,
                             QMdiSubWindow, QMdiArea, QLineEdit, QLabel,
                             QHBoxLayout, QGridLayout)


class mainwindow(QMainWindow):
    def __init__(self):
        super(mainwindow, self).__init__()

        layout = QHBoxLayout()
        w = QWidget()
        w.setLayout(layout)
        self.setCentralWidget(w)

        self.new_subwindow_btn = QPushButton("新建")
        layout.addWidget(self.new_subwindow_btn)
        self.new_subwindow_btn.clicked.connect(self.count)

        self.mdi = QMdiArea()

        layout.addWidget(self.mdi)

    def count(self):
        subwindow_widget = QWidget()
        subwindow_layout = QGridLayout()
        self.sub = QMdiSubWindow()

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

        subwindow_widget.setLayout(subwindow_layout)
        self.sub.setWidget(subwindow_widget)

        self.sub.setWindowTitle("Sub Window")
        self.mdi.addSubWindow(self.sub)
        self.sub.show()

    def re_open(self):
        self.new_subwindow_btn.setEnabled(True)


if __name__ == '__main__':
    app = QApplication([])
    m = mainwindow()
    m.show()
    sys.exit(app.exec())