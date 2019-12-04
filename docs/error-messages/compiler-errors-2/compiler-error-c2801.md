---
title: Errore del compilatore C2801
ms.date: 11/04/2016
f1_keywords:
- C2801
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
ms.openlocfilehash: 0d2ea3677d883fa4843c37a41d733872b23cbba0
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760673"
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801

' operator Operator ' deve essere un membro non statico

È possibile eseguire l'overload degli operatori seguenti solo come membri non statici:

- `=` di assegnazione

- `->` di accesso ai membri di classe

- `[]` di indice

- Chiamata di funzione `()`

Possibili cause di C2801:

- L'operatore di overload non è un membro di classe, struttura o Unione.

- L'operatore di overload è dichiarato `static`.

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
