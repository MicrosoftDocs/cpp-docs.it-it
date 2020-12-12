---
description: 'Altre informazioni su: classe di interfaccia (C++/CLI e C++/CX)'
title: interface class (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- interface_CPP
helpviewer_keywords:
- interface class keyword
- interface struct keyword
ms.assetid: 3ccea701-f50b-4da7-ad6b-f0ee1203e2b9
ms.openlocfilehash: 8d6fd1eda0ddaaf6ab995e09ad1d84f78fcc91be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119019"
---
# <a name="interface-class--ccli-and-ccx"></a>interface class (C++/CLI e C++/CX)

Dichiara un'interfaccia.  Per informazioni sulle interfacce native, vedere [__interface](../cpp/interface.md).

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

```cpp
interface_access interface class name : inherit_access base_interface {};
interface_access interface struct name : inherit_access base_interface {};
```

### <a name="parameters"></a>Parametri

*interface_access*<br/>
Accessibilità di un'interfaccia all'esterno dell'assembly.  I valori possibili sono **`public`** e **`private`** .  **`private`** è il valore predefinito. Le interfacce annidate non possono avere un identificatore *interface_access*.

*nome*<br/>
Nome dell'interfaccia.

*inherit_access*<br/>
Accessibilità di *base_interface*.  L'unica accessibilità consentita per un'interfaccia di base è **`public`** (impostazione predefinita).

*base_interface*<br/>
(Facoltativo) Interfaccia di base per l'oggetto *name* dell'interfaccia.

### <a name="remarks"></a>Commenti

**interface struct** è equivalente a **interface class**.

Un'interfaccia può contenere dichiarazioni di funzioni, eventi e proprietà.  Tutti i membri di interfaccia hanno accessibilità pubblica. Un'interfaccia può anche contenere proprietà, funzioni, eventi e membri dati statici e questi membri statici devono essere definiti nell'interfaccia.

Un'interfaccia definisce come può essere implementata una classe. Un'interfaccia non è una classe e le classi possono solo implementare le interfacce. Quando una classe definisce una funzione dichiarata in un'interfaccia, la funzione viene implementata e non ne viene eseguito l'override. La ricerca del nome non include quindi i membri di interfaccia.

Qualsiasi classe o struct che deriva da un'interfaccia deve implementarne tutti i membri dell'interfaccia. Quando si implementa l'oggetto *name* dell'interfaccia, è necessario implementare anche le interfacce nell'elenco `base_interface`.

Per altre informazioni, vedere:

- [Costruttore statico di interfaccia](../dotnet/how-to-define-an-interface-static-constructor-cpp-cli.md)

- [Interfacce generiche (C++/CLI)](generic-interfaces-visual-cpp.md)

Per informazioni su altri tipi CLR, vedere [Classi e struct](classes-and-structs-cpp-component-extensions.md).

È possibile rilevare in fase di compilazione se un tipo è un'interfaccia con `__is_interface_class(type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

Nell'ambiente di sviluppo è possibile ottenere la Guida sensibile al contesto per queste parole chiave evidenziando la parola chiave, **`interface class`** ad esempio, e premendo F1.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Commenti

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Commenti

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio di codice seguente illustra in che modo un'interfaccia può definire il comportamento di una funzione clock.

```cpp
// mcppv2_interface_class.cpp
// compile with: /clr
using namespace System;

public delegate void ClickEventHandler(int, double);

// define interface with nested interface
public interface class Interface_A {
   void Function_1();

   interface class Interface_Nested_A {
      void Function_2();
   };
};

// interface with a base interface
public interface class Interface_B : Interface_A {
   property int Property_Block;
   event ClickEventHandler^ OnClick;
   static void Function_3() { Console::WriteLine("in Function_3"); }
};

// implement nested interface
public ref class MyClass : public Interface_A::Interface_Nested_A {
public:
   virtual void Function_2() { Console::WriteLine("in Function_2"); }
};

// implement interface and base interface
public ref class MyClass2 : public Interface_B {
private:
   int MyInt;

public:
   // implement non-static function
   virtual void Function_1() { Console::WriteLine("in Function_1"); }

   // implement property
   property int Property_Block {
      virtual int get() { return MyInt; }
      virtual void set(int value) { MyInt = value; }
   }
   // implement event
   virtual event ClickEventHandler^ OnClick;

   void FireEvents() {
      OnClick(7, 3.14159);
   }
};

// class that defines method called when event occurs
ref class EventReceiver {
public:
   void OnMyClick(int i, double d) {
      Console::WriteLine("OnClick: {0}, {1}", i, d);
   }
};

int main() {
   // call static function in an interface
   Interface_B::Function_3();

   // instantiate class that implements nested interface
   MyClass ^ x = gcnew MyClass;
   x->Function_2();

   // instantiate class that implements interface with base interface
   MyClass2 ^ y = gcnew MyClass2;
   y->Function_1();
   y->Property_Block = 8;
   Console::WriteLine(y->Property_Block);

   EventReceiver^ MyEventReceiver = gcnew EventReceiver();

   // hook handler to event
   y->OnClick += gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);

   // invoke events
   y->FireEvents();

   // unhook handler to event
   y->OnClick -= gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);

   // call implemented function via interface handle
   Interface_A^ hi = gcnew MyClass2();
   hi->Function_1();
}
```

```Output
in Function_3

in Function_2

in Function_1

8

OnClick: 7, 3.14159

in Function_1
```

L'esempio di codice seguente mostra due modi per implementare le funzioni con la stessa firma dichiarata in più interfacce e dove queste interfacce vengono usate da una classe.

```cpp
// mcppv2_interface_class_2.cpp
// compile with: /clr /c
interface class I {
   void Test();
   void Test2();
};

interface class J : I {
   void Test();
   void Test2();
};

ref struct R : I, J {
   // satisfies the requirement to implement Test in both interfaces
   virtual void Test() {}

   // implement both interface functions with explicit overrides
   virtual void A() = I::Test2 {}
   virtual void B() = J::Test2 {}
};
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
