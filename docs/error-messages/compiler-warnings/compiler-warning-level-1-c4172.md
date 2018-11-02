---
title: Compilatore Warning (level 1) C4172
ms.date: 11/04/2016
f1_keywords:
- C4172
helpviewer_keywords:
- C4172
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
ms.openlocfilehash: caa71da9182c1da1d17d87d901084d0ee9badf73
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536619"
---
# <a name="compiler-warning-level-1-c4172"></a>Compilatore Warning (level 1) C4172

restituzione di indirizzo della variabile locale o temporanei

Una funzione restituisce l'indirizzo di un oggetto temporaneo o variabile locale. Le variabili locali e gli oggetti temporanei vengono eliminati definitivamente quando una funzione viene restituito, in modo che l'indirizzo restituito non è valido.

Riprogettare la funzione in modo che non viene restituito l'indirizzo di un oggetto locale.

L'esempio seguente genera l'errore C4172:

```
// C4172.cpp
// compile with: /W1 /LD
float f = 10;

const double& bar() {
// try the following line instead
// const float& bar() {
   return f;   // C4172
}
```