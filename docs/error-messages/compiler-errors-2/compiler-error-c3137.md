---
title: Errore del compilatore C3137
ms.date: 11/04/2016
f1_keywords:
- C3137
helpviewer_keywords:
- C3137
ms.assetid: 70bb1313-2e87-43ed-a0d8-33fa6ff475e4
ms.openlocfilehash: 43c006a5be624d95c4d86bb97819c7ec5834e20d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761286"
---
# <a name="compiler-error-c3137"></a>Errore del compilatore C3137

' Property ': Impossibile inizializzare una proprietà

Una proprietà non può essere inizializzata, ad esempio, nell'elenco di inizializzazione di un costruttore.

L'esempio seguente genera l'C3137:

```cpp
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
