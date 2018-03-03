---
title: Compilatore avviso (livello 1) C4716 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4716
dev_langs:
- C++
helpviewer_keywords:
- C4716
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a1d9d1e91656e464a5af809f1559eddba5da3291
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4716"></a>Avviso del compilatore (livello 1) C4716
'function' deve restituire un valore  
  
 La funzione specificata non ha restituito un valore.  
  
 Funziona solo con un tipo restituito void possono utilizza il comando restituito senza un valore restituito.  
  
 Quando questa funzione viene chiamata, verrà restituito un valore non definito.  
  
 Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).  
  
 L'esempio seguente genera l'errore C4716:  
  
```  
// C4716.cpp  
// compile with: /c /W1  
// C4716 expected  
#pragma warning(default:4716)  
int test() {  
   // uncomment the following line to resolve  
   // return 0;  
}  
```