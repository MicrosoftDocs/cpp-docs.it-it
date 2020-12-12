---
description: "Altre informazioni su: l'uso del nome della funzione senza () non produce codice"
title: Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza ()
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++], without parentheses
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
ms.openlocfilehash: 1fedc296422a759878c26469ccc20955043b3913
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277258"
---
# <a name="using-function-name-without--produces-no-code"></a>Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza ()

Quando un nome di funzione dichiarato nel programma viene usato senza parentesi, il compilatore non genera codice. Questa situazione si verifica indipendentemente dal fatto che la funzione accetti parametri, perché il compilatore calcola l'indirizzo della funzione; Tuttavia, poiché l'operatore di chiamata di funzione "()" non è presente, non viene effettuata alcuna chiamata. Questo risultato è simile al seguente:

```
// compile with /Wall to generate a warning
int a;
a;      // no code generated here either
```

In Visual C++, anche l'uso del livello di avviso 4 non genera alcun output di diagnostica. Non viene emesso alcun avviso; non viene generato alcun codice.

Il codice di esempio seguente compila (con un avviso) e si collega correttamente senza errori, ma non produce codice in riferimento a `funcn( )` . Per il corretto funzionamento di questa operazione, aggiungere l'operatore di chiamata di funzione "()".

```
#include <stdio.h>
void funcn();

int main() {
   funcn;      /* missing function call operator;
                  call will fail.  Use funcn() */
   }

void funcn() {
   printf("\nHello World\n");
}
```

## <a name="see-also"></a>Vedi anche

[Ottimizzazione del codice](optimizing-your-code.md)
