---
title: Errore del compilatore C2523
ms.date: 11/04/2016
f1_keywords:
- C2523
helpviewer_keywords:
- C2523
ms.assetid: 7951b700-8f37-45a0-beb4-a79ae0ced72e
ms.openlocfilehash: 88a55a469fb8bc08d2ae73209c2e98a99dbc1df0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482018"
---
# <a name="compiler-error-c2523"></a>Errore del compilatore C2523

' classe:: ~ identifier': mancata corrispondenza del tag finalizzatore/un distruttore

Il nome del distruttore deve essere il nome della classe preceduto da una tilde (`~`). Il costruttore e distruttore sono gli unici membri che hanno lo stesso nome della classe.

L'esempio seguente genera l'errore C2523:

```
// C2523.cpp
// compile with: /c
class A {
   ~B();    // C2523
   ~A();   // OK
};
```