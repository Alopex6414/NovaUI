#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import sys
from PyQt6.QtWidgets import QApplication, QWidget, QLabel, QLineEdit, QVBoxLayout, QPushButton, QHBoxLayout
from PyQt6 import QtCore


class LoginWindow(QWidget):
    def __init__(self):
        super().__init__()
        # window settings
        self.setWindowTitle("Login")
        self.setGeometry(QtCore.QRect(300, 300, 300, 150))
        # create toolbox
        self.usernameLabel = QLabel("User Name:")
        self.usernameLineEdit = QLineEdit()
        self.passwordLabel = QLabel("Password:")
        self.passwordLineEdit = QLineEdit()
        self.loginButton = QPushButton("Login")
        self.exitButton = QPushButton("Exit")
        layoutButton = QHBoxLayout()
        layoutButton.addWidget(self.loginButton)
        layoutButton.addWidget(self.exitButton)
        # layout management
        layout = QVBoxLayout()
        layout.addWidget(self.usernameLabel)
        layout.addWidget(self.usernameLineEdit)
        layout.addWidget(self.passwordLabel)
        layout.addWidget(self.passwordLineEdit)
        layout.addLayout(layoutButton)
        self.setLayout(layout)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = LoginWindow()
    window.show()
    sys.exit(app.exec())