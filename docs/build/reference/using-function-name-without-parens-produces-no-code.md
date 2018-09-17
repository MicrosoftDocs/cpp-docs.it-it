---
title: Usa il nome di funzione senza () mancata generazione di codice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], without parentheses
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13ca43386c9ef46f526538781a91fd1a81ade537
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710580"
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