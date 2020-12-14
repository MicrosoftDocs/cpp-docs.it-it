---
description: 'Altre informazioni su: errore del compilatore C3451'
title: Errore del compilatore C3451
ms.date: 11/04/2016
f1_keywords:
- C3451
helpviewer_keywords:
- C3451
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
ms.openlocfilehash: a5cc37bf273474553c375edc940d160f0c1d023d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316010"
---
# <a name="compiler-error-c3451"></a>Errore del compilatore C3451

' attribute ': Impossibile applicare l'attributo non gestito a' type '

Un attributo C++ non può essere applicato a un tipo CLR. Per ulteriori informazioni, vedere [riferimento agli attributi C++](../../windows/attributes/attributes-alphabetical-reference.md) .

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: l'attributo [UUID](../../windows/attributes/uuid-cpp-attributes.md) non è più consentito in un attributo definito dall'utente tramite la programmazione CLR. Usare invece <xref:System.Runtime.InteropServices.GuidAttribute>.

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
