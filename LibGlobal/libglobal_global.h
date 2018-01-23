#ifndef LIBGLOBAL_GLOBAL_H
#define LIBGLOBAL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBGLOBAL_LIBRARY)
#  define LIBGLOBALSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBGLOBALSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBGLOBAL_GLOBAL_H