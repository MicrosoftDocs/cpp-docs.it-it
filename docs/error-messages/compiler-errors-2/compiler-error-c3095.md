---
title: Errore del compilatore C3095
ms.date: 11/04/2016
f1_keywords:
- C3095
helpviewer_keywords:
- C3095
ms.assetid: cde725be-0936-40f6-9e57-e1d7d0710f83
ms.openlocfilehash: 1630def4fb2b22c948b3a33b081227d91351bf35
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756825"
---
# <a name="compiler-error-c3095"></a>Errore del compilatore C3095

'attribute': l'attributo non può essere ripetuto

Alcuni attributi vengono dichiarati in modo che non sia possibile applicare più occorrenze dell'attributo a una destinazione.

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3095.

```cpp
// C3095.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All, AllowMultiple=false)]
public ref class Attr : public Attribute {
public:
   Attr(int t) : m_t(t) {}
   const int m_t;
};

[AttributeUsage(AttributeTargets::All, AllowMultiple=true)]
public ref class Attr2 : public Attribute {
public:
   Attr2(int t) : m_t(t) {}
   const int m_t;
};

[Attr(10)]   // C3095
[Attr(11)]
ref class A {};

[Attr2(10)]   // OK
[Attr2(11)]
ref class B {};
```
