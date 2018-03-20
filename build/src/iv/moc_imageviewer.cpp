/****************************************************************************
** Meta object code from reading C++ file 'imageviewer.h'
**
** Created: Tue Feb 28 15:27:41 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/iv/imageviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      20,   12,   12,   12, 0x08,
      29,   12,   12,   12, 0x08,
      46,   12,   12,   12, 0x08,
      57,   12,   12,   12, 0x08,
      66,   12,   12,   12, 0x08,
      81,   12,   12,   12, 0x08,
      99,   12,   12,   12, 0x08,
     107,   12,   12,   12, 0x08,
     128,   12,   12,   12, 0x08,
     137,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,
     160,   12,   12,   12, 0x08,
     194,  179,   12,   12, 0x08,
     229,  222,   12,   12, 0x28,
     252,   12,   12,   12, 0x28,
     271,   12,   12,   12, 0x08,
     290,   12,   12,   12, 0x08,
     298,   12,   12,   12, 0x08,
     310,   12,   12,   12, 0x08,
     322,   12,   12,   12, 0x08,
     336,   12,   12,   12, 0x08,
     364,   12,   12,   12, 0x08,
     391,   12,   12,   12, 0x08,
     418,   12,   12,   12, 0x08,
     444,   12,   12,   12, 0x08,
     457,   12,   12,   12, 0x08,
     469,   12,   12,   12, 0x08,
     487,   12,   12,   12, 0x08,
     504,   12,   12,   12, 0x08,
     523,   12,   12,   12, 0x08,
     541,   12,   12,   12, 0x08,
     560,   12,   12,   12, 0x08,
     583,   12,   12,   12, 0x08,
     601,   12,   12,   12, 0x08,
     619,   12,   12,   12, 0x08,
     635,   12,   12,   12, 0x08,
     650,   12,   12,   12, 0x08,
     665,   12,   12,   12, 0x08,
     684,   12,   12,   12, 0x08,
     703,   12,   12,   12, 0x08,
     722,   12,   12,   12, 0x08,
     735,   12,   12,   12, 0x08,
     748,   12,   12,   12, 0x08,
     766,   12,   12,   12, 0x08,
     783,   12,   12,   12, 0x08,
     797,   12,   12,   12, 0x08,
     809,   12,   12,   12, 0x08,
     821,   12,   12,   12, 0x08,
     843,  835,   12,   12, 0x08,
     869,   12,   12,   12, 0x08,
     883,   12,   12,   12, 0x08,
     900,   12,   12,   12, 0x08,
     922,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageViewer[] = {
    "ImageViewer\0\0open()\0reload()\0"
    "openRecentFile()\0closeImg()\0saveAs()\0"
    "saveWindowAs()\0saveSelectionAs()\0"
    "print()\0deleteCurrentImage()\0zoomIn()\0"
    "zoomOut()\0normalSize()\0fitImageToWindow()\0"
    "zoomok,minsize\0fitWindowToImage(bool,bool)\0"
    "zoomok\0fitWindowToImage(bool)\0"
    "fitWindowToImage()\0fullScreenToggle()\0"
    "about()\0prevImage()\0nextImage()\0"
    "toggleImage()\0exposureMinusOneTenthStop()\0"
    "exposureMinusOneHalfStop()\0"
    "exposurePlusOneTenthStop()\0"
    "exposurePlusOneHalfStop()\0gammaMinus()\0"
    "gammaPlus()\0viewChannelFull()\0"
    "viewChannelRed()\0viewChannelGreen()\0"
    "viewChannelBlue()\0viewChannelAlpha()\0"
    "viewChannelLuminance()\0viewChannelPrev()\0"
    "viewChannelNext()\0viewColorRGBA()\0"
    "viewColorRGB()\0viewColor1Ch()\0"
    "viewColorHeatmap()\0viewSubimagePrev()\0"
    "viewSubimageNext()\0sortByName()\0"
    "sortByPath()\0sortByImageDate()\0"
    "sortByFileDate()\0sortReverse()\0"
    "slideShow()\0slideLoop()\0slideNoLoop()\0"
    "seconds\0setSlideShowDuration(int)\0"
    "slideImages()\0showInfoWindow()\0"
    "showPixelviewWindow()\0editPreferences()\0"
};

void ImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageViewer *_t = static_cast<ImageViewer *>(_o);
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->reload(); break;
        case 2: _t->openRecentFile(); break;
        case 3: _t->closeImg(); break;
        case 4: _t->saveAs(); break;
        case 5: _t->saveWindowAs(); break;
        case 6: _t->saveSelectionAs(); break;
        case 7: _t->print(); break;
        case 8: _t->deleteCurrentImage(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->normalSize(); break;
        case 12: _t->fitImageToWindow(); break;
        case 13: _t->fitWindowToImage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->fitWindowToImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->fitWindowToImage(); break;
        case 16: _t->fullScreenToggle(); break;
        case 17: _t->about(); break;
        case 18: _t->prevImage(); break;
        case 19: _t->nextImage(); break;
        case 20: _t->toggleImage(); break;
        case 21: _t->exposureMinusOneTenthStop(); break;
        case 22: _t->exposureMinusOneHalfStop(); break;
        case 23: _t->exposurePlusOneTenthStop(); break;
        case 24: _t->exposurePlusOneHalfStop(); break;
        case 25: _t->gammaMinus(); break;
        case 26: _t->gammaPlus(); break;
        case 27: _t->viewChannelFull(); break;
        case 28: _t->viewChannelRed(); break;
        case 29: _t->viewChannelGreen(); break;
        case 30: _t->viewChannelBlue(); break;
        case 31: _t->viewChannelAlpha(); break;
        case 32: _t->viewChannelLuminance(); break;
        case 33: _t->viewChannelPrev(); break;
        case 34: _t->viewChannelNext(); break;
        case 35: _t->viewColorRGBA(); break;
        case 36: _t->viewColorRGB(); break;
        case 37: _t->viewColor1Ch(); break;
        case 38: _t->viewColorHeatmap(); break;
        case 39: _t->viewSubimagePrev(); break;
        case 40: _t->viewSubimageNext(); break;
        case 41: _t->sortByName(); break;
        case 42: _t->sortByPath(); break;
        case 43: _t->sortByImageDate(); break;
        case 44: _t->sortByFileDate(); break;
        case 45: _t->sortReverse(); break;
        case 46: _t->slideShow(); break;
        case 47: _t->slideLoop(); break;
        case 48: _t->slideNoLoop(); break;
        case 49: _t->setSlideShowDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->slideImages(); break;
        case 51: _t->showInfoWindow(); break;
        case 52: _t->showPixelviewWindow(); break;
        case 53: _t->editPreferences(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ImageViewer,
      qt_meta_data_ImageViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewer))
        return static_cast<void*>(const_cast< ImageViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}
static const uint qt_meta_data_IvInfoWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_IvInfoWindow[] = {
    "IvInfoWindow\0"
};

void IvInfoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IvInfoWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IvInfoWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IvInfoWindow,
      qt_meta_data_IvInfoWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IvInfoWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IvInfoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IvInfoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IvInfoWindow))
        return static_cast<void*>(const_cast< IvInfoWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int IvInfoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IvPreferenceWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_IvPreferenceWindow[] = {
    "IvPreferenceWindow\0"
};

void IvPreferenceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IvPreferenceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IvPreferenceWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IvPreferenceWindow,
      qt_meta_data_IvPreferenceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IvPreferenceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IvPreferenceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IvPreferenceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IvPreferenceWindow))
        return static_cast<void*>(const_cast< IvPreferenceWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int IvPreferenceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
