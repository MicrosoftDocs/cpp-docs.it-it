---
title: Errore del compilatore C3283
ms.date: 11/04/2016
f1_keywords:
- C3283
helpviewer_keywords:
- C3283
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
ms.openlocfilehash: 593b04b8593e261aa1980ada7693300b52a869c5
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59777406"
---
# <a name="compiler-error-c3283"></a>Errore del compilatore C3283

'type': un'interfaccia non può avere un costruttore di istanza

Un' [interfaccia](../../extensions/interface-class-cpp-component-extensions.md) CLR non può avere un costruttore di istanze.  È consentito un costruttore statico.

L'esempio seguente genera l'errore C3283:

```
// C3283.cpp
// compile with: /clr
interface class I {
   I();   // C3283
};
```

Possibile soluzione:

```
// C3283b.cpp
// compile with: /clr /c
interface class I {
   static I(){}
};
```