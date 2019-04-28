---
title: Compilatore Warning (level 1) C4129
ms.date: 11/04/2016
f1_keywords:
- C4129
helpviewer_keywords:
- C4129
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
ms.openlocfilehash: dc4f4c4c1feeba543ce0baa71e1ee5dfd81fdcae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62310956"
---
# <a name="compiler-warning-level-1-c4129"></a>Compilatore Warning (level 1) C4129

'character': sequenza di caratteri escape sconosciuta

Il `character` dopo una barra rovesciata (\\) in un carattere o una stringa costante non è riconosciuta come una sequenza di escape valida. La barra rovesciata viene ignorata e non stampata. Il carattere che segue la barra rovesciata viene stampato.

Per stampare una singola barra rovesciata, specificare una doppia barra rovesciata (\\\\).

C++ standard, nella sezione 2.13.2 illustra le sequenze di escape.

L'esempio seguente genera l'errore C4129:

```
// C4129.cpp
// compile with: /W1
int main() {
   char array1[] = "\/709";   // C4129
   char array2[] = "\n709";   // OK
}
```