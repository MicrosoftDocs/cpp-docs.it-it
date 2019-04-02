---
title: Errore del compilatore C3830
ms.date: 11/04/2016
f1_keywords:
- C3830
helpviewer_keywords:
- C3830
ms.assetid: c9798f88-5001-4067-9fb1-09957ddc6fa8
ms.openlocfilehash: 25f2b86e21d4672c9e0907c366da17072bafa183
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767561"
---
# <a name="compiler-error-c3830"></a>Errore del compilatore C3830

'type1': non può ereditare da 'type2'. valore tipi possono ereditare solo da classi di interfaccia

Un tipo di valore non può ereditare una classe di base.  Per altre informazioni, vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3830:

```
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
