#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import sys
from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton
from PyQt6 import QtCore

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Nova UI")
        self.setGeometry(300, 300, 250, 150)
        # create a button
        self.button =QPushButton("Click", self)
        self.button.setGeometry(QtCore.QRect(200, 200, 200, 200))


if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())