---
title: Compilatore avviso (livello 1) C4739 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4739
dev_langs:
- C++
helpviewer_keywords:
- C4739
ms.assetid: 600873b3-7c85-4cd4-944e-cd8e01bfcbb0
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: a3dff6329d5477e295970ff4e6a1ad72b05bb913
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4739"></a>Avviso del compilatore (livello 1) C4739
il riferimento alla variabile 'var' supera lo spazio di archiviazione  
  
 È stato assegnato un valore a una variabile, ma il valore è maggiore della dimensione della variabile. La scrittura in memoria supererà la posizione di memoria della variabile ed è possibile che si verifichi una perdita di dati.  
  
 Per risolvere il problema, assegnare un valore solo a una variabile con una dimensione tale da poter contenere il valore.  
  
 L'esempio seguente genera l'errore C4739:  
  
```  
// C4739.cpp  
// compile with: /RTCs /Zi /W1 /c  
char *pc;  
int main() {  
   char c;  
   *(int *)&c = 1;   // C4739  
  
   // OK  
   *(char *)&c = 1;  
}  
```
