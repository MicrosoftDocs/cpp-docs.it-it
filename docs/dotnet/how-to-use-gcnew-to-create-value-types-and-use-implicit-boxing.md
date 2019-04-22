---
title: 'Procedura: Utilizzare gcnew per creare tipi di valore e utilizzare la conversione Boxing implicita'
ms.date: 11/04/2016
helpviewer_keywords:
- gcnew keyword [C++], creating value types
- boxing, implicit
- value types, creating
ms.assetid: ceb48841-d6bd-47be-a167-57f44c961603
ms.openlocfilehash: c67f8e0b9511f4ed1610e72e4a7df41c949b1d27
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58770806"
---
# <a name="how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing"></a>Procedura: Utilizzare gcnew per creare tipi di valore e utilizzare la conversione Boxing implicita

Usando [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md) su un valore di tipo creerà un tipo di valore boxed, che quindi può essere inserito nell'heap gestito e sottoposto a garbage collection.

## <a name="example"></a>Esempio

```
// vcmcppv2_explicit_boxing4.cpp
// compile with: /clr
public value class V {
public:
   int m_i;
   V(int i) : m_i(i) {}
};

public ref struct TC {
   void do_test(V^ v) {
      if (v != nullptr)
         ;
      else
         ;
   }
};

int main() {
   V^ v = gcnew V(42);
   TC^ tc = gcnew TC;
   tc->do_test(v);
}
```

## <a name="see-also"></a>Vedere anche

[Conversione boxing](../extensions/boxing-cpp-component-extensions.md)
