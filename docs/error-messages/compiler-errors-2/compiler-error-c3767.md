---
description: "Altre informazioni su: errore del compilatore l'errore C3767"
title: Errore del compilatore C3767
ms.date: 11/04/2016
f1_keywords:
- C3767
helpviewer_keywords:
- C3767
ms.assetid: 5247cdcd-639c-4527-bd37-37e74c4e8fab
ms.openlocfilehash: 6d8780dde6ba6d831b1e47c174ef3609086c46ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291844"
---
# <a name="compiler-error-c3767"></a>Errore del compilatore C3767

funzione o funzioni candidate ' Function ' non accessibili

Una funzione friend definita in una classe non deve essere trattata come se fosse stata definita e dichiarata nell'ambito dello spazio dei nomi globale. Può tuttavia essere trovato dalla ricerca dipendente dall'argomento.

L'errore C3767 può anche essere causato da una modifica di rilievo: i tipi nativi sono ora privati per impostazione predefinita in una compilazione **/CLR** . Per ulteriori informazioni, vedere [visibilità del tipo](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'l'errore C3767:

```cpp
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

L'esempio seguente genera l'l'errore C3767:

```cpp
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
