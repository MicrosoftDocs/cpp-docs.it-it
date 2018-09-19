---
title: Compilatore avviso (livello 1) C4258 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4258
dev_langs:
- C++
helpviewer_keywords:
- C4258
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4d9aacd6e3681a1eb42073df8a13d7ce72c5634
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083535"
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