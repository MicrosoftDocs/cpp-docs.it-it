---
title: '&lt;csignal&gt;'
ms.date: 11/04/2016
f1_keywords:
- <csignal>
helpviewer_keywords:
- csignal header
ms.assetid: d18bcf82-a89a-476c-a6bf-726af956f7c0
ms.openlocfilehash: 2e82877a54c433b9db638b908be290535b1cc857
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452324"
---
# <a name="ltcsignalgt"></a>&lt;csignal&gt;

Include l'intestazione \<della libreria standard C Signal. h > e aggiunge i nomi associati `std` allo spazio dei nomi. L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.


## <a name="syntax"></a>Sintassi

```cpp
#include <csignal>
```

## <a name="namespace-and-macros"></a>Spazio dei nomi e macro

```cpp
namespace std {
    using sig_atomic_t = see below;

    extern using signal-handler = void(int);
}

#define SIG_DFL
#define SIG_ERR
#define SIG_IGN
#define SIGABRT
#define SIGFPE
#define SIGILL
#define SIGINT
#define SIGSEGV
#define SIGTERM
```

## <a name="functions"></a>Funzioni

```cpp
signal-handler* signal(int sig, signal-handler* func);
int raise(int sig);
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
