---
description: 'Altre informazioni su: errore del compilatore C2556'
title: Errore del compilatore C2556
ms.date: 11/04/2016
f1_keywords:
- C2556
helpviewer_keywords:
- C2556
ms.assetid: fc4399ad-45b3-49fd-be1f-0b13956a595a
ms.openlocfilehash: 6c2233e10e763e959511c6b435e0d894e921905a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134485"
---
# <a name="compiler-error-c2556"></a>Errore del compilatore C2556

' Identifier ': le funzioni in overload sono diverse solo per il tipo restituito

Le funzioni in overload hanno tipi restituiti diversi, ma lo stesso elenco di parametri. Ogni funzione in overload deve avere un elenco di parametri formali distinti.

L'esempio seguente genera l'C2556:

```cpp
// C2556.cpp
// compile with: /c
class C {
   int func();
   double func();   // C2556
   int func(int i);   // ok parameter lists differ
};
```
