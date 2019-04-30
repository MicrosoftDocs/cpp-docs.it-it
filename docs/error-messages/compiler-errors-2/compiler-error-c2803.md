---
title: Errore del compilatore C2803
ms.date: 11/04/2016
f1_keywords:
- C2803
helpviewer_keywords:
- C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
ms.openlocfilehash: d20b8dde9f4134273adcba0f947f685f7ce7d213
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408524"
---
# <a name="compiler-error-c2803"></a>Errore del compilatore C2803

'operator operator' deve avere almeno un parametro formale del tipo di classe

L'operatore di overload non dispone di un parametro di tipo classe.

È necessario passare almeno un parametro per riferimento (non utilizzando i puntatori, ma i riferimenti) oppure per valore sia in grado di scrivere "un < b" (una e b in fase di classe tipo).

Se entrambi i parametri sono puntatori sarà un semplice confronto degli indirizzi di puntatori e non userà la conversione definita dall'utente.

L'esempio seguente genera l'errore C2803:

```
// C2803.cpp
// compile with: /c
class A{};
bool operator< (const A *left, const A *right);   // C2803
// try the following line instead
// bool operator< (const A& left, const A& right);
```