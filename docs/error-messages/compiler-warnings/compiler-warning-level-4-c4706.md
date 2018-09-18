---
title: Compilatore avviso (livello 4) C4706 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4706
dev_langs:
- C++
helpviewer_keywords:
- C4706
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 843edeaf490f27475003e9303f7929b818e2b104
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036956"
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