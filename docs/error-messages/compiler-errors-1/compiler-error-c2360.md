---
title: Errore del compilatore C2360 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2360
dev_langs:
- C++
helpviewer_keywords:
- C2360
ms.assetid: 51bfd2ee-8108-4777-aa93-148b9cebfa83
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f443c27c496d5d05c17bde854181b0fdde58f545
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089203"
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