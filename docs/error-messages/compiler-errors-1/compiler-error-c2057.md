---
title: Errore del compilatore C2057
ms.date: 11/04/2016
f1_keywords:
- C2057
helpviewer_keywords:
- C2057
ms.assetid: 038a99d6-1f5a-42fa-8449-03b4ff11ee0b
ms.openlocfilehash: 6c8b171a878a8f370a024fa7374be6925695bd4d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548707"
---
# <a name="compiler-error-c2057"></a>Errore del compilatore C2057

prevista espressione costante

Il contesto richiede un'espressione costante, un'espressione il cui valore è noto in fase di compilazione.

Il compilatore deve conoscere le dimensioni di un tipo in fase di compilazione per allocare lo spazio per un'istanza di tale tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2057 e mostra come risolverlo:

```
// C2057.cpp
int i;
int b[i];   // C2057 - value of i is unknown at compile time
int main() {
   const int i = 8;
   int b[i]; // OK - value of i is fixed and known to compiler
}
```

## <a name="example"></a>Esempio

C ha regole più restrittive per le espressioni costanti.  L'esempio seguente genera l'errore C2057 e mostra come risolverlo:

```
// C2057b.c
#define ArraySize1 10
int main() {
   const int ArraySize2 = 10;
   int h[ArraySize2];   // C2057 - C does not allow variables here
   int h[ArraySize1];   // OK - uses preprocessor constant
}
```