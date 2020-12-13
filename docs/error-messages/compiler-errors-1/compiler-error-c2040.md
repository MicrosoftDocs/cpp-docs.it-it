---
description: 'Altre informazioni su: errore del compilatore C2040'
title: Errore del compilatore C2040
ms.date: 11/04/2016
f1_keywords:
- C2040
helpviewer_keywords:
- C2040
ms.assetid: 74ca3592-1469-4965-ab34-a4815e2fbefe
ms.openlocfilehash: 39e5152e012d793bcc174f5abe451e23f03b60d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175365"
---
# <a name="compiler-error-c2040"></a>Errore del compilatore C2040

'operator': 'identifier1' differisce da 'identifier2' nei livelli dei riferimenti indiretti

Un'espressione che comprende gli operandi specificati ha tipi di operando incompatibili o tipi di operando convertiti in modo implicito. Se entrambi gli operandi sono aritmetici o non aritmetici (ad esempio, una matrice o un puntatore), vengono usati senza modifiche. Se un operando è aritmetico e l'altro non lo è, l'operando aritmetico verrà convertito nel tipo dell'operando non aritmetico.

Questo esempio genera l'errore C2040 e mostra come risolverlo.

```cpp
// C2040.cpp
// Compile by using: cl /c /W3 C2040.cpp
bool test() {
   char c = '3';
   return c == "3"; // C2446, C2040
   // return c == '3'; // OK
}
```
