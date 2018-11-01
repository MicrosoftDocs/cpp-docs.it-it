---
title: Errore del compilatore C2504
ms.date: 11/04/2016
f1_keywords:
- C2504
helpviewer_keywords:
- C2504
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
ms.openlocfilehash: 8f428699aa14cbd1f021a57ed8dcabefa8b24c16
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50444391"
---
# <a name="compiler-error-c2504"></a>Errore del compilatore C2504

'class': classe base non definita

La classe di base viene dichiarata ma mai definita.  Possibili cause:

1. File di inclusione mancante.

1. Classe di base esterno non è dichiarato con [extern](../../cpp/using-extern-to-specify-linkage.md).

L'esempio seguente genera l'errore C2504:

```
// C2504.cpp
// compile with: /c
class A;
class B : public A {};   // C2504
```

OK

```
class C{};
class D : public C {};
```