---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4637'
title: Avviso del compilatore (livello 3) C4637
ms.date: 11/04/2016
f1_keywords:
- C4637
helpviewer_keywords:
- C4637
ms.assetid: 5fd347c1-2de9-408f-9136-1bf1ff273622
ms.openlocfilehash: 90a9a43ea30b35dabf18f3c300c14f8436bae4a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97303888"
---
# <a name="compiler-warning-level-3-c4637"></a>Avviso del compilatore (livello 3) C4637

Destinazione commento al documento XML: \<include> tag scartato.  reason

La sintassi di un [\<include>](../../build/reference/include-visual-cpp.md) tag non è corretta.

L'esempio seguente genera l'errore C4637:

```cpp
// C4637.cpp
// compile with: /clr /doc /LD /W3
using namespace System;

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <include file="c:\davedata\jtest\xml_include.doc"/>
   // Try the following line instead:
   // /// <include file='xml_include.doc' path='MyDocs/MyMembers/*' />
   void MyMethod() {
   }
};   // C4637
```
