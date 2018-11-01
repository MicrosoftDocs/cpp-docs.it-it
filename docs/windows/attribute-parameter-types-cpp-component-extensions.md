---
title: Tipi di parametro di attributo (C + c++ /CLI e c++ /CLI CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- custom attributes, parameter types
ms.assetid: d9f127a3-7f08-456f-acc6-256805632712
ms.openlocfilehash: 09a13fa2f8d6db89824262a921adb338b151c995
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599329"
---
# <a name="attribute-parameter-types--ccli-and-ccx"></a>Tipi di parametro di attributo (C + c++ /CLI e c++ /CLI CX)

I valori passati agli attributi devono essere noti al compilatore in fase di compilazione.  I tipi dei parametri dell'attributo possono essere i seguenti:

- **bool**

- **Char**, **unsigned char**

- **short**, **unsigned short**

- **int**, **int senza segno**

- **lungo**, **long senza segno**

- **__int64**, **unsigned __int64**

- **float**, **double**

- **wchar_t**

- `char*` o `wchar_t*` o `System::String*`

- `System::Type ^`

- `System::Object ^`

- **enum**

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

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

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

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

## <a name="see-also"></a>Vedere anche

[Attributi definiti dall'utente](../windows/user-defined-attributes-cpp-component-extensions.md)