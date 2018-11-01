---
title: Errore del compilatore C3137
ms.date: 11/04/2016
f1_keywords:
- C3137
helpviewer_keywords:
- C3137
ms.assetid: 70bb1313-2e87-43ed-a0d8-33fa6ff475e4
ms.openlocfilehash: c29aecb798b13233f10ad2808d1be530b25d4b54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438014"
---
# <a name="compiler-error-c3137"></a>Errore del compilatore C3137

'property': non è possibile inizializzare una proprietà

Ad esempio, non è possibile inizializzare una proprietà nell'elenco di inizializzazione del costruttore.

Nell'esempio seguente genera l'errore C3137:

```
// C3137.cpp
// compile with: /clr /c
ref class CMyClass {
public:
   property int Size {
      int get() {
         return 0;
      }
      void set( int i ) {}
   }

   CMyClass() : Size( 1 ) {   // C3137
      // to resolve this C3137, remove the initializer from the
      // ctor declaration and perform the assignment as follows
      // Size = 1;
   }
};
```
