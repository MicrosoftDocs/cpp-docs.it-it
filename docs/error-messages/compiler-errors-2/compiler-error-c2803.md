---
description: 'Altre informazioni su: errore del compilatore C2803'
title: Errore del compilatore C2803
ms.date: 11/04/2016
f1_keywords:
- C2803
helpviewer_keywords:
- C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
ms.openlocfilehash: 405c14d05bad4c505d847b8ab2648a7ace3b9a4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297434"
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
