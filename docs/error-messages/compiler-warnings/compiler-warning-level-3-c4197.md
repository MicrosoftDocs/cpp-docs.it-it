---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4197'
title: Avviso del compilatore (livello 3) C4197
ms.date: 11/04/2016
f1_keywords:
- C4197
helpviewer_keywords:
- C4197
ms.assetid: f766feef-82b0-4d81-8a65-33628c7db196
ms.openlocfilehash: f52c37e28ce681b96158b7e1f10fef3e9f121522
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344211"
---
# <a name="compiler-warning-level-3-c4197"></a>Avviso del compilatore (livello 3) C4197

' type ': volatile di primo livello nel cast ignorato

Il compilatore ha rilevato un cast a un tipo r-value qualificato con [volatile](../../cpp/volatile-cpp.md)o un cast di un tipo r-value in un tipo qualificato con volatile. In base allo standard C (6.5.3), le proprietà associate ai tipi qualificati sono significative solo per le espressioni l-value.

L'esempio seguente genera l'C4197:

```cpp
// C4197.cpp
// compile with: /W3
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sigproc(int);
struct S
{
   int i;
} s;

int main()
{
   signal(SIGINT, sigproc);
   s.i = 1;
   S *pS = &s;
   for ( ; (volatile int)pS->i ; )   // C4197
      break;
   // for ( ; *(volatile int *)&pS->i ; )   // OK
   //    break;
}

void sigproc(int) // ctrl-C
{
   signal(SIGINT, sigproc);
   s.i = 0;
}
```
