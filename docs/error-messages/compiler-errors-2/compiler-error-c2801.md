---
title: Errore del compilatore C2801
ms.date: 11/04/2016
f1_keywords:
- C2801
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
ms.openlocfilehash: 44f7988f9fedb882972b2823f2fe70d9512d4e87
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408680"
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