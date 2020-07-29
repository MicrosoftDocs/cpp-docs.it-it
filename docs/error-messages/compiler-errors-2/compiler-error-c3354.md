---
title: Errore del compilatore C3354
ms.date: 11/04/2016
f1_keywords:
- C3354
helpviewer_keywords:
- C3354
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
ms.openlocfilehash: fdc5de7493decf1f44617ab22a00fb5e8852116f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231975"
---
# <a name="compiler-error-c3354"></a>Errore del compilatore C3354

'function': la funzione usata per creare un delegato non può avere un tipo restituito 'type'

I tipi seguenti non sono validi come tipi restituiti per un **`delegate`** :

- Puntatore a funzione

- Puntatore a membro

- Puntatore a funzione membro

- Riferimento a funzione

- Riferimento a funzione membro

L'esempio seguente genera l'errore C3354:

```cpp
// C3354_2.cpp
// compile with: /clr /c
using namespace System;
typedef void ( *VoidPfn )();

delegate VoidPfn func(); // C3354
// try the following line instead
// delegate  void func();
```
