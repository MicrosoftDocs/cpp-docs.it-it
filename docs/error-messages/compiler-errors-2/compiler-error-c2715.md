---
description: 'Altre informazioni su: errore del compilatore C2715'
title: Errore del compilatore C2715
ms.date: 11/04/2016
f1_keywords:
- C2715
helpviewer_keywords:
- C2715
ms.assetid: c81567a7-5b65-468f-aaf9-835f91e468e4
ms.openlocfilehash: 6575e5b678189834a035f9e236b3d768dc7ab368
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320808"
---
# <a name="compiler-error-c2715"></a>Errore del compilatore C2715

' type ': non è possibile generare o intercettare questo tipo

I tipi di valore non sono argomenti validi quando si utilizza la gestione delle eccezioni nel codice gestito. per ulteriori informazioni, vedere [gestione delle eccezioni](../../extensions/exception-handling-cpp-component-extensions.md) .

```cpp
// C2715a.cpp
// compile with: /clr
using namespace System;

value struct V {
   int i;
};

void f1() {
   V v;
   v.i = 10;
   throw v;   // C2715
   // try the following line instead
   // throw ((V^)v);
}

int main() {
   try {
      f1();
   }

   catch(V v) { if ( v.i == 10 ) {   // C2715
   // try the following line instead
   // catch(V^ pv) { if ( pv->i == 10 ) {
         Console::WriteLine("caught 10 - looks OK");
      }
      else {
         Console::WriteLine("catch looks bad");
      }
   }
   catch(...) {
      Console::WriteLine("catch looks REALLY bad");
   }
}
```
