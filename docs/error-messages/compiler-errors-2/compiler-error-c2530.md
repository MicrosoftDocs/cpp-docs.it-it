---
title: Errore del compilatore C2530
ms.date: 11/04/2016
f1_keywords:
- C2530
helpviewer_keywords:
- C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
ms.openlocfilehash: 2c8164cad25d68ee61ff9fed7170482d5dfc9505
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474789"
---
# <a name="compiler-error-c2530"></a>Errore del compilatore C2530

'identifier': i riferimenti devono essere inizializzati

È necessario inizializzare un riferimento quando è stata dichiarata, a meno che non è già dichiarato:

- Con la parola chiave [extern](../../cpp/using-extern-to-specify-linkage.md).

- Come membro di una classe, struttura o unione (e viene inizializzato nel costruttore).

- Come parametro in una definizione o dichiarazione di funzione.

- Come tipo restituito di una funzione.

L'esempio seguente genera l'errore C2530:

```
// C2530.cpp
int main() {
   int i = 0;
   int &j;   // C2530
   int &k = i;   // OK
}
```