#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import sys
from PyQt6.QtWidgets import QApplication, QWidget, QLabel, QLineEdit, QVBoxLayout, QPushButton, QHBoxLayout, QCommandLinkButton
from PyQt6 import QtCore


class LoginWindow(QWidget):
    def __init__(self):
        super().__init__()
        # window settings
        self.setWindowTitle("Login")
        self.setGeometry(QtCore.QRect(300, 300, 300, 150))
        # create toolbox
        self.username_label = QLabel("User Name:")
        self.username_edit = QLineEdit()
        self.password_label = QLabel("Password:")
        self.password_edit = QLineEdit()
        self.login_button = QPushButton("Login")
        self.exit_button = QPushButton("Exit")
        self.create_account_button = QCommandLinkButton("Create Account")
        layout_button = QHBoxLayout()
        layout_button.addWidget(self.login_button)
        layout_button.addWidget(self.exit_button)
        # layout management
        layout = QVBoxLayout()
        layout.addWidget(self.username_label)
        layout.addWidget(self.username_edit)
        layout.addWidget(self.password_label)
        layout.addWidget(self.password_edit)
        layout.addLayout(layout_button)
        layout.addWidget(self.create_account_button)
        self.setLayout(layout)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = LoginWindow()
    window.show()
    sys.exit(app.exec())