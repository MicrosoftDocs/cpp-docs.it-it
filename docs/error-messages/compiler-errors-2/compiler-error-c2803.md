---
title: Errore del compilatore C2803 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2803
dev_langs:
- C++
helpviewer_keywords:
- C2803
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7885735ebad1ff90afaf4ba8eaf6dfca9f3e0ab3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027040"
---
# <a name="compiler-error-c2803"></a>Errore del compilatore C2803

'operator operator' deve avere almeno un parametro formale del tipo di classe

L'operatore di overload non dispone di un parametro di tipo classe.

Per poter scrivere "a < b", con a e b di classe tipo A, è necessario passare almeno un parametro per riferimento (utilizzando riferimenti e non puntatori) o per valore.

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