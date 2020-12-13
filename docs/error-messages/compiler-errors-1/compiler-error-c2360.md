---
description: 'Altre informazioni su: errore del compilatore C2360'
title: Errore del compilatore C2360
ms.date: 11/04/2016
f1_keywords:
- C2360
helpviewer_keywords:
- C2360
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
ms.openlocfilehash: c71a82816edfacede51a5774fec5e90560d964a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136461"
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
