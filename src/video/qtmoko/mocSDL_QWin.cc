/****************************************************************************
** Meta object code from reading C++ file 'SDL_QWin.h'
**
** Created: Fri Dec 7 10:46:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SDL_QWin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SDL_QWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SDL_QWin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      29,    9,    9,    9, 0x0a,
      46,    9,    9,    9, 0x0a,
      61,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SDL_QWin[] = {
    "SDL_QWin\0\0showOnFullScreen()\0"
    "toggleKeyboard()\0enableRedraw()\0"
    "disableRedraw()\0"
};

void SDL_QWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SDL_QWin *_t = static_cast<SDL_QWin *>(_o);
        switch (_id) {
        case 0: _t->showOnFullScreen(); break;
        case 1: _t->toggleKeyboard(); break;
        case 2: _t->enableRedraw(); break;
        case 3: _t->disableRedraw(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SDL_QWin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SDL_QWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SDL_QWin,
      qt_meta_data_SDL_QWin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SDL_QWin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SDL_QWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SDL_QWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SDL_QWin))
        return static_cast<void*>(const_cast< SDL_QWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SDL_QWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
