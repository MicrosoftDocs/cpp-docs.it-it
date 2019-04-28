---
title: Errore del compilatore C2448
ms.date: 11/04/2016
f1_keywords:
- C2448
helpviewer_keywords:
- C2448
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
ms.openlocfilehash: 915217ffbe848b2814e9960183854e09a80b9ee8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230296"
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