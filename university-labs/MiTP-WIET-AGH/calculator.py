import math
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLineEdit, QMessageBox

class NegativeValue(Exception):
    pass

class App(QWidget):
    def __init__(self):
        super().__init__()
        self.title = 'Calculator'
        self.left = 100 # odległośc od lewej krawędzi ekranu w pixelach
        self.top = 100 # odległośc od górnej krawędzi ekranu w pixelach
        self.width = 400 # szerokośc okna
        self.height = 250 # wysokość okna
        self.equation_formula = ""
        self.result_formula = ""

        self.setWindowTitle(self.title)
        self.setGeometry(self.left, self.top, self.width, self.height)

        # define tetboxes
        self.equation = QLineEdit(self)
        self.result = QLineEdit(self)

        # resize and move tetboxes
        self.equation.move(25,20)
        self.equation.resize(350,30)
        self.result.move(25,60)
        self.result.resize(350,30)

        # define buttons
        self.zero = QPushButton("0", self)
        self.one = QPushButton("1", self)
        self.two = QPushButton("2", self)
        self.three = QPushButton("3", self)
        self.four = QPushButton("4", self)
        self.five = QPushButton("5", self)
        self.six = QPushButton("6", self)
        self.seven = QPushButton("7", self)
        self.eight = QPushButton("8", self)
        self.nine = QPushButton("9", self)
        self.plus = QPushButton("+", self)
        self.minus = QPushButton("-", self)
        self.divide = QPushButton("/", self)
        self.multiply = QPushButton("*", self)
        self.equal = QPushButton("=", self)
        self.sqrt = QPushButton('\u221A',self)

        # adding tool description
        self.sqrt.setToolTip('Square root of the entire expression.')

        # move buttons
        self.zero.move(115,200)
        self.one.move(25,110)
        self.two.move(115,110)
        self.three.move(205,110)
        self.four.move(25,140)
        self.five.move(115,140)
        self.six.move(205,140)
        self.seven.move(25,170)
        self.eight.move(115,170)
        self.nine.move(205,170)
        self.plus.move(295,110)
        self.minus.move(295,140)
        self.divide.move(295,200)
        self.multiply.move(295,170)
        self.equal.move(25,200)
        self.sqrt.move(205,200)

        # connecting functions to buttons
        self.zero.clicked.connect(self.on_click_zero)
        self.one.clicked.connect(self.on_click_one)
        self.two.clicked.connect(self.on_click_two)
        self.three.clicked.connect(self.on_click_three)
        self.four.clicked.connect(self.on_click_four)
        self.five.clicked.connect(self.on_click_five)
        self.six.clicked.connect(self.on_click_six)
        self.seven.clicked.connect(self.on_click_seven)
        self.eight.clicked.connect(self.on_click_eight)
        self.nine.clicked.connect(self.on_click_nine)
        self.plus.clicked.connect(self.on_click_plus)
        self.minus.clicked.connect(self.on_click_minus)
        self.multiply.clicked.connect(self.on_click_multiply)
        self.divide.clicked.connect(self.on_click_divide)
        self.equal.clicked.connect(self.on_click_equal)
        self.sqrt.clicked.connect(self.on_click_sqrt)

        self.show()

    # Error dialog box config
    def showDialogBox(self, e):
        msg = QMessageBox()
        msg.setIcon(QMessageBox.Information)
        if isinstance(e, ZeroDivisionError):
            msg.setText("There is a value which is divided by zero in provided expression.")
        elif isinstance(e, NegativeValue):
            msg.setText("Square root of negative value is not allowed.")
        msg.setWindowTitle(f"{e}")
        msg.setStandardButtons(QMessageBox.Ok)
        msg.exec()

    # define on_click functions for each button
    def on_click_zero(self):
        #print("0")
        self.equation_formula += "0"
        self.equation.setText(self.equation_formula)

    def on_click_one(self):
        #print("1")
        self.equation_formula += "1"
        self.equation.setText(self.equation_formula)

    def on_click_two(self):
        #print("2")
        self.equation_formula += "2"
        self.equation.setText(self.equation_formula)

    def on_click_three(self):
        #print("3")
        self.equation_formula += "3"
        self.equation.setText(self.equation_formula)

    def on_click_four(self):
        #print("4")
        self.equation_formula += "4"
        self.equation.setText(self.equation_formula)

    def on_click_five(self):
        #print("5")
        self.equation_formula += "5"
        self.equation.setText(self.equation_formula)

    def on_click_six(self):
        #print("6")
        self.equation_formula += "6"
        self.equation.setText(self.equation_formula)

    def on_click_seven(self,):
        #print("7")
        self.equation_formula += "7"
        self.equation.setText(self.equation_formula)

    def on_click_eight(self):
        #print("8")
        self.equation_formula += "8"
        self.equation.setText(self.equation_formula)

    def on_click_nine(self):
        #print("9")
        self.equation_formula += "9"
        self.equation.setText(self.equation_formula)

    def on_click_minus(self):
        #print("-")
        self.equation_formula += "-"
        self.equation.setText(self.equation_formula)

    def on_click_plus(self):
        #print("+")
        self.equation_formula += "+"
        self.equation.setText(self.equation_formula)

    def on_click_divide(self):
        #print("/")
        self.equation_formula += "/"
        self.equation.setText(self.equation_formula)

    def on_click_multiply(self):
        #print("*")
        self.equation_formula += "*"
        self.equation.setText(self.equation_formula)

    def on_click_equal(self):
        #print("=")
        try:
            self.result_formula = eval(self.equation_formula, {"sqrt" : math.sqrt})
        except ZeroDivisionError as e:
            self.showDialogBox(e)
            self.equation.clear()
            self.equation_formula = ""
            return

        self.result.setText(str(self.result_formula))
        self.equation.clear()
        self.equation_formula = ""

    def on_click_sqrt(self):
        #print("sqrt")
        try:
            value_to_root = eval(self.equation_formula)
            if value_to_root < 0:
                raise NegativeValue
        except NegativeValue as e:
            self.showDialogBox(e)
            return

        self.equation_formula = f"sqrt({self.equation_formula})"
        self.equation.setText(self.equation_formula)


app = QApplication(sys.argv)
ex = App()
app.exec_()