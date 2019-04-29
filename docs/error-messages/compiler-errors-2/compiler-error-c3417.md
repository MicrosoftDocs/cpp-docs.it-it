---
title: Errore del compilatore C3417
ms.date: 11/04/2016
f1_keywords:
- C3417
helpviewer_keywords:
- C3417
ms.assetid: 3e7869ea-8948-42fb-ba30-6ccafe499c35
ms.openlocfilehash: 574af940f17c1a79472d6d20d63c9ff74d4c411e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367668"
---
# <a name="compiler-error-c3417"></a>Errore del compilatore C3417

'member': i tipi di valore non possono contenere funzioni membro speciali definite dall'utente

I tipi di valore non possono contenere funzioni come un costruttore di istanza predefinito, un distruttore o un costruttore di copia.

L'esempio seguente genera l'errore C3517:

```
// C3417.cpp
// compile with: /clr /c
value class VC {
   VC(){}   // C3417

   // OK
   static VC(){}
   VC(int i){}
};
```