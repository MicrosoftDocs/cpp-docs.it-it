---
title: Compilatore avviso (livello 1) C4006 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4006
dev_langs:
- C++
helpviewer_keywords:
- C4006
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 52810123b585000ef801577ac40db21f1dc783d1
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4006"></a>Avviso del compilatore (livello 1) C4006
\#undef è previsto un identificatore  
  
 La direttiva `#undef` non ha specificato un identificatore di cui annullare la definizione. La direttiva è stata ignorata. Per risolvere l'avviso, verificare di aver specificato un identificatore. L'esempio seguente genera l'errore C4006:  
  
```  
// C4006.cpp  
// compile with: /W1  
#undef   // C4006  
  
// try..  
// #undef TEST  
  
int main() {  
}  
```
