---
title: Errore del compilatore C3530
ms.date: 11/04/2016
f1_keywords:
- C3530
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
ms.openlocfilehash: 152157824cb270f32b1233f39225abab7741eda5
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507060"
---
# <a name="compiler-error-c3530"></a>Errore del compilatore C3530

non è possibile combinare ' auto ' con qualsiasi altro identificatore di tipo

Con la parola chiave viene usato un identificatore di tipo **`auto`** .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non usare un identificatore di tipo in una dichiarazione di variabile che usa la **`auto`** parola chiave.

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3530 perché la variabile `x` è dichiarata con la **`auto`** parola chiave e il tipo **`int`** e perché l'esempio viene compilato con **/Zc: auto**.

```cpp
// C3530.cpp
// Compile with /Zc:auto
int main()
{
   auto int x;   // C3530
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-cpp.md)
