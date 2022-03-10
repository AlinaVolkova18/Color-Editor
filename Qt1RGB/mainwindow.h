#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include "QSlider"
#include "QLabel"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color NOTIFY ColorChanging)//цвет меняется когда получен сигнал об изменении цвета

public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QColor color() const
    {
        return m_color;
    }
signals:
    void ColorChanging(QColor arg);
public slots:
    void MainColorChanging(); //слот будет вызываться когда будут изменяться цвета rgb

private:
    Ui::MainWindow *ui;
    QColor m_color;//содержит текущий цвет
    QSlider* RSlider;
    QSlider* GSlider;
    QSlider* BSlider;
    QLabel* label_4;

};
#endif // MAINWINDOW_H
