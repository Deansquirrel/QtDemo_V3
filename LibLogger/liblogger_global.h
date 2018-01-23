#ifndef LIBLOGGER_GLOBAL_H
#define LIBLOGGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBLOGGER_LIBRARY)
#  define LIBLOGGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBLOGGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBLOGGER_GLOBAL_H
