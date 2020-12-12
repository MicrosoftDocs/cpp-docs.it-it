---
description: 'Altre informazioni su: errore del compilatore C2514'
title: Errore del compilatore C2514
ms.date: 11/04/2016
f1_keywords:
- C2514
helpviewer_keywords:
- C2514
ms.assetid: 4b7085e5-6714-4261-80b7-bc72e64ab3e8
ms.openlocfilehash: 3999a5a65df08142b68e7257b257d39d1b5245e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212818"
---
# <a name="compiler-error-c2514"></a>Errore del compilatore C2514

' Class ': la classe non ha costruttori

La classe, la struttura o l'Unione non dispone di un costruttore con un elenco di parametri corrispondente ai parametri usati per crearne un'istanza.

Una classe deve essere dichiarata completamente prima di poterne creare un'istanza.

L'esempio seguente genera l'C2514:

```cpp
// C2514.cpp
// compile with: /c
class f;

class g {
public:
    g (int x);
};

class fmaker {
   f *func1() {
      return new f(2);   // C2514
   }

   g *func2() {
      return new g(2);   // OK
   }
};
```
