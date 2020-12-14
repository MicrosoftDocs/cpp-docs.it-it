---
description: 'Altre informazioni su: errore del compilatore C3450'
title: Errore del compilatore C3450
ms.date: 11/04/2016
f1_keywords:
- C3450
helpviewer_keywords:
- C3450
ms.assetid: 78892cf7-0b82-4589-90d0-e06666247003
ms.openlocfilehash: e56382a3f71b59fee42b6a545318cf3846e1a1f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316050"
---
# <a name="compiler-error-c3450"></a>Errore del compilatore C3450

'type': non è un attributo; impossibile specificare [System::AttributeUsageAttribute] o [Windows::Foundation::Metadata::AttributeUsageAttribute]

Un attributo gestito definito dall'utente deve ereditare da <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>. Un attributo di Windows Runtime deve essere definito nello spazio dei nomi `Windows::Foundation::Metadata`.

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3450 e mostra come risolverlo.

```cpp
// C3450.cpp
// compile with: /clr
// C3450 expected
using namespace System;
using namespace System::Security;
using namespace System::Security::Permissions;

public ref class MyClass {};

class MyClass2 {};

[attribute(AttributeTargets::All)]
ref struct AtClass {
   AtClass(Type ^) {}
};

[attribute(AttributeTargets::All)]
ref struct AtClass2 {
   AtClass2() {}
};

// Apply the AtClass and AtClass2 attributes to class B
[AtClass(MyClass::typeid), AtClass2]
[AttributeUsage(AttributeTargets::All)]
// Delete the following line to resolve.
ref class B {};
// Uncomment the following line to resolve.
// ref class B : Attribute {};
```
