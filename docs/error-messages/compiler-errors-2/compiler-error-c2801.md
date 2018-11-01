---
title: Errore del compilatore C2801
ms.date: 11/04/2016
f1_keywords:
- C2801
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
ms.openlocfilehash: 44f7988f9fedb882972b2823f2fe70d9512d4e87
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484786"
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801

'operator operator' deve essere un membro non statica

Solo come membri non statici possono essere sottoposti a overload gli operatori seguenti:

- Assegnazione `=`

- Accesso ai membri di classe `->`

- Indice `[]`

- Chiamata di funzione `()`

Possibili cause C2801:

- Operatore di overload non è una classe, struttura o membro di unione.

- Operatore di overload è dichiarato `static`.

- L'esempio seguente genera l'errore C2801:

```
// C2801.cpp
// compile with: /c
operator[]();   // C2801 not a member
class A {
   static operator->();   // C2801 static
   operator()();   // OK
};
```