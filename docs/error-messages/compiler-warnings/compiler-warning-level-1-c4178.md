---
title: Compilatore avviso (livello 1) C4178 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4178
dev_langs:
- C++
helpviewer_keywords:
- C4178
ms.assetid: 2c2c8f97-a5c4-47cd-8dd2-beea172613f3
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
ms.openlocfilehash: 29d1be73489a3a25d71ed2d652781214b3d18611
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4178"></a>Avviso del compilatore (livello 1) C4178
la costante di case 'constant' è troppo grande per il tipo dell'espressione switch  
  
 Una costante di case in un'espressione `switch` non corrisponde al tipo a cui è assegnata.  
  
## <a name="example"></a>Esempio  
  
```  
// C4178.cpp  
// compile with: /W1  
int main()  
{  
    int i;  // maximum size of unsigned long int is 4294967295  
    switch( i )  
    {  
        case 4294967295:   // OK  
            break;  
        case 4294967296:   // C4178  
            break;  
    }  
 }  
```
