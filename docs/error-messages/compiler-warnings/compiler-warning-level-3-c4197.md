---
title: Compilatore avviso (livello 3) C4197 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4197
dev_langs:
- C++
helpviewer_keywords:
- C4197
ms.assetid: f766feef-82b0-4d81-8a65-33628c7db196
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e3651a305b8654b9d7d36238885233b8e583f27
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46043612"
---
# <a name="compiler-warning-level-3-c4197"></a>Compilatore avviso (livello 3) C4197

'type': volatile di primo livello nel cast viene ignorato

Il compilatore ha rilevato un cast a un r-value di tipo qualificato con [volatile](../../cpp/volatile-cpp.md), o un cast di un tipo di r-value per un tipo qualificato con volatile. Secondo lo standard C (6.5.3), le proprietà associate ai tipi completi sono significative solo per le espressioni l-value.

L'esempio seguente genera l'errore C4197:

```
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