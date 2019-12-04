---
title: Errore del compilatore C2395
ms.date: 11/04/2016
f1_keywords:
- C2395
helpviewer_keywords:
- C2395
ms.assetid: 2d9e3b28-8c2c-4f41-a57f-61ef88fc2af0
ms.openlocfilehash: 2ac59856770b04dd3c4ea14360e0a83dd99f2150
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744940"
---
# <a name="compiler-error-c2395"></a>Errore del compilatore C2395

'your_type::operator'op'': operatore CLR o WinRT non valido. Almeno un parametro deve essere dei tipi seguenti:' T',' t%',' t &',' t ^',' t ^%',' t ^ &', dove T =' your_type '

Un operatore in un tipo Windows Runtime o gestito non dispone nemmeno di un parametro il cui tipo sia uguale al tipo del valore restituito dell'operatore.

L'esempio seguente genera l'errore C2395 e mostra come risolverlo:

```cpp
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
