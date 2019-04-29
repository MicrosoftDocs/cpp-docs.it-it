---
title: Compilatore avviso (livello 2) C4056
ms.date: 11/04/2016
f1_keywords:
- C4056
helpviewer_keywords:
- C4056
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
ms.openlocfilehash: 59c66f2f7dcbd1e20463df613b1b7deae6a1c349
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62349867"
---
# <a name="compiler-warning-level-2-c4056"></a>Compilatore avviso (livello 2) C4056

overflow in aritmetica a virgola mobile costante

Operazioni aritmetiche su costanti a virgola mobile e genera un risultato che supera il valore massimo consentito.

Questo avviso può dipendere dalle ottimizzazioni del compilatore eseguite durante operazioni aritmetiche su costanti. È possibile ignorare questo avviso se scompare quando disattiva l'ottimizzazione ([/Od](../../build/reference/od-disable-debug.md)).

L'esempio seguente genera l'errore C4056:

```
// C4056.cpp
// compile with: /W2 /LD
#pragma warning (default : 4056)
float fp_val = 1.0e300 * 1.0e300;   // C4056
```