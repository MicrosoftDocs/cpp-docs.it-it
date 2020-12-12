---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4706'
title: Avviso del compilatore (livello 4) C4706
ms.date: 11/04/2016
f1_keywords:
- C4706
helpviewer_keywords:
- C4706
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
ms.openlocfilehash: ca614d0ca55dcfa22ec31df78ebe2be904ffd9e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208528"
---
# <a name="compiler-warning-level-4-c4706"></a>Avviso del compilatore (livello 4) C4706

assegnazione all'interno di un'espressione condizionale

Il valore del test in un'espressione condizionale è il risultato di un'assegnazione.

Un'assegnazione ha un valore (il valore sul lato sinistro dell'assegnazione) che può essere usato legalmente in un'altra espressione, inclusa un'espressione di test.

L'esempio seguente genera l'C4706:

```cpp
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

L'avviso si verificherà anche se si raddoppiano le parentesi attorno alla condizione di test:

```cpp
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

Se si intende testare una relazione e non eseguire un'assegnazione, usare l' `==` operatore. La riga seguente, ad esempio, verifica se a e b sono uguali:

```cpp
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

Se si intende rendere il valore del test il risultato di un'assegnazione, testare per assicurarsi che l'assegnazione sia diversa da zero o non null. Ad esempio, il codice seguente non genererà questo avviso:

```cpp
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
