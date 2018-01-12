---
title: Errore del compilatore C2319 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2319
dev_langs: C++
helpviewer_keywords: C2319
ms.assetid: 25263e6e-f5ba-4d2c-8727-8c2d8ca2e5ce
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6aa5db95ad8780cb54d8f77c5863c6ff028bd4bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2319"></a>Errore del compilatore C2319
'try/catch' deve essere seguito da un'istruzione composta. '{' mancante  
  
 Non è stato trovato un blocco `try` o `catch` dopo l'istruzione `try` o `catch` . Il blocco deve essere racchiuso tra parentesi graffe.  
  
 L'esempio seguente genera l'errore C2319:  
  
```  
// C2319.cpp  
// compile with: /EHsc  
#include <eh.h>  
class C {};  
int main() {  
   try {  
      throw "ooops!";  
   }  
   catch( C ) ;    // C2319  
   // try the following line instead  
   // catch( C ) {}  
}  
```