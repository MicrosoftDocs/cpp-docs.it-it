---
description: 'Altre informazioni su: errore del compilatore C2577'
title: Errore del compilatore C2577
ms.date: 11/04/2016
f1_keywords:
- C2577
helpviewer_keywords:
- C2577
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
ms.openlocfilehash: 9e54791070401f334a4dc0650ca2b1bcee5f32a6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208853"
---
# <a name="compiler-error-c2577"></a>Errore del compilatore C2577

' member ': il distruttore/finalizzatore non può avere un tipo restituito

Un distruttore o un finalizzatore non può restituire un valore **`void`** o un altro tipo. Rimuovere l' **`return`** istruzione dalla definizione del distruttore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2577.

```cpp
// C2577.cpp
// compile with: /c
class A {
public:
   A() {}
   ~A(){
      return 0;   // C2577
   }
};
```
