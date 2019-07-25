---
title: '&lt;csetjmp&gt;'
ms.date: 11/04/2016
f1_keywords:
- <csetjmp>
helpviewer_keywords:
- csetjmp header
ms.assetid: 8f21fddd-5e9b-4219-a848-581cdd3569d9
ms.openlocfilehash: 8f3a1a622776d5dd2ef3d22aaa3436933c5a7137
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452388"
---
# <a name="ltcsetjmpgt"></a>&lt;csetjmp&gt;

Include l'intestazione della libreria C standard \<setjmp.h> e aggiunge i nomi associati allo spazio dei nomi `std`.

## <a name="syntax"></a>Sintassi

```cpp
#include <csetjmp>

using jmp_buf = see below;
```

## <a name="functions"></a>Funzioni

```cpp
[[noreturn]] void longjmp(jmp_buf env, int val);
```

## <a name="macros"></a>Macro

```cpp
#define setjmp(env)
```

## <a name="remarks"></a>Note

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
