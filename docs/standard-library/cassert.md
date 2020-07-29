---
title: '&lt;cassert&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cassert>
helpviewer_keywords:
- cassert header
ms.assetid: 6ead15a3-ac45-4075-be8e-350bca995c26
ms.openlocfilehash: b28f4554610d37b881494748f75499f46cd9e8d9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230233"
---
# <a name="ltcassertgt"></a>&lt;cassert&gt;

Include l'intestazione della libreria standard C \<assert.h> e aggiunge i nomi associati allo `std` spazio dei nomi. L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria standard C vengano dichiarati nello `std` spazio dei nomi.

> [!NOTE]
> \<assert.h>non definisce la **`static_assert`** macro.

## <a name="syntax"></a>Sintassi

```cpp
#include <cassert>
```

## <a name="macros"></a>Macro

```cpp
#define assert(E)
```

### <a name="remarks"></a>Osservazioni

`assert(E)`è costante, se NDEBUG è definito in cui `assert` è definito o ridefinito l'ultima volta oppure *e* convertito in bool restituisce **`true`** .

## <a name="see-also"></a>Vedere anche

[Macro ASSERT, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)\
[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
