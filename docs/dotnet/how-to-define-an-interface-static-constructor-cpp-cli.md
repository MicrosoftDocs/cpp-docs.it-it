---
title: 'Procedura: Definire un costruttore statico di interfaccia (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors [C++]
- static constructors, interface
- interface static constructor
ms.assetid: 1f031cb2-e94f-43dc-819b-44cf2faaaa49
ms.openlocfilehash: 326b315e1e6c4defbef3ab6e487c78635e0aa50f
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58772644"
---
# <a name="how-to-define-an-interface-static-constructor-ccli"></a>Procedura: Definire un costruttore statico di interfaccia (C++/CLI)

Un'interfaccia può avere un costruttore statico, che può essere utilizzato per inizializzare i membri dati statici.  Un costruttore statico verrà chiamato al massimo una volta e verrà chiamato prima del primo accesso a un membro di interfaccia statico.

## <a name="example"></a>Esempio

```
// mcppv2_interface_class2.cpp
// compile with: /clr
using namespace System;

interface struct MyInterface {
   static int i;
   static void Test() {
      Console::WriteLine(i);
   }

   static MyInterface() {
      Console::WriteLine("in MyInterface static constructor");
      i = 99;
   }
};

ref class MyClass : public MyInterface {};

int main() {
   MyInterface::Test();
   MyClass::MyInterface::Test();

   MyInterface ^ mi = gcnew MyClass;
   mi->Test();
}
```

```Output
in MyInterface static constructor
99
99
99
```

## <a name="see-also"></a>Vedere anche

[interface class](../extensions/interface-class-cpp-component-extensions.md)
