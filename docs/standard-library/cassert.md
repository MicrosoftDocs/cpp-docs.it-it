---
title: '&lt;cassert&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cassert>
helpviewer_keywords:
- cassert header
ms.assetid: 6ead15a3-ac45-4075-be8e-350bca995c26
ms.openlocfilehash: 58ebd91fb4fa32cf31d2c49429d0445b92fe0c82
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449913"
---
# <a name="ltcassertgt"></a>&lt;cassert&gt;

Include l'intestazione \<della libreria standard C Assert. h > e aggiunge i nomi associati `std` allo spazio dei nomi. L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria `std` standard C vengano dichiarati nello spazio dei nomi.

> [!NOTE]
> \<Assert. h > non definisce la `static_assert` macro.

## <a name="syntax"></a>Sintassi

```cpp
#include <cassert>
```

## <a name="macros"></a>Macro

```cpp
#define assert(E)
```

### <a name="remarks"></a>Note

`assert(E)`è costante, se NDEBUG è definito in cui `assert` l'ultima definizione o ridefinizione di è o se *e* viene convertito in bool restituisce **true**.

## <a name="see-also"></a>Vedere anche

[Macro assert, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)\
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
