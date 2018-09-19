---
title: Errore del compilatore C2698 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2698
dev_langs:
- C++
helpviewer_keywords:
- C2698
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c7ca3e7568640aabd2b7960d97ea94a11a1d5d59
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118921"
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