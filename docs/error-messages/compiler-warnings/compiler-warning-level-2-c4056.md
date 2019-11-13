---
title: Avviso del compilatore (livello 2) C4056
ms.date: 11/04/2016
f1_keywords:
- C4056
helpviewer_keywords:
- C4056
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
ms.openlocfilehash: 20e7c2693c14c0ea05cc6f07f8dad4ce76c1ef5e
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052197"
---
# <a name="compiler-warning-level-2-c4056"></a>Avviso del compilatore (livello 2) C4056

overflow nell'aritmetica costante a virgola mobile

La costante aritmetica a virgola mobile genera un risultato che supera il valore massimo consentito.

Questo avviso può essere causato da ottimizzazioni del compilatore eseguite durante l'aritmetica costante. È possibile ignorare questo avviso se viene rimosso quando si disattiva l'ottimizzazione ([/od](../../build/reference/od-disable-debug.md)).

L'esempio seguente genera l'C4056:

```cpp
// C4056.cpp
// compile with: /W2 /LD
#pragma warning (default : 4056)
float fp_val = 1.0e300 * 1.0e300;   // C4056
```