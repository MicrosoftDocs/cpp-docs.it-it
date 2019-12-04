---
title: Errore del compilatore C3353
ms.date: 11/04/2016
f1_keywords:
- C3353
helpviewer_keywords:
- C3353
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
ms.openlocfilehash: 332e0b253aed53f2adadf448b6a9c0681abc825e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747450"
---
# <a name="compiler-error-c3353"></a>Errore del compilatore C3353

'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT

I delegati, dichiarati con la parola chiave [delegate](../../extensions/delegate-cpp-component-extensions.md) , possono essere dichiarati solo in ambito globale.

L'esempio seguente genera l'errore C3353:

```cpp
// C3353.cpp
// compile with: /clr
delegate int f;   // C3353
```
