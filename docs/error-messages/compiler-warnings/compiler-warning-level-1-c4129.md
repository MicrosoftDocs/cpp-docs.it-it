---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4129'
title: Avviso del compilatore (livello 1) C4129
ms.date: 11/04/2016
f1_keywords:
- C4129
helpviewer_keywords:
- C4129
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
ms.openlocfilehash: 27ae487016a5d9a60a95e4715261ec5ba9171db4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155280"
---
# <a name="compiler-warning-level-1-c4129"></a>Avviso del compilatore (livello 1) C4129

' character ': sequenza di escape di caratteri non riconosciuta

La `character` barra rovesciata ( \\ ) riportata di seguito in una costante carattere o stringa non viene riconosciuta come una sequenza di escape valida. La barra rovesciata viene ignorata e non viene stampata. Viene stampato il carattere che segue la barra rovesciata.

Per stampare una singola barra rovesciata, specificare una doppia barra rovesciata ( \\ \\ ).

Lo standard C++, nella sezione 2.13.2 illustra le sequenze di escape.

L'esempio seguente genera l'C4129:

```cpp
// C4129.cpp
// compile with: /W1
int main() {
   char array1[] = "\/709";   // C4129
   char array2[] = "\n709";   // OK
}
```
