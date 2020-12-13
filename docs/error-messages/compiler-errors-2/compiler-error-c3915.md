---
description: 'Altre informazioni su: errore del compilatore C3915'
title: Errore del compilatore C3915
ms.date: 11/04/2016
f1_keywords:
- C3915
helpviewer_keywords:
- C3915
ms.assetid: 2b0a5e5f-3aec-4a4b-9157-233031817084
ms.openlocfilehash: c1b2e6fb1dd77c315d29bbd704960963766f8931
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143949"
---
# <a name="compiler-error-c3915"></a>Errore del compilatore C3915

' type ' non ha una proprietà indicizzata predefinita (indicizzatore di classe)

Un tipo non ha una proprietà indicizzata predefinita.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C3915.

```cpp
// C3915.cpp
// compile with: /clr
ref class X {
public:
// uncomment property to resolve this C3915
//   property int default[]
//   {
//      int get(int i)
//      {
//         return 863;
//      }
//   }
};

int main() {
   X^ x = new X;
   System::Console::WriteLine(x[1]);   // C3915
}
```

C3915 può anche verificarsi se si tenta di utilizzare un indicizzatore predefinito nello stesso modulo in cui è stato definito con <xref:System.Reflection.DefaultMemberAttribute> .

L'esempio seguente genera l'C3915.

```cpp
// C3915_b.cpp
// compile with: /clr
using namespace System;

[Reflection::DefaultMember("XXX")]
ref struct A {
   property Double XXX[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
};

ref struct B {
   property Double default[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
};

int main() {
   A ^ mya = gcnew A();
   Console::WriteLine("{0}", mya[3]);   // C3915

   B ^ myb = gcnew B();
   Console::WriteLine("{0}", myb[3]);   // OK
}
```
