/****************************************************************************
** Meta object code from reading C++ file 'rowtutor.h'
**
** Created: Thu Apr 18 15:42:48 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rowtutor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rowtutor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rowTutor[] = {

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
      10,    9,    9,    9, 0x08,
      21,    9,    9,    9, 0x08,
      37,   32,    9,    9, 0x08,
      69,   64,    9,    9, 0x08,
      87,    9,    9,    9, 0x08,
      99,    9,    9,    9, 0x08,
     111,    9,    9,    9, 0x08,
     123,    9,    9,    9, 0x08,
     135,    9,    9,    9, 0x08,
     147,    9,    9,    9, 0x08,
     161,    9,    9,    9, 0x08,
     168,    9,    9,    9, 0x08,
     175,    9,    9,    9, 0x08,
     182,    9,    9,    9, 0x08,
     189,    9,    9,    9, 0x08,
     196,    9,    9,    9, 0x08,
     203,    9,    9,    9, 0x08,
     210,    9,    9,    9, 0x08,
     217,    9,    9,    9, 0x08,
     224,    9,    9,    9, 0x08,
     232,    9,    9,    9, 0x08,
     240,    9,    9,    9, 0x08,
     248,    9,    9,    9, 0x08,
     256,    9,    9,    9, 0x08,
     264,    9,    9,    9, 0x08,
     272,    9,    9,    9, 0x08,
     280,    9,    9,    9, 0x08,
     288,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rowTutor[] = {
    "rowTutor\0\0playSong()\0stopSong()\0song\0"
    "playTutorSong(QList<char>)\0note\0"
    "playNoteGUI(char)\0noteCDown()\0noteDDown()\0"
    "noteEDown()\0noteFDown()\0noteGDown()\0"
    "noteHiCDown()\0key1()\0key2()\0key3()\0"
    "key4()\0key5()\0key6()\0key7()\0key8()\0"
    "key9()\0key10()\0key11()\0key12()\0key13()\0"
    "key14()\0key15()\0key16()\0key17()\0key18()\0"
};

const QMetaObject rowTutor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rowTutor,
      qt_meta_data_rowTutor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rowTutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rowTutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rowTutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rowTutor))
        return static_cast<void*>(const_cast< rowTutor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rowTutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: playSong(); break;
        case 1: stopSong(); break;
        case 2: playTutorSong((*reinterpret_cast< QList<char>(*)>(_a[1]))); break;
        case 3: playNoteGUI((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: noteCDown(); break;
        case 5: noteDDown(); break;
        case 6: noteEDown(); break;
        case 7: noteFDown(); break;
        case 8: noteGDown(); break;
        case 9: noteHiCDown(); break;
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
