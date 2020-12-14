---
description: 'Altre informazioni su: errore del compilatore C3530'
title: Errore del compilatore C3530
ms.date: 11/04/2016
f1_keywords:
- C3530
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
ms.openlocfilehash: 74cd9ade2805ba26c700d476c53f87ea86a3baba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315374"
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

## <a name="see-also"></a>Vedi anche

[Parola chiave auto](../../cpp/auto-cpp.md)
