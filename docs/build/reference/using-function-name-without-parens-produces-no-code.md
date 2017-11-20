---
title: Usa il nome di funzione senza () non produce codice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: functions [C++], without parentheses
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 79f360bffa4938098b4b37dd2260596c70669d12
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-function-name-without--produces-no-code"></a>Mancata generazione di codice in seguito all'utilizzo di nomi di funzione senza ()
Quando viene utilizzato il nome di una funzione dichiarato nel programma senza parentesi, il compilatore non genera codice. Questo errore si verifica indipendentemente dal fatto che la funzione accetta parametri perché il compilatore calcola l'indirizzo di funzione. Tuttavia, poiché l'operatore di chiamata di funzione "()" non è presente, verrà effettuata alcuna chiamata. Il risultato è simile al seguente:  
  
```  
// compile with /Wall to generate a warning  
int a;  
a;      // no code generated here either  
```  
  
 In Visual C++, neanche usando il livello di avviso 4 non genera alcun output di diagnostica. Viene visualizzato alcun avviso; non viene generato alcun codice.  
  
 Esempio di codice seguente viene compilato (con un avviso) e collegato correttamente senza errori ma non produce codice in riferimento a `funcn( )`. Per questa soluzione funzioni correttamente, aggiungere l'operatore di chiamata di funzione "()".  
  
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