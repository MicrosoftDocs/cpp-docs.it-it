---
title: Trasferimenti del controllo
ms.date: 11/04/2016
helpviewer_keywords:
- control flow, branching
- control flow, transferring control
ms.assetid: aa51e7f2-060f-4106-b0fe-331f04357423
ms.openlocfilehash: c9a46ccb1cf519080c5105855e41ecd3ebc23f77
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188051"
---
# <a name="transfers-of-control"></a>Trasferimenti del controllo

È possibile usare l'istruzione **goto** o un'etichetta **case** in un'istruzione **Switch** per specificare un programma che esegue il branching dopo un inizializzatore. Tale codice non è valido, a meno che la dichiarazione che contiene l'inizializzatore non sia in un blocco incluso dal blocco in cui si verifica l'istruzione di salto.

Nell'esempio seguente viene illustrato un ciclo che dichiara e inizializza gli oggetti `total`, `ch` e `i`. Esiste anche un'istruzione **goto** errata che trasferisce il controllo oltre un inizializzatore.

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

Nell'esempio precedente, l'istruzione **goto** tenta di trasferire il controllo dopo l'inizializzazione del `i`. Tuttavia, se `i` è stato dichiarato ma non inizializzato, il trasferimento è valido.

Gli oggetti `total` e `ch`, dichiarati nel blocco che funge da *istruzione* dell'istruzione **while** , vengono eliminati definitivamente quando il blocco viene terminato utilizzando l'istruzione **break** .
