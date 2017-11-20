---
title: Errore del compilatore C2509 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2509
dev_langs: C++
helpviewer_keywords: C2509
ms.assetid: 339c1fcd-ec4a-456c-9f18-a9b24d9921af
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2becd963c84f6ef0d7eb1eebd760bf09dadfe853
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2509"></a>Errore del compilatore C2509
'identifier': funzione membro non dichiarata in 'class'  
  
 La funzione non è dichiarata nella classe specificata.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2509.  
  
```  
// C2509.cpp  
// compile with: /c  
struct A {  
   virtual int vfunc() = 0;  
   virtual int vfunc2() = 0;  
};  
  
struct B : private A {  
   using A::vfunc;  
   virtual int vfunc2();  
};  
  
int B::vfunc() { return 1; }   // C2509  
int B::vfunc2() { return 1; }   // OK  
```