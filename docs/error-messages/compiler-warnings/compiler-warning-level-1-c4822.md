---
title: Compilatore avviso (livello 1) C4822 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4822
dev_langs:
- C++
helpviewer_keywords:
- C4822
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
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
ms.openlocfilehash: d04ed028f093d3e589af13dc91960f27304d044b
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4822"></a>Avviso del compilatore (livello 1) C4822
'member': una funzione membro della classe locale non ha corpo  
  
 Una funzione membro della classe locale è stata dichiarata ma non definita nella classe. Per usare una funzione membro della classe locale, è necessario definirla nella classe. Non è possibile dichiararla nella classe e definirla all'esterno della classe.  
  
 Qualsiasi definizione esterna alla classe per una funzione membro della classe locale costituisce un errore.  
  
 L'esempio seguente genera l'errore C4822:  
  
```  
// C4822.cpp  
// compile with: /W1  
int main() {  
   struct C {  
      void func1(int);   // C4822  
      // try the following line instead  
      // void func1(int){}  
  };  
}  
```
