---
title: Compilatore avviso (livello 4) C4487 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4487
dev_langs:
- C++
helpviewer_keywords:
- C4487
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ffc1a25d362cad95f2aad43d626e4918955903f5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46135841"
---
# <a name="compiler-warning-level-4-c4487"></a>Avviso del compilatore (livello 4) C4487

'funzione_classe_derivata': corrisponde al metodo non virtuale ereditato 'funzione_classe_base' ma non è contrassegnato 'new' in modo esplicito

Una funzione in una classe derivata ha la stessa firma di una funzione di classe di base non virtuali. C4487 per ricordare che la funzione di classe derivata non sostituisce la funzione di classe di base. Contrassegnare in modo esplicito la funzione di classe derivata come `new` per risolvere il problema.

Per altre informazioni, vedere [new (nuovo slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4487.

```
// C4487.cpp
// compile with: /W4 /clr
using namespace System;
public ref struct B {
   void f() { Console::WriteLine("in B::f"); }
   void g() { Console::WriteLine("in B::g"); }
};

public ref struct D : B {
   void f() { Console::WriteLine("in D::f"); }   // C4487
   void g() new { Console::WriteLine("in D::g"); }   // OK
};

int main() {
   B ^ a = gcnew D;
   // will call base class functions
   a->f();
   a->g();
}
```