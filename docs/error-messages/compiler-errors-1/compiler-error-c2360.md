---
title: Errore del compilatore C2360
ms.date: 11/04/2016
f1_keywords:
- C2360
helpviewer_keywords:
- C2360
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
ms.openlocfilehash: 6e956ccb021dc3bce4d107e4aa6e0bbe4356283b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62364727"
---
# <a name="compiler-error-c2360"></a>Errore del compilatore C2360

inizializzazione di 'identifier' ignorata da un'etichetta 'case'

L'inizializzazione di `identifier` può essere ignorato un `switch` istruzione. Non è possibile iniziare oltre una dichiarazione con un inizializzatore a meno che non la dichiarazione è racchiuso in un blocco. (A meno che non è dichiarato all'interno di un blocco, la variabile è nell'ambito fino alla fine del `switch` istruzione.)

L'esempio seguente genera l'errore C2360:

```
// C2360.cpp
int main() {
   int x = 0;
   switch ( x ) {
   case 0 :
      int i = 1;
      { int j = 1; }
   case 1 :   // C2360
      int k = 1;
   }
}
```

Possibile soluzione:

```
// C2360b.cpp
int main() {
   int x = 0;
   switch ( x ) {
   case 0 :
      { int j = 1; int i = 1;}
   case 1 :
      int k = 1;
   }
}
```