---
title: Avviso del compilatore (livello 1) C4258
ms.date: 11/04/2016
f1_keywords:
- C4258
helpviewer_keywords:
- C4258
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
ms.openlocfilehash: a3ce4c81a86920baddfc1b277df0236a96254be4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207396"
---
# <a name="compiler-warning-level-1-c4258"></a>Avviso del compilatore (livello 1) C4258

'variable': definizione dal ciclo for ignorata; la definizione di dall'ambito di inclusione viene usata"

Sotto [/Ze](../../build/reference/za-ze-disable-language-extensions.md) e [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md), le variabili definite in un [per](../../cpp/for-statement-cpp.md) ciclo escono dall'ambito dopo il **per** fine del ciclo. Questo avviso viene visualizzato se una variabile con lo stesso nome della variabile del ciclo, ma definita nel ciclo di inclusione, viene usata anche in questo caso nell'ambito che contiene il **per** ciclo. Ad esempio:

```
// C4258.cpp
// compile with: /Zc:forScope /W1
int main()
{
   int i;
   {
      for (int i =0; i < 1; i++)
         ;
      i = 20;   // C4258 i (in for loop) has gone out of scope
   }
}
```