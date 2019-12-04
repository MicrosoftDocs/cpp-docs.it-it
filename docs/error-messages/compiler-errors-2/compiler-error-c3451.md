---
title: Errore del compilatore C3451
ms.date: 11/04/2016
f1_keywords:
- C3451
helpviewer_keywords:
- C3451
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
ms.openlocfilehash: 2e0122dd53ba5318077dd33f22a07492c52db26b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756214"
---
# <a name="compiler-error-c3451"></a>Errore del compilatore C3451

' attribute ': Impossibile applicare l'attributo non gestito a' type '

Un C++ attributo non può essere applicato a un tipo CLR. Per [ C++ ](../../windows/attributes/attributes-alphabetical-reference.md) ulteriori informazioni, vedere informazioni di riferimento sugli attributi.

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: l'attributo [UUID](../../windows/uuid-cpp-attributes.md) non è più consentito in un attributo definito dall'utente tramite la programmazione CLR. In alternativa, utilizzare <xref:System.Runtime.InteropServices.GuidAttribute>.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3451.

```cpp
// C3451.cpp
// compile with: /clr /c
using namespace System;
[ attribute(AttributeTargets::All) ]
public ref struct MyAttr {};

[ MyAttr, helpstring("test") ]   // C3451
// try the following line instead
// [ MyAttr ]
public ref struct ABC {};
```
