---
description: 'Altre informazioni su: errore del compilatore C2361'
title: Errore del compilatore C2361
ms.date: 11/04/2016
f1_keywords:
- C2361
helpviewer_keywords:
- C2361
ms.assetid: efbdaeb9-891c-4f7d-97da-89088a8413f3
ms.openlocfilehash: 53ca69daf347d23bb27e214556a74c70c1e53725
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328311"
---
# <a name="compiler-error-c2361"></a>Errore del compilatore C2361

l'inizializzazione di ' Identifier ' è stata ignorata dall'etichetta ' default '

L'inizializzazione di `identifier` può essere ignorata in un' **`switch`** istruzione. Non è possibile passare oltre una dichiarazione con un inizializzatore, a meno che la dichiarazione non sia racchiusa in un blocco. A meno che non sia dichiarato all'interno di un blocco, la variabile rientra nell'ambito fino alla fine dell' **`switch`** istruzione.

L'esempio seguente genera l'C2361:

```cpp
// C2361.cpp
void func( void ) {
   int x;
   switch (x) {
   case 0 :
      int i = 1;
      { int j = 1; }
   default :   // C2361 error
      int k = 1;
   }
}
```

Possibile soluzione:

```cpp
// C2361b.cpp
// compile with: /c
void func( void ) {
   int x = 0;
   switch (x) {
   case 0 :
      { int j = 1; int i = 1;}
   default :
      int k = 1;
   }
}
```
