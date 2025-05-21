#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import sys

from PyQt6.QtWidgets import QApplication, QMainWindow, QMdiSubWindow


class LoginWindow(QMdiSubWindow):
    def __init__(self):
        super().__init__()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = LoginWindow()
    window.show()
    sys.exit(app.exec())