---
title: New (nuovo slot in vtable) (C + c++ /CLI e c++ /CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- new keyword [C++]
ms.assetid: 1a9a5704-f02f-46ae-ad65-f0f2b6dbabc3
ms.openlocfilehash: 852538396627a3005fe20a2e66bbb6995842e4a9
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422273"
---
# <a name="new-new-slot-in-vtable--ccli-and-ccx"></a>New (nuovo slot in vtable) (C + c++ /CLI e c++ /CX)

Il **nuovo** parola chiave indica che un membro virtuale verrà assegnato un nuovo slot in vtable.

## <a name="all-runtimes"></a>Tutti i runtime

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

Non è supportato in Windows Runtime.

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

In un `/clr` compilazione **nuovi** indica che un membro virtuale verrà assegnato un nuovo slot in vtable; che la funzione non esegue l'override di un metodo della classe base.

**nuovo** fa sì che il modificatore newslot da aggiungere per il linguaggio intermedio per la funzione.  Per ulteriori informazioni su newslot, vedere:

- <xref:System.Reflection.MethodInfo.GetBaseDefinition?displayProperty=nameWithType>

- <xref:System.Reflection.MethodAttributes?displayProperty=nameWithType>

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente mostra l'effetto del **nuovo**.

```cpp
// newslot.cpp
// compile with: /clr
ref class C {
public:
   virtual void f() {
      System::Console::WriteLine("C::f() called");
   }

   virtual void g() {
      System::Console::WriteLine("C::g() called");
   }
};

ref class D : public C {
public:
   virtual void f() new {
      System::Console::WriteLine("D::f() called");
   }

   virtual void g() override {
      System::Console::WriteLine("D::g() called");
   }
};

ref class E : public D {
public:
   virtual void f() override {
      System::Console::WriteLine("E::f() called");
   }
};

int main() {
   D^ d = gcnew D;
   C^ c = gcnew D;

   c->f();   // calls C::f
   d->f();   // calls D::f

   c->g();   // calls D::g
   d->g();   // calls D::g

   D ^ e = gcnew E;
   e->f();   // calls E::f
}
```

```Output
C::f() called

D::f() called

D::g() called

D::g() called

E::f() called
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)<br/>

[Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)