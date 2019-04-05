---
title: Errore del compilatore C3530
ms.date: 11/04/2016
f1_keywords:
- C3530
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
ms.openlocfilehash: dd4368faaf323a75116128ec3a47666260436fce
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029119"
---
# <a name="compiler-error-c3530"></a>Errore del compilatore C3530

'auto' non può essere combinato con qualsiasi altro identificatore di tipo

Un identificatore di tipo viene usato con il `auto` (parola chiave).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non usare un identificatore di tipo in una dichiarazione di variabile che utilizza il `auto` (parola chiave).

## <a name="example"></a>Esempio

Nell'esempio seguente genera C3530 perché variabile `x` viene dichiarato con entrambe le `auto` parola chiave e il tipo `int`, e poiché nell'esempio viene compilato con **/Zc: Auto**.

```
// C3530.cpp
// Compile with /Zc:auto
int main()
{
   auto int x;   // C3530
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-keyword.md)