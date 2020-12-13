---
description: 'Altre informazioni su: tipi di parametri degli attributi (C++/CLI e C++/CX)'
title: Tipi di parametri degli attributi (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- custom attributes, parameter types
ms.assetid: d9f127a3-7f08-456f-acc6-256805632712
ms.openlocfilehash: 7f2d5dd2def4e61d5b2b0406cc193bf818bc3d9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177094"
---
# <a name="attribute-parameter-types--ccli-and-ccx"></a>Tipi di parametri degli attributi (C++/CLI e C++/CX)

I valori passati agli attributi devono essere noti al compilatore in fase di compilazione.  I tipi dei parametri dell'attributo possono essere i seguenti:

- **`bool`**

- **`char`**, **`unsigned char`**

- **`short`**, **`unsigned short`**

- **`int`**, **`unsigned int`**

- **`long`**, **`unsigned long`**

- **`__int64`**, **__int64 senza segno**

- **`float`**, **`double`**

- **`wchar_t`**

- **`char*`** o `wchar_t*` o `System::String*`

- `System::Type ^`

- `System::Object ^`

- **`enum`**

## <a name="example-attribute-parameter-types"></a>Esempio: tipi di parametro di attributo

### <a name="code"></a>Codice

```cpp
// attribute_parameter_types.cpp
// compile with: /clr /c
using namespace System;
ref struct AStruct {};

[AttributeUsage(AttributeTargets::ReturnValue)]
ref struct Attr : public Attribute {
   Attr(AStruct ^ i){}
   Attr(bool i){}
   Attr(){}
};

ref struct MyStruct {
   static AStruct ^ x = gcnew AStruct;
   [returnvalue:Attr(x)] int Test() { return 0; }   // C3104
   [returnvalue:Attr] int Test2() { return 0; }   // OK
   [returnvalue:Attr(true)] int Test3() { return 0; }   // OK
};
```

## <a name="example-unnamed-arguments-precede-named-arguments"></a>Esempio: gli argomenti senza nome precedono gli argomenti denominati

### <a name="description"></a>Description

Quando si specificano gli attributi, tutti gli argomenti senza nome (posizionali) devono precedere quelli con nome.

### <a name="code"></a>Codice

```cpp
// extending_metadata_c.cpp
// compile with: /clr /c
using namespace System;
[AttributeUsage(AttributeTargets::Class)]
ref class MyAttr : public Attribute {
public:
   MyAttr() {}
   MyAttr(int i) {}
   property int Priority;
   property int Version;
};

[MyAttr]
ref class ClassA {};   // No arguments

[MyAttr(Priority = 1)]
ref class ClassB {};   // Named argument

[MyAttr(123)]
ref class ClassC {};   // Positional argument

[MyAttr(123, Version = 1)]
ref class ClassD {};   // Positional and named
```

## <a name="example-one-dimensional-array-attribute-parameter"></a>Esempio: parametro dell'attributo di matrice unidimensionale

### <a name="description"></a>Description

I parametri dell'attributo possono essere matrici unidimensionali dei tipi precedenti.

### <a name="code"></a>Codice

```cpp
// extending_metadata_d.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::Class)]
public ref struct ABC : public Attribute {
   ABC(array<int>^){}
   array<double> ^ param;
};

[ABC( gcnew array<int> {1,2,3}, param = gcnew array<double>{2.71, 3.14})]
ref struct AStruct{};
```

## <a name="see-also"></a>Vedi anche

[Attributi definiti dall'utente](user-defined-attributes-cpp-component-extensions.md)
