---
title: Errore del compilatore C3767 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3767
dev_langs:
- C++
helpviewer_keywords:
- C3767
ms.assetid: 5247cdcd-639c-4527-bd37-37e74c4e8fab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e4e5f73016060ccc17dfe0218d8b518b2f5dbdbd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081442"
---
# <a name="compiler-error-c3767"></a>Errore del compilatore C3767

funzione o funzioni candidate 'function' non è accessibile

Funzioni friend definite in una classe non deve essere considerata come se fosse definito e dichiarata nell'ambito dello spazio dei nomi globale. È possibile, tuttavia essere trovato dalla ricerca dipendente dall'argomento.

L'errore C3767 può anche essere causato da una modifica di rilievo: i tipi nativi sono ora privati per impostazione predefinita in un **/clr** compilazione, vedere [digitare visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3767:

```
// C3767a.cpp
// compile with: /clr
using namespace System;
public delegate void TestDel();

public ref class MyClass {
public:
   static event TestDel^ MyClass_Event;
};

public ref class MyClass2 : public MyClass {
public:
   void Test() {
      MyClass^ patient = gcnew MyClass;
      patient->MyClass_Event();
    }
};

int main() {
   MyClass^ x = gcnew MyClass;
   x->MyClass_Event();   // C3767

   // OK
   MyClass2^ y = gcnew MyClass2();
   y->Test();
};
```

L'esempio seguente genera l'errore C3767:

```
// C3767c.cpp
// compile with: /clr /c

ref class Base  {
protected:
   void Method() {
      System::Console::WriteLine("protected");
   }
};

ref class Der : public Base {
   void Method() {
      ((Base^)this)->Method();   // C3767
      // try the following line instead
      // Base::Method();
   }
};
```

