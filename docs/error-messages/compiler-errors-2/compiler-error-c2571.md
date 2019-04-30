---
title: Errore del compilatore C2571
ms.date: 11/04/2016
f1_keywords:
- C2571
helpviewer_keywords:
- C2571
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
ms.openlocfilehash: d7d4898e5f0b55c50a4c18cef053cc150394d7e0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408580"
---
# <a name="compiler-error-c2571"></a>Errore del compilatore C2571

'function': funzione virtuale non è consentita nell'unione 'union'

Un'unione è dichiarata con una funzione virtuale. È possibile dichiarare una funzione virtuale solo in una classe o struttura.  Possibili risoluzioni:

1. Modificare l'unione in una classe o struttura.

1. Rendere la funzione non virtuale.

L'esempio seguente genera l'errore C2571:

```
// C2571.cpp
// compile with: /c
union A {
   virtual void func1();   // C2571
   void func2();   // OK
};
```