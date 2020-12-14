---
description: 'Altre informazioni su: errore del compilatore C3830'
title: Errore del compilatore C3830
ms.date: 11/04/2016
f1_keywords:
- C3830
helpviewer_keywords:
- C3830
ms.assetid: c9798f88-5001-4067-9fb1-09957ddc6fa8
ms.openlocfilehash: 6d5dff2b45a79d3156533caf8020497f422d2474
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249230"
---
# <a name="compiler-error-c3830"></a>Errore del compilatore C3830

' tipo1': Impossibile ereditare da' tipo2'. i tipi di valore possono ereditare solo da classi di interfaccia

Un tipo di valore non può ereditare una classe base.  Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3830:

```cpp
// C3830a.cpp
// compile with: /clr /c
public value struct MyStruct4 {
   int i;
};

public value class MyClass : public MyStruct4 {};   // C3830

// OK
public interface struct MyInterface4 {
   void i();
};

public value class MyClass2 : public MyInterface4 {
public:
   virtual void i(){}
};
```
