---
title: Errore del compilatore C2286 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2286
dev_langs:
- C++
helpviewer_keywords:
- C2286
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: c745afd370bd444614fc216ab42fda0f584295e7
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="compiler-error-c2286"></a>Errore del compilatore C2286
i puntatori ai membri della rappresentazione 'identifier' è già impostata su "ereditarietà" - dichiarazione ignorata.  
  
 Due diverse rappresentazioni di puntatore ai membri esistono per la classe.  
  
 Per ulteriori informazioni, vedere [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2286:  
  
```  
// C2286.cpp  
// compile with: /c  
class __single_inheritance X;  
class __multiple_inheritance X;   // C2286  
class  __multiple_inheritance Y;   // OK  
```
