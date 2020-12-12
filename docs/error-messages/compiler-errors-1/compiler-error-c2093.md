---
description: 'Altre informazioni su: errore del compilatore C2093'
title: Errore del compilatore C2093
ms.date: 11/04/2016
f1_keywords:
- C2093
helpviewer_keywords:
- C2093
ms.assetid: 17529a70-9169-46b5-9fc6-57a5ce224e6a
ms.openlocfilehash: d08c2e29415363fc64309a89691ec0852ca5fa88
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251856"
---
# <a name="compiler-error-c2093"></a>Errore del compilatore C2093

' Variable1': non può essere inizializzato con l'indirizzo della variabile automatica ' variable2'

Quando si esegue la compilazione con [/za](../../build/reference/za-ze-disable-language-extensions.md), il programma ha provato a usare l'indirizzo di una variabile automatica come inizializzatore.

L'esempio seguente genera l'C2093:

```c
// C2093.c
// compile with: /Za /c
void func() {
   int li;   // an implicit auto variable
   int * s[]= { &li };   // C2093 address is not a constant

   // OK
   static int li2;
   int * s2[]= { &li2 };
}
```
