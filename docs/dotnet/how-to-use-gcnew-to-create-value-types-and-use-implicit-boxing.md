---
description: 'Ulteriori informazioni su: procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita'
title: 'Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita'
ms.date: 11/04/2016
helpviewer_keywords:
- gcnew keyword [C++], creating value types
- boxing, implicit
- value types, creating
ms.assetid: ceb48841-d6bd-47be-a167-57f44c961603
ms.openlocfilehash: e58b50be4399cef6a842ce0b02e951617f143e5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210894"
---
# <a name="how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing"></a>Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita

L'uso di [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md) in un tipo valore creerà un tipo di valore boxed, che può quindi essere inserito nell'heap gestito, sottoposta a Garbage Collection.

## <a name="example"></a>Esempio

```cpp
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

[Boxing](../extensions/boxing-cpp-component-extensions.md)
