---
title: Errore del compilatore C2902 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2902
dev_langs: C++
helpviewer_keywords: C2902
ms.assetid: 89d78d0e-78e5-4c2c-a0f9-a60110e9395e
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2daad775980c881bb1400c695015bd094ffc14cf
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2902"></a>Errore del compilatore C2902
'token': token imprevisto dopo 'template'. Previsto identificatore  
  
 Il token che segue la parola chiave `template` non è un identificatore.  
  
 L'esempio seguente genera l'errore C2902:  
  
```  
// C2902.cpp  
// compile with: /c  
namespace N {  
   template<class T> class X {};  
   class Y {};  
}  
void g() {  
   N::template + 1;   // C2902  
}  
  
void f() {  
   N::template X<int> x1;   // OK  
}  
```  
  
 C2902 può verificarsi anche quando si usano i generics:  
  
```  
// C2902b.cpp  
// compile with: /clr /c  
namespace N {  
   generic<class T> ref class GC {};  
}  
  
void f() {  
   N::generic + 1;   // C2902  
   N::generic GC<int>^ x;  
}  
```