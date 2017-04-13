---
title: Compilatore avviso (livello 1) C4155 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4155
dev_langs:
- C++
helpviewer_keywords:
- C4155
ms.assetid: ba233353-09e3-4195-8127-13a27ddd8d70
caps.latest.revision: 7
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
ms.openlocfilehash: a335e94af669eaccc89a069643adfb54b33f4046
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4155"></a>Avviso del compilatore (livello 1) C4155
eliminazione di un'espressione di matrice senza utilizzare 'delete' nella forma usata per le matrici  
  
 Per eliminare una matrice deve essere usata la forma per le matrici di **delete** . Questo avviso si verifica solo con la compatibilità ANSI (/Za).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4155:  
  
```  
// C4155.cpp  
// compile with: /Za /W1  
#include <stdio.h>  
  
int main(void)  
{  
    int (*array)[ 10 ] = new int[ 5 ] [ 10 ];  
    array[0][0] = 8;  
  
    printf_s("%d\n", array[0][0]);  
  
   delete array;   // C4155  
    // try the following line instead  
    // delete [] array;   // C4155  
}  
```
