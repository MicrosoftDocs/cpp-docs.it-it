---
title: Errore del compilatore C3353
ms.date: 11/04/2016
f1_keywords:
- C3353
helpviewer_keywords:
- C3353
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
ms.openlocfilehash: eb7b55f63e911f155c13e777e2e84ae7b587e9a3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432669"
---
# <a name="compiler-error-c3353"></a>Errore del compilatore C3353

'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT

I delegati, dichiarati con la [delegare](../../windows/delegate-cpp-component-extensions.md) (parola chiave), possono essere dichiarati solo in ambito globale.

L'esempio seguente genera l'errore C3353:

```
// C3353.cpp
// compile with: /clr
delegate int f;   // C3353
```