---
title: Errore del compilatore C2448
ms.date: 11/04/2016
f1_keywords:
- C2448
helpviewer_keywords:
- C2448
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
ms.openlocfilehash: 915217ffbe848b2814e9960183854e09a80b9ee8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434853"
---
# <a name="compiler-error-c2448"></a>Errore del compilatore C2448

'identifier': inizializzatore di tipo funzione sembra essere una definizione di funzione

La definizione di funzione non è corretta.

Questo errore può essere causato da un elenco formale di linguaggio C obsoleto.

L'esempio seguente genera l'errore C2448:

```
// C2448.cpp
void func(c)
   int c;
{}   // C2448
```