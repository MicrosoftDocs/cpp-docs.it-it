---
title: Compilatore Warning (level 1) C4129 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4129
dev_langs:
- C++
helpviewer_keywords:
- C4129
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e02f38044180c45e221099d2874b7f8ff48d62f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46098446"
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