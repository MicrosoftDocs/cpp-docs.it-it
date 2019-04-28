---
title: Errore del compilatore C2970
ms.date: 11/04/2016
f1_keywords:
- C2970
helpviewer_keywords:
- C2970
ms.assetid: 21d90348-20d3-438c-b278-efdbfb93a7d2
ms.openlocfilehash: 425d1bf50d56c4455ccd9292b300e744625d34c7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62256336"
---
# <a name="compiler-error-c2970"></a>Errore del compilatore C2970

'class': parametro di modello 'param': 'arg': non è possibile usare un'espressione che comprende oggetti con collegamento interno come argomento non di tipo

È possibile usare il nome o l'indirizzo di una variabile statica come argomento di modello. La classe modello prevede un valore costante che può essere valutato in fase di compilazione.

L'esempio seguente genera l'errore C2970:

```
// C2970.cpp
// compile with: /c
static int si;
// could declare nonstatic to resolve all errors
// int si;

template <int i>
class X {};

template <int *pi>
class Y {};

X<si> anX;   // C2970 cannot use static variable in templates

// this would also work
const int i = 10;
X<i> anX2;
```