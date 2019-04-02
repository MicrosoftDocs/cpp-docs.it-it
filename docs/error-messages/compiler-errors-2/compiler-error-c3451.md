---
title: Errore del compilatore C3451
ms.date: 11/04/2016
f1_keywords:
- C3451
helpviewer_keywords:
- C3451
ms.assetid: a4897a69-e3e7-40bb-bb1c-598644904012
ms.openlocfilehash: 5ef4352101541391a7cda88471fbaa6aeae4ffb4
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770369"
---
# <a name="compiler-error-c3451"></a>Errore del compilatore C3451

'attribute': non è possibile applicare l'attributo non gestito per 'type'

Un attributo di C++ non può essere applicato a un tipo CLR. Visualizzare [riferimento agli attributi di C++](../../windows/attributes/attributes-alphabetical-reference.md) per altre informazioni.

Per altre informazioni, vedere [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: il [uuid](../../windows/uuid-cpp-attributes.md) attributo non è più consentito su un attributo definito dall'utente tramite la programmazione CLR. In alternativa, utilizzare <xref:System.Runtime.InteropServices.GuidAttribute>.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3451.

```
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