---
description: 'Altre informazioni su: errore del compilatore C2801'
title: Errore del compilatore C2801
ms.date: 11/04/2016
f1_keywords:
- C2801
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
ms.openlocfilehash: ca7e74f99b91b5a6699cdf3361ab64a89b7a7392
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297473"
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801

' operator Operator ' deve essere un membro non statico

È possibile eseguire l'overload degli operatori seguenti solo come membri non statici:

- Assegnazione `=`

- Accesso ai membri di classe `->`

- Inserimento `[]`

- Chiamata di funzione `()`

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
