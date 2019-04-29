---
title: Errore del compilatore C2698
ms.date: 11/04/2016
f1_keywords:
- C2698
helpviewer_keywords:
- C2698
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
ms.openlocfilehash: f643b7d8c035b4d1d7d8806feb5b121cf76d7796
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367577"
---
# <a name="compiler-error-c2698"></a>Errore del compilatore C2698

la dichiarazione using per ' dichiarazione 1' non può coesistere con la dichiarazione using per ' dichiarazione 2'

Dopo aver creato un [dichiarazione using](../../cpp/using-declaration.md) per un membro, dati qualsiasi tramite dichiarazione nello stesso ambito che usa lo stesso nome non è consentito, perché solo le funzioni possono essere sottoposti a overload.

L'esempio seguente genera l'errore C2698:

```
// C2698.cpp
struct A {
   int x;
};

struct B {
   int x;
};

struct C : A, B {
   using A::x;
   using B::x;   // C2698
}
```