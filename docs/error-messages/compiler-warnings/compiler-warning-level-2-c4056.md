---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4056'
title: Avviso del compilatore (livello 2) C4056
ms.date: 11/04/2016
f1_keywords:
- C4056
helpviewer_keywords:
- C4056
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
ms.openlocfilehash: 5d8b96e97197e43bf288476e310ddd842a90ec48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326544"
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
