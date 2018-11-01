---
title: noinline
ms.date: 11/04/2016
f1_keywords:
- noinline_cpp
helpviewer_keywords:
- noinline __declspec keyword
- __declspec keyword [C++], noinline
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
ms.openlocfilehash: 3a8dce21aa707a1a52c647c9efee5ab806511ca8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454561"
---
# <a name="noinline"></a>noinline

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

**noinline** indica al compilatore di non incorporare mai una funzione membro specifica (funzione in una classe).

Può essere preferibile non incorporare una funzione se è ridotta e non fondamentale per le prestazioni del codice. Ovvero se la funzione è di piccole dimensioni e probabilmente non viene chiamata spesso, ad esempio una funzione che gestisce una condizione di errore.

Tenere presente che se una funzione è contrassegnata **noinline**, la funzione chiamante sarà più piccoli e, pertanto, se stesso un candidato per l'incorporamento del compilatore.

```cpp
class X {
   __declspec(noinline) int mbrfunc() {
      return 0;
   }   // will not inline
};
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \__forceinline](inline-functions-cpp.md)

