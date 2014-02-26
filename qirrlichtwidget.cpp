#include "qirrlichtwidget.h"
#include <irrlicht.h>
#include "QTimer"
QIrrlichtWidget::QIrrlichtWidget(QWidget *parent) :
    QWidget(parent)
{
    irr::SIrrlichtCreationParameters createParams;
    createParams.WindowId = ( void * )this->winId();

    m_device = irr::createDeviceEx( createParams );
    m_scene = m_device->getSceneManager();
    m_driver = m_device->getVideoDriver();
    irr::scene::IAnimatedMesh* mesh = m_scene->getMesh("../irrlicht-zdroje/media/sydney.md2");
    irr::scene::IAnimatedMeshSceneNode* node = m_scene->addAnimatedMeshSceneNode( mesh );

    if (node)
    {
        node->setMaterialFlag(irr::video::EMF_LIGHTING, false);
        node->setFrameLoop(0, 0);
        node->setMaterialTexture( 0, m_driver->getTexture("../irrlicht-zdroje/media/sydney.bmp") );
    }
    m_scene->addCameraSceneNode(0, irr::core::vector3df(0,30,-40), irr::core::vector3df(0,5,0));


}

QIrrlichtWidget::~QIrrlichtWidget()
{
    m_device->drop();
}

void QIrrlichtWidget::paintEvent(QPaintEvent *event)
{

    if (m_device && m_device->run())
    {
         if (isVisible() && isEnabled())
         {
            m_driver->beginScene(false, true, irr::video::SColor(255, 0, 0, 0));
            m_scene->drawAll();
            m_driver->endScene();
         }
         else
         {
            m_device->yield();
         }
    }
   update();
}
