---
title: Compilatore (livello 1) Avviso C4129 | Documenti Microsoft
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
ms.openlocfilehash: dc095a32e5cb0d5a0bf240282e11c3fa3382ffe5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4129"></a>Compilatore (livello 1) Avviso C4129
'character': sequenza di caratteri escape sconosciuta  
  
 Il `character` dopo una barra rovesciata (\\) in un carattere o una stringa costante non è riconosciuto come una sequenza di escape valida. La barra rovesciata viene ignorata e non è stata stampata. Il carattere che segue la barra rovesciata viene stampato.  
  
 Per stampare una singola barra rovesciata, specificare una doppia barra rovesciata (\\\\).  
  
 C++ standard, nella sezione 2.13.2 vengono illustrate le sequenze di escape.  
  
 L'esempio seguente genera l'errore C4129:  
  
```  
// C4129.cpp  
// compile with: /W1  
int main() {  
   char array1[] = "\/709";   // C4129  
   char array2[] = "\n709";   // OK  
}  
```