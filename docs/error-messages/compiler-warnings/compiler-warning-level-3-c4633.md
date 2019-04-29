---
title: Avviso del compilatore (livello 3) C4633
ms.date: 11/04/2016
f1_keywords:
- C4633
helpviewer_keywords:
- C4633
ms.assetid: 6d76f268-ba8c-448b-8e83-b903a18b583b
ms.openlocfilehash: 039489a804bb5d2bd17186b22bcfb8bea644c377
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401735"
---
# <a name="compiler-warning-level-3-c4633"></a>Avviso del compilatore (livello 3) C4633

Destinazione commento documento XML: errore: motivo

Passare un nome per il [ \<param >](../../build/reference/param-visual-cpp.md) tag non è stato trovato dal compilatore.

L'esempio seguente genera l'errore C4633:

```
// C4633.cpp
// compile with: /clr /doc /LD /W3

/// Text for class MyClass.
public ref class MyClass {
   // C4633 remove line for Int3
   /// <param name="Int1">Used to indicate status.</param>
   /// <param name="Int3">Used to indicate status.</param>
   void MyMethod(int Int1) {
      Int1 = 0;
      Int1++;
   }
};
```