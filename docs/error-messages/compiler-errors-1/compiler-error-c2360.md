---
title: Errore del compilatore C2360
ms.date: 11/04/2016
f1_keywords:
- C2360
helpviewer_keywords:
- C2360
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
ms.openlocfilehash: a2a164f919dc7535a4587d51f4f7dba8653a1760
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214685"
---
# <a name="compiler-error-c2360"></a>Errore del compilatore C2360

l'inizializzazione di ' Identifier ' è stata ignorata dall'etichetta ' case '

L'inizializzazione di `identifier` può essere ignorata in un' **`switch`** istruzione. Non è possibile passare oltre una dichiarazione con un inizializzatore, a meno che la dichiarazione non sia racchiusa in un blocco. A meno che non sia dichiarato all'interno di un blocco, la variabile rientra nell'ambito fino alla fine dell' **`switch`** istruzione.

L'esempio seguente genera l'C2360:

```cpp
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

```cpp
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
