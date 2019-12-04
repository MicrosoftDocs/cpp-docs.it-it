---
title: Errore del compilatore C3530
ms.date: 11/04/2016
f1_keywords:
- C3530
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
ms.openlocfilehash: 3766eaa83457ba6cffaf8b1599983a065772911c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74750143"
---
# <a name="compiler-error-c3530"></a>Errore del compilatore C3530

non è possibile combinare ' auto ' con qualsiasi altro identificatore di tipo

Con la parola chiave `auto` viene usato un identificatore di tipo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non usare un identificatore di tipo in una dichiarazione di variabile che usa la parola chiave `auto`.

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3530 perché la variabile `x` viene dichiarata con la parola chiave `auto` e il tipo `int`e perché l'esempio viene compilato con **/Zc: auto**.

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

[Auto (parola chiave)](../../cpp/auto-keyword.md)
