---
title: Avviso del compilatore (livello 4) C4706
ms.date: 11/04/2016
f1_keywords:
- C4706
helpviewer_keywords:
- C4706
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
ms.openlocfilehash: e57470fcd8e7b014084b094c9ca5e39f0a86d85e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630030"
---
# <a name="compiler-warning-level-4-c4706"></a>Avviso del compilatore (livello 4) C4706

assegnazione all'interno di espressione condizionale

Il valore di test in un'espressione condizionale è il risultato di un'assegnazione.

Un'assegnazione è un valore (il valore sul lato sinistro dell'assegnazione) che può essere utilizzato in un'altra espressione, anche un'espressione di test.

L'esempio seguente genera l'errore C4706:

```
// C4706a.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( a  = b ) // C4706
   {
   }
}
```

L'avviso si verifica anche se si raddoppiano le parentesi che racchiudono la condizione di test:

```
// C4706b.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( ( a  =  b ) ) // C4706
   {
   }
}
```

Se si intende testare una relazione e non per effettuare un'assegnazione, usare il `==` operatore. Ad esempio, la riga seguente test indica se un e b sono uguali:

```
// C4706c.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( a == b )
   {
   }
}
```

Se si prevede di creare un valore di risultato di un'assegnazione, di test per assicurarsi che l'assegnazione è diverso da zero o non null. Ad esempio, il codice seguente non genera questo avviso:

```
// C4706d.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( ( a = b ) != 0 )
   {
   }
}
```