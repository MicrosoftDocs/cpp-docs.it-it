---
title: Errore del compilatore C3920
ms.date: 11/04/2016
f1_keywords:
- C3920
helpviewer_keywords:
- C3920
ms.assetid: 66e91f28-ed82-4ce2-bf22-c0c74905b1ed
ms.openlocfilehash: d7163cf07a440a0afd1216b3e5cf665326ffb963
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51522103"
---
# <a name="compiler-error-c3920"></a>Errore del compilatore C3920

' operator ': non è possibile definire una forma suffissa incrementare o decrementare WinRT o un operatore di Common Language Runtime chiama la forma suffissa operatore WinRT o CLR chiamerà il corrispondente prefisso ma WinRT o CLR (op_Increment/op_Decrement) senza operatore la semantica del suffisso

Windows Runtime e CLR non supportano la forma suffissa dell'operatore e non è consentita la forma suffissa degli operatori definiti dall'utente.  È possibile definire un forma suffissa dell'operatore e la forma prefissa dell'operatore verrà usata per le operazioni di pre-incremento e post-incremento.

L'esempio seguente genera l'errore C3920 e mostra come risolverlo:

```
// C3920.cpp
// compile with: /clr /LD
public value struct V {
   static V operator ++(V me, int)
   // try the following line instead
   // static V operator ++(V me)
   {   // C3920
      me.m_i++;
      return me;
   }

   int m_i;
};
```