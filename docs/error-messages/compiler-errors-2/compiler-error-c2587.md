---
description: 'Altre informazioni su: errore del compilatore C2587'
title: Errore del compilatore C2587
ms.date: 11/04/2016
f1_keywords:
- C2587
helpviewer_keywords:
- C2587
ms.assetid: 7637a2c7-35d4-4b5a-a8f2-515a7bda98fd
ms.openlocfilehash: a5d447f2e1a08c310fdd5c2d42afef768f191f4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177601"
---
# <a name="compiler-error-c2587"></a>Errore del compilatore C2587

' Identifier ': utilizzo non valido della variabile locale come parametro predefinito

Le variabili locali non sono consentite come parametri predefiniti.

L'esempio seguente genera l'C2587:

```cpp
// C2587.cpp
// compile with: /c
int i;
void func() {
   int j;
   extern void func2( int k = j );  // C2587 -- local variable
   extern void func3( int k = i );   // OK
}
```
