---
title: Avviso del compilatore (livello 1) C4618
ms.date: 11/04/2016
f1_keywords:
- C4618
helpviewer_keywords:
- C4618
ms.assetid: 6ff10d0a-6d5b-4373-8196-1d57bb6b1611
ms.openlocfilehash: b8f24df7465525b24ecd3871447bd873889b1e23
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50583803"
---
# <a name="compiler-warning-level-1-c4618"></a>Avviso del compilatore (livello 1) C4618

parametri di pragma comprendono una stringa vuota. pragma ignorato

È stata fornita una stringa null come argomento a un **#pragma**.

Il pragma è stato elaborato senza l'argomento.

L'esempio seguente genera l'errore C4618:

```
// C4618.cpp
// compile with: /W1 /LD
#pragma code_seg("")   // C4618
```