---
title: noinline
ms.date: 11/04/2016
f1_keywords:
- noinline_cpp
helpviewer_keywords:
- noinline __declspec keyword
- __declspec keyword [C++], noinline
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
ms.openlocfilehash: bedf17072c06ec893b9cbd83b46403dcd3bc1560
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87186685"
---
# <a name="noinline"></a>noinline

**Specifico di Microsoft**

**`__declspec(noinline)`** indica al compilatore di non incorporare mai una particolare funzione membro (funzione in una classe).

Può essere preferibile non incorporare una funzione se è ridotta e non fondamentale per le prestazioni del codice. Ovvero se la funzione è di piccole dimensioni e probabilmente non viene chiamata spesso, ad esempio una funzione che gestisce una condizione di errore.

Tenere presente che se una funzione è contrassegnata **`noinline`** , la funzione chiamante sarà più piccola e, di conseguenza, è un candidato per l'incorporamento del compilatore.

```cpp
class X {
   __declspec(noinline) int mbrfunc() {
      return 0;
   }   // will not inline
};
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \_ _forceinline](inline-functions-cpp.md)
