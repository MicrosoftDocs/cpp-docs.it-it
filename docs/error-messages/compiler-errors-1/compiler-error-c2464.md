---
title: Errore del compilatore C2464
ms.date: 11/04/2016
f1_keywords:
- C2464
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
ms.openlocfilehash: a00ac997f73175eeab08a0132128e48e8fc58feb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498189"
---
# <a name="compiler-error-c2464"></a>Errore del compilatore C2464

'identifier': Impossibile utilizzare 'new' per allocare un riferimento

Un identificatore di riferimento è stato allocato con il `new` operatore. I riferimenti non sono oggetti di memoria, pertanto `new` non può restituire un puntatore a essi. Usare la sintassi di dichiarazione di variabile standard per dichiarare un riferimento.

L'esempio seguente genera l'errore C2464:

```
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```