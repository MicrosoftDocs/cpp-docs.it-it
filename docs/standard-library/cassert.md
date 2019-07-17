---
title: '&lt;cassert&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cassert>
helpviewer_keywords:
- cassert header
ms.assetid: 6ead15a3-ac45-4075-be8e-350bca995c26
ms.openlocfilehash: 14dda03e835ec411013b2d827bd1ccaa77f8982e
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245023"
---
# <a name="ltcassertgt"></a>&lt;cassert&gt;

Include l'intestazione della libreria C Standard \<Assert. h > e aggiunge i nomi associati al `std` dello spazio dei nomi. Includendo questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C Standard vengano dichiarati nel `std` dello spazio dei nomi.

> [!NOTE]
> \<Assert. h > non definisce il `static_assert` macro.

## <a name="syntax"></a>Sintassi

```cpp
#include <cassert>
```

## <a name="macros"></a>Macro

```cpp
#define assert(E)
```

### <a name="remarks"></a>Note

`assert(E)` è solo costanti, se non è definito NDEBUG in cui `assert` ultimo è definito o ridefinito, o *elettronica* convertito in bool restituisce **true**.

## <a name="see-also"></a>Vedere anche

[assert Macro, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
