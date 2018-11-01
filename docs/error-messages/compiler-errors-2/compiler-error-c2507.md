---
title: Errore del compilatore C2507
ms.date: 11/04/2016
f1_keywords:
- C2507
helpviewer_keywords:
- C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
ms.openlocfilehash: 63f9594eb9ee8a251faafe7323418b343c03063c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50618026"
---
# <a name="compiler-error-c2507"></a>Errore del compilatore C2507

'identifier': troppi modificatori virtual nella classe di base

Una classe o struttura è dichiarato come `virtual` più volte. Un solo `virtual` modificatore può essere visualizzato per ogni classe in un elenco delle classi base.

L'esempio seguente genera l'errore C2507:

```
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```