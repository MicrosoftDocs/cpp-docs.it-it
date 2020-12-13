---
description: 'Altre informazioni su: destinazioni degli attributi (C++/CLI e C++/CX)'
title: Destinazioni degli attributi (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- custom attributes, targets
ms.assetid: b4e6e224-da77-4520-b6e6-b96846e0ebc1
ms.openlocfilehash: 2c14f80c277feb7fc540eed8735a8a78e1cb1907
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177029"
---
# <a name="attribute-targets-ccli-and-ccx"></a>Destinazioni degli attributi (C++/CLI e C++/CX)

Gli specificatori di utilizzo degli attributi consentono di specificare le destinazioni degli attributi.  Ogni attributo viene definito per essere applicato a determinati elementi del linguaggio. Ad esempio, un attributo potrebbe essere definito per essere applicato solo alle classi e agli struct.  Nell'elenco seguente vengono mostrati i possibili elementi sintattici per cui può essere utilizzato un attributo personalizzato. È possibile utilizzare combinazioni di questi valori (tramite l'OR logico).

Per specificare la destinazione dell'attributo, passare uno o più enumeratori <xref:System.AttributeTargets> a <xref:System.AttributeUsageAttribute> durante la definizione dell'attributo.

Di seguito è riportato un elenco di destinazioni degli attributi valide:

- `All` (si applica a tutti i costrutti)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::All)]
    ref class Attr : public Attribute {};

    [assembly:Attr];
    ```

- `Assembly` (si applica a un assembly nel suo complesso)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Assembly)]
    ref class Attr : public Attribute {};

    [assembly:Attr];
    ```

- `Module` (si applica a un modulo nel suo complesso)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Module)]
    ref class Attr : public Attribute {};

    [module:Attr];
    ```

- `Class`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Class)]
    ref class Attr : public System::Attribute {};

    [Attr]   // same as [class:Attr]
    ref class MyClass {};
    ```

- `Struct`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Struct)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [struct:Attr]
    value struct MyStruct{};
    ```

- `enum`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Enum)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [enum:Attr]
    enum struct MyEnum{e, d};
    ```

- `Constructor`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Constructor)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] MyStruct(){}   // same as [constructor:Attr]
    };
    ```

- `Method`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Method)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] void Test(){}   // same as [method:Attr]
    };
    ```

- `Property`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Property)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] property int Test;   // same as [property:Attr]
    };
    ```

- `Field`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Field)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] int Test;   // same as [field:Attr]
    };
    ```

- `Event`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Event)]
    ref class Attr : public Attribute {};

    delegate void ClickEventHandler(int, double);

    ref struct MyStruct{
    [Attr] event ClickEventHandler^ OnClick;   // same as [event:Attr]
    };
    ```

- `Interface`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Interface)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [event:Attr]
    interface struct MyStruct{};
    ```

- `Parameter`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Parameter)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    void Test([Attr] int i);
    void Test2([parameter:Attr] int i);
    };
    ```

- `Delegate`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Delegate)]
    ref class Attr : public Attribute {};

    [Attr] delegate void Test();
    [delegate:Attr] delegate void Test2();
    ```

- `ReturnValue`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::ReturnValue)]
    ref class Attr : public Attribute {};

    ref struct MyStruct {
    // Note required specifier
    [returnvalue:Attr] int Test() { return 0; }
    };
    ```

In genere, un attributo precede direttamente l'elemento del linguaggio a cui si applica. In alcuni casi, tuttavia, la posizione di un attributo non è sufficiente per determinare la relativa destinazione prevista. Prendere in considerazione questo esempio:

```cpp
[Attr] int MyFn(double x)...
```

Da un punto di vista sintattico, non è possibile dire se l'attributo è progettato per essere applicato al metodo o al valore restituito del metodo (in questo caso, è impostato in modo predefinito sul metodo). In questi casi, è possibile utilizzare un identificatore di utilizzo degli attributi. Ad esempio, per fare in modo che l'attributo si applichi al valore restituito, utilizzare l'identificatore `returnvalue` come riportato di seguito:

```cpp
[returnvalue:Attr] int MyFn(double x)... // applies to return value
```

Gli identificatori di utilizzo degli attributi sono obbligatori nelle situazioni seguenti:

- Per specificare un attributo a livello di modulo o di assembly.

- Per specificare che un attributo viene applicato al valore restituito di un metodo e non al metodo:

    ```cpp
    [method:Attr] int MyFn(double x)...     // Attr applies to method
    [returnvalue:Attr] int MyFn(double x)...// Attr applies to return value
    [Attr] int MyFn(double x)...            // default: method
    ```

- Per specificare che un attributo viene applicato alla funzione di accesso di una proprietà e non alla proprietà:

    ```cpp
    [method:MyAttr(123)] property int Property()
    [property:MyAttr(123)] property int Property()
    [MyAttr(123)] property int get_MyPropy() // default: property
    ```

- Per specificare che un attributo viene applicato alla funzione di accesso di un evento e non all'evento:

    ```cpp
    delegate void MyDel();
    ref struct X {
       [field:MyAttr(123)] event MyDel* MyEvent;   //field
       [event:MyAttr(123)] event MyDel* MyEvent;   //event
       [MyAttr(123)] event MyDel* MyEvent;   // default: event
    }
    ```

Un identificatore di utilizzo degli attributi si applica solo all'attributo immediatamente successivo, cioè

```cpp
[returnvalue:Attr1, Attr2]
```

è diverso da

```cpp
[returnvalue:Attr1, returnvalue:Attr2]
```

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

In questo esempio viene illustrato come specificare più destinazioni.

### <a name="code"></a>Codice

```cpp
using namespace System;
[AttributeUsage(AttributeTargets::Class | AttributeTargets::Struct, AllowMultiple = true )]
ref struct Attr : public Attribute {
   Attr(bool i){}
   Attr(){}
};

[Attr]
ref class MyClass {};

[Attr]
[Attr(true)]
value struct MyStruct {};
```

## <a name="see-also"></a>Vedi anche

[Attributi definiti dall'utente](user-defined-attributes-cpp-component-extensions.md)
