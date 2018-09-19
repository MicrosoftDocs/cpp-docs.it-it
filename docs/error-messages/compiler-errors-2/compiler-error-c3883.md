---
title: Errore del compilatore C3883 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3883
dev_langs:
- C++
helpviewer_keywords:
- C3883
ms.assetid: cdd1c1f4-f268-4469-9c62-d52303114b0c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4387eacb4e35c82af5c2617771b8c887dae42c4e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045471"
---
# <a name="compiler-error-c3883"></a>Errore del compilatore C3883

'var': un membro dati statico initonly deve essere inizializzato

Una variabile contrassegnata con [initonly](../../dotnet/initonly-cpp-cli.md) non è stato inizializzato correttamente.

L'esempio seguente genera l'errore C3883:

```
// C3883.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   static int staticConst1;   // C3883
};
```

L'esempio seguente illustra una possibile soluzione:

```
// C3883b.cpp
// compile with: /clr /c
ref struct Y1 {
   initonly
   static int staticConst2 = 0;
};
```

L'esempio seguente viene illustrato come inizializzare in un costruttore statico:

```
// C3883c.cpp
// compile with: /clr /LD
ref struct Y1 {
   initonly
   static int staticConst1;

   static Y1() {
      staticConst1 = 0;
   }
};
```