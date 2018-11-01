---
title: Errore del compilatore C3342
ms.date: 11/04/2016
f1_keywords:
- C3342
helpviewer_keywords:
- C3342
ms.assetid: 5c6d784f-bebe-4f7e-8615-44ca6f78bfba
ms.openlocfilehash: fe95b1ac194e7eef4db04d6ba970505b99021285
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438403"
---
# <a name="compiler-error-c3342"></a>Errore del compilatore C3342

'attribute': attributo ambiguo

Il compilatore ha rilevato più di una definizione di un attributo.

Un attributo è stato definito più volte.

Per altre informazioni, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3342.

```
// C3342.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Reflection;

[AttributeUsage(AttributeTargets::All)]
public ref class XAttribute : public  Attribute {};

[AttributeUsage(AttributeTargets::All)]
public ref class X : public Attribute {};

[X]   // C3342 could refer to X or XAttribute
// try the following line instead
// [XAttribute]
public ref class Class4 {};
```