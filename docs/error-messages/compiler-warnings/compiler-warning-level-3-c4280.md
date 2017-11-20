---
title: Compilatore avviso (livello 3) C4280 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4280
dev_langs: C++
helpviewer_keywords: C4280
ms.assetid: 153fb639-3ee1-4fee-baf9-71420abcf3f6
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3733b8f95f92b4dd8e15e3456be3b19959e323b1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4280"></a>Avviso del compilatore (livello 3) C4280
'operator ->' è autoricorsivo tramite il tipo 'type'  
  
 Il codice viene erroneamente consentito **operator ->** di chiamare se stesso.  
  
 L'esempio seguente genera l'errore C4280:  
  
```  
// C4280.cpp  
// compile with: /W3 /WX  
struct A  
{  
   int z;  
   A& operator ->();  
};  
  
void f(A y)  
{  
   int i = y->z; // C4280  
}  
```