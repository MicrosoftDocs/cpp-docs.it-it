---
title: Errore del compilatore C3920
ms.date: 11/04/2016
f1_keywords:
- C3920
helpviewer_keywords:
- C3920
ms.assetid: 66e91f28-ed82-4ce2-bf22-c0c74905b1ed
ms.openlocfilehash: 416752054f7397a058329e1ee4bdaef693dd0d28
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758463"
---
# <a name="compiler-error-c3920"></a>Errore del compilatore C3920

' operator '': non è possibile definire un WinRT di incremento/decremento suffisso o un operatore CLR che chiama il suffisso WinRT o l'operatore CLR chiamerà il prefisso corrispondente WinRT o l'operatore CLR (op_Increment/op_Decrement), ma con la semantica suffissa

Windows Runtime e CLR non supportano la forma suffissa dell'operatore e non è consentita la forma suffissa degli operatori definiti dall'utente.  È possibile definire un forma suffissa dell'operatore e la forma prefissa dell'operatore verrà usata per le operazioni di pre-incremento e post-incremento.

L'esempio seguente genera l'errore C3920 e mostra come risolverlo:

```cpp
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
