---
title: noinline
ms.date: 11/04/2016
f1_keywords:
- noinline_cpp
helpviewer_keywords:
- noinline __declspec keyword
- __declspec keyword [C++], noinline
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
ms.openlocfilehash: e155726ad1f2f3f6f0501d3aebf7fa14e620d6bd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62377400"
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
