#ifndef QIRRLICHTWIDGET_H
#define QIRRLICHTWIDGET_H

#include <QWidget>
#include <irrlicht.h>

class QIrrlichtWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QIrrlichtWidget ( QWidget *parent = 0 );
    ~QIrrlichtWidget();
    
signals:
    
public slots:

protected:
    virtual void paintEvent ( QPaintEvent * event );

private:
    irr::IrrlichtDevice *m_device;
    irr::video::IVideoDriver* m_driver;
    irr::scene::ISceneManager* m_scene;

};

#endif // QIRRLICHTWIDGET_H
