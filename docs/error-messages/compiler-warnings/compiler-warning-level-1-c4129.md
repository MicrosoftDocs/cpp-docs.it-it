---
title: Avviso del compilatore (livello 1) C4129
ms.date: 11/04/2016
f1_keywords:
- C4129
helpviewer_keywords:
- C4129
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
ms.openlocfilehash: 1a48fc806f3274a59c99be25ac7a0e7b03a0454b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80176221"
---
# <a name="compiler-warning-level-1-c4129"></a>Avviso del compilatore (livello 1) C4129

' character ': sequenza di escape di caratteri non riconosciuta

Il `character` dopo una barra rovesciata (\\) in una costante carattere o stringa non è riconosciuto come una sequenza di escape valida. La barra rovesciata viene ignorata e non viene stampata. Viene stampato il carattere che segue la barra rovesciata.

Per stampare una singola barra rovesciata, specificare una doppia barra rovesciata (\\\\).

Lo C++ standard, nella sezione 2.13.2, illustra le sequenze di escape.

L'esempio seguente genera l'C4129:

```cpp
// C4129.cpp
// compile with: /W1
int main() {
   char array1[] = "\/709";   // C4129
   char array2[] = "\n709";   // OK
}
```
