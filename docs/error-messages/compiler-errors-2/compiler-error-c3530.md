---
title: Errore del compilatore C3530
ms.date: 11/04/2016
f1_keywords:
- C3530
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
ms.openlocfilehash: 90f6000c7d4c4bfa0d610bd5942df0b958e47c60
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643626"
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

[Auto (parola chiave)](../../cpp/auto-keyword.md)