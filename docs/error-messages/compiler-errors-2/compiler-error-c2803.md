---
title: Errore del compilatore C2803
ms.date: 11/04/2016
f1_keywords:
- C2803
helpviewer_keywords:
- C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
ms.openlocfilehash: d39f737ba02f3fa9c9d5f61594ddf730db6739a5
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760660"
---
# <a name="compiler-error-c2803"></a>Errore del compilatore C2803

' operator Operator ' deve avere almeno un parametro formale di tipo classe

L'operatore di overload non dispone di un parametro di tipo classe.

È necessario passare almeno un parametro per riferimento (non usando puntatori, ma riferimenti) o per valore per poter scrivere "a < b" (a e b di tipo classe A).

Se entrambi i parametri sono puntatori, sarà un confronto puro tra gli indirizzi del puntatore e non utilizzerà la conversione definita dall'utente.

L'esempio seguente genera l'C2803:

```cpp
// C2803.cpp
// compile with: /c
class A{};
bool operator< (const A *left, const A *right);   // C2803
// try the following line instead
// bool operator< (const A& left, const A& right);
```
