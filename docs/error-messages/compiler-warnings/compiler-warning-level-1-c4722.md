---
title: Compilatore avviso (livello 1) C4722 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4722
dev_langs:
- C++
helpviewer_keywords:
- C4722
ms.assetid: d8660710-f67b-4f59-a5fd-59259475529e
caps.latest.revision: 6
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: a88d734f0f17437efe3b4a60a3439135b7feec4e
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4722"></a>Avviso del compilatore (livello 1) C4722
'function': il distruttore non restituisce mai un valore, potenziale perdita di memoria  
  
 Il flusso di controllo termina in un distruttore. Viene terminato il thread o l'intero programma e le risorse allocate potrebbero non essere rilasciate.  Inoltre, se viene chiamato un distruttore per la rimozione dello stack durante l'elaborazione delle eccezioni, il comportamento dell'eseguibile è indefinito.  
  
 Per risolvere questo problema, rimuovere la chiamata di funzione che impedisce la restituzione di valori del distruttore.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4722:  
  
```  
// C4722.cpp  
// compile with: /O1 /W1 /c  
#include <stdlib.h>  
class C {  
public:  
   C();  
   ~C() { exit(1); };   // C4722  
};  
  
extern void func (C*);  
  
void Test(){  
   C x;  
   func(&x);  
   // control will not leave Test because destructor will exit  
}  
```
