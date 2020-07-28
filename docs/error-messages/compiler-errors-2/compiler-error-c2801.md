---
title: Errore del compilatore C2801
ms.date: 11/04/2016
f1_keywords:
- C2801
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
ms.openlocfilehash: cfb89c79534318ab1fbcaa06667d594bfe2f1157
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214594"
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801

' operator Operator ' deve essere un membro non statico

È possibile eseguire l'overload degli operatori seguenti solo come membri non statici:

- Assegnazione`=`

- Accesso ai membri di classe`->`

- Inserimento`[]`

- Chiamata di funzione`()`

Possibili cause di C2801:

- L'operatore di overload non è un membro di classe, struttura o Unione.

- L'operatore di overload è dichiarato **`static`** .

- L'esempio seguente genera l'C2801:

```cpp
// C2801.cpp
// compile with: /c
operator[]();   // C2801 not a member
class A {
   static operator->();   // C2801 static
   operator()();   // OK
};
```
