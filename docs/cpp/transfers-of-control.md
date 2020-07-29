---
title: Trasferimenti del controllo
ms.date: 11/04/2016
helpviewer_keywords:
- control flow, branching
- control flow, transferring control
ms.assetid: aa51e7f2-060f-4106-b0fe-331f04357423
ms.openlocfilehash: ef437d0a691ceff72485be1ff9584052f540031a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232183"
---
# <a name="transfers-of-control"></a>Trasferimenti del controllo

È possibile usare l' **`goto`** istruzione o un' **`case`** etichetta in un' **`switch`** istruzione per specificare un programma che esegue il branching dopo un inizializzatore. Tale codice non è valido, a meno che la dichiarazione che contiene l'inizializzatore non sia in un blocco incluso dal blocco in cui si verifica l'istruzione di salto.

Nell'esempio seguente viene illustrato un ciclo che dichiara e inizializza gli oggetti `total`, `ch` e `i`. Esiste anche un'istruzione errata **`goto`** che trasferisce il controllo oltre un inizializzatore.

```cpp
// transfers_of_control.cpp
// compile with: /W1
// Read input until a nonnumeric character is entered.
int main()
{
   char MyArray[5] = {'2','2','a','c'};
   int i = 0;
   while( 1 )
   {
      int total = 0;

      char ch = MyArray[i++];

      if ( ch >= '0' && ch <= '9' )
      {
         goto Label1;

         int i = ch - '0';
      Label1:
         total += i;   // C4700: transfers past initialization of i.
      } // i would be destroyed here if  goto error were not present
   else
      // Break statement transfers control out of loop,
      //  destroying total and ch.
      break;
   }
}
```

Nell'esempio precedente, l' **`goto`** istruzione tenta di trasferire il controllo dopo l'inizializzazione di `i` . Tuttavia, se `i` è stato dichiarato ma non inizializzato, il trasferimento è valido.

Gli oggetti `total` e `ch` , dichiarati nel blocco che funge da *istruzione* dell' **`while`** istruzione, vengono eliminati definitivamente quando il blocco viene terminato utilizzando l' **`break`** istruzione.
