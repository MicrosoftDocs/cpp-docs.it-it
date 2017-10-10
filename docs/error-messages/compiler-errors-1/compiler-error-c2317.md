---
title: Errore del compilatore C2317 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2317
dev_langs:
- C++
helpviewer_keywords:
- C2317
ms.assetid: e44d129b-8d3e-4ce9-9d79-6791ee77f25e
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 069cc1920f2b87b0a4cb453cb9809e9b36a1c9ec
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2317"></a>Errore del compilatore C2317
blocco 'try' con inizio alla riga 'number' senza gestori catch  
  
 Un blocco `try` deve avere almeno un gestore catch.  
  
 L'esempio seguente genera l'errore C2317:  
  
```  
// C2317.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   // C2317, no catch handler  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2317b.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   catch(char*) {}  
}  
```
