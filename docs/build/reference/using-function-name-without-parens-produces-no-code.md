---
title: Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza ()
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++], without parentheses
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
ms.openlocfilehash: 50053244787d1ceafe4e60083e7e7353e337dbbe
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424899"
---
# <a name="using-function-name-without--produces-no-code"></a>Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza ()

Quando viene utilizzato il nome di una funzione dichiarato in un programma senza parentesi, il compilatore non genera codice. Ciò si verifica indipendentemente dal fatto o meno la funzione accetta parametri perché il compilatore calcola l'indirizzo di funzione. Tuttavia, poiché l'operatore di chiamata di funzione "()" non è presente, viene effettuata alcuna chiamata. Questo risultato è simile al seguente:

```
// compile with /Wall to generate a warning
int a;
a;      // no code generated here either
```

In Visual C++, neanche usando il livello di avviso 4 non genera alcun output di diagnostica. Viene visualizzato alcun avviso; non viene generato alcun codice.

Il codice di esempio seguente viene compilato (con un messaggio di avviso) e collegato correttamente senza errori ma mancata generazione di codice in riferimento a `funcn( )`. Per funzionare correttamente, aggiungere l'operatore di chiamata di funzione "()".

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

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)
