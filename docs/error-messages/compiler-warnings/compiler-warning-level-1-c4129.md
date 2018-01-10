---
title: Compilatore (livello 1) Avviso C4129 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4129
dev_langs: C++
helpviewer_keywords: C4129
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6405c7c156f34b49ab892304ee51a6b996ac2595
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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