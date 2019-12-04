---
title: Errore del compilatore C3417
ms.date: 11/04/2016
f1_keywords:
- C3417
helpviewer_keywords:
- C3417
ms.assetid: 3e7869ea-8948-42fb-ba30-6ccafe499c35
ms.openlocfilehash: 93f287dd7173cc83a8c910d035f80a15c6a4f701
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756162"
---
# <a name="compiler-error-c3417"></a>Errore del compilatore C3417

' member ': i tipi di valore non possono contenere funzioni membro speciali definite dall'utente

I tipi di valore non possono contenere funzioni quali un costruttore di istanza predefinito, un distruttore o un costruttore di copia.

L'esempio seguente genera l'C3517:

```cpp
// C3417.cpp
// compile with: /clr /c
value class VC {
   VC(){}   // C3417

   // OK
   static VC(){}
   VC(int i){}
};
```
