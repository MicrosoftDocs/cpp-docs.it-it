---
title: Errore del compilatore C2203
ms.date: 11/04/2016
f1_keywords:
- C2203
helpviewer_keywords:
- C2203
ms.assetid: 5497df43-86f6-43d5-b6cb-723c4c589b10
ms.openlocfilehash: 4a078cd4c64bbb8d301aa3e4817272d23e3acbb4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216310"
---
# <a name="compiler-error-c2203"></a>Errore del compilatore C2203

l'operatore delete non può specificare limiti per una matrice

Con l'opzione **/za** (ANSI), l' **`delete`** operatore può eliminare un'intera matrice, ma non parti o membri specifici della matrice.

L'esempio seguente genera l'C2203:

```cpp
// C2203.cpp
// compile with: /Za
int main() {
   int *ar = new int[10];
   delete [4] ar;   // C2203
   // try the following line instead
   // delete [] ar;
}
```
