---
title: Errore del compilatore C2511
ms.date: 11/04/2016
f1_keywords:
- C2511
helpviewer_keywords:
- C2511
ms.assetid: df999efe-fe2b-418b-bb55-4af6a0592631
ms.openlocfilehash: 9d9ba48b0607e7a30b8748d4e9ae4f7025f11dea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50522993"
---
# <a name="compiler-error-c2511"></a>Errore del compilatore C2511

'identifier': funzione membro non trovata in 'class' di overload

Nessuna versione della funzione è dichiarata con i parametri specificati.  Possibili cause:

1. Parametri errati passati alla funzione.

1. I parametri passati in ordine errato.

1. Errori di ortografia dei nomi di parametro.

L'esempio seguente genera l'errore C2511:

```
// C2511.cpp
// compile with: /c
class C {
   int c_2;
   int Func(char *, char *);
};

int C::Func(char *, char *, int i) {   // C2511
// try the following line instead
// int C::Func(char *, char *) {
   return 0;
}
```