#include <QQuickImageProvider>
#include "imageprovider.h"

ImageProvider::ImageProvider(QQmlImageProviderBase::ImageType type, QQmlImageProviderBase::Flags flags) :
    QQuickImageProvider(type, flags)
{

}

ImageProvider::~ImageProvider() {

}

QPixmap ImageProvider::requestPixmap(const QString &id, QSize *size, const QSize &requestedSize)
{
    QString strFileName = ":/" + id;
    QPixmap image(strFileName);
    QPixmap result;

    if (requestedSize.isValid()) {
        result = image.scaled(requestedSize, Qt::KeepAspectRatio);
    } else {
        result = image;
    }

    *size = image.size();
    return result;
}
