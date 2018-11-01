---
title: Errore del compilatore C2500
ms.date: 11/04/2016
f1_keywords:
- C2500
helpviewer_keywords:
- C2500
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
ms.openlocfilehash: a5753fc99efcdb1064a21981c62faaba84d44189
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468367"
---
# <a name="compiler-error-c2500"></a>Errore del compilatore C2500

'identifier1': 'identifier2' è già una classe base diretta

Una classe o struttura viene visualizzata più volte in un elenco di classi di base.

Una classe base diretta è quello indicato nell'elenco di base. Base indiretta è una classe di base di una delle classi nell'elenco di base.

Una classe non può essere specificata più volte come una classe base diretta. Una classe utilizzabile come una classe base indiretta più volte.

L'esempio seguente genera l'errore C2500:

```
// C2500.cpp
// compile with: /c
class A {};
class B : public A, public A {};    // C2500

// OK
class C : public A {};
class D : public A {};
class E : public C, public D {};
```