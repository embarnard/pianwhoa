/****************************************************************************
** Meta object code from reading C++ file 'twinkletutor.h'
**
** Created: Thu Apr 18 15:42:46 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "twinkletutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twinkletutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_twinkleTutor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      25,   13,   13,   13, 0x08,
      41,   36,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      80,   13,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     104,   13,   13,   13, 0x08,
     116,   13,   13,   13, 0x08,
     128,   13,   13,   13, 0x08,
     145,  140,   13,   13, 0x08,
     163,   13,   13,   13, 0x08,
     170,   13,   13,   13, 0x08,
     177,   13,   13,   13, 0x08,
     184,   13,   13,   13, 0x08,
     191,   13,   13,   13, 0x08,
     198,   13,   13,   13, 0x08,
     205,   13,   13,   13, 0x08,
     212,   13,   13,   13, 0x08,
     219,   13,   13,   13, 0x08,
     226,   13,   13,   13, 0x08,
     234,   13,   13,   13, 0x08,
     242,   13,   13,   13, 0x08,
     250,   13,   13,   13, 0x08,
     258,   13,   13,   13, 0x08,
     266,   13,   13,   13, 0x08,
     274,   13,   13,   13, 0x08,
     282,   13,   13,   13, 0x08,
     290,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_twinkleTutor[] = {
    "twinkleTutor\0\0songPlay()\0songStop()\0"
    "song\0playTutorSong(QList<char>)\0"
    "noteCDown()\0noteGDown()\0noteADown()\0"
    "noteFDown()\0noteEDown()\0noteDDown()\0"
    "note\0playNoteGUI(char)\0key1()\0key2()\0"
    "key3()\0key4()\0key5()\0key6()\0key7()\0"
    "key8()\0key9()\0key10()\0key11()\0key12()\0"
    "key13()\0key14()\0key15()\0key16()\0key17()\0"
    "key18()\0"
};

const QMetaObject twinkleTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_twinkleTutor,
      qt_meta_data_twinkleTutor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &twinkleTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *twinkleTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *twinkleTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_twinkleTutor))
        return static_cast<void*>(const_cast< twinkleTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int twinkleTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: songPlay(); break;
        case 1: songStop(); break;
        case 2: playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: noteCDown(); break;
        case 4: noteGDown(); break;
        case 5: noteADown(); break;
        case 6: noteFDown(); break;
        case 7: noteEDown(); break;
        case 8: noteDDown(); break;
        case 9: playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 10: key1(); break;
        case 11: key2(); break;
        case 12: key3(); break;
        case 13: key4(); break;
        case 14: key5(); break;
        case 15: key6(); break;
        case 16: key7(); break;
        case 17: key8(); break;
        case 18: key9(); break;
        case 19: key10(); break;
        case 20: key11(); break;
        case 21: key12(); break;
        case 22: key13(); break;
        case 23: key14(); break;
        case 24: key15(); break;
        case 25: key16(); break;
        case 26: key17(); break;
        case 27: key18(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
