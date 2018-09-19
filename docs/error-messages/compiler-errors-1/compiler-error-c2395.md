---
title: Errore del compilatore C2395 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2395
dev_langs:
- C++
helpviewer_keywords:
- C2395
ms.assetid: 2d9e3b28-8c2c-4f41-a57f-61ef88fc2af0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 99d9a1be42a36baac2037e4289cb24db2f45b563
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050541"
---
# <a name="compiler-error-c2395"></a>Errore del compilatore C2395

'your_type::operator'op'': operatore CLR o WinRT non valido. Almeno un parametro deve essere dei tipi seguenti: 'T', 'T%', 'T&', 'T^', 'T^%', 'T^&', dove T = 'your_type'

Un operatore in un tipo Windows Runtime o gestito non dispone nemmeno di un parametro il cui tipo sia uguale al tipo del valore restituito dell'operatore.

L'esempio seguente genera l'errore C2395 e mostra come risolverlo:

```
// C2395.cpp
// compile with: /clr /c
value struct V {
   static V operator *(int i, char c);   // C2395

   // OK
   static V operator *(V v, char c);
   // or
   static V operator *(int i, V& rv);
};
```