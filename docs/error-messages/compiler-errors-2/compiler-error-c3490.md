---
title: Errore del compilatore C3490 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3490
dev_langs:
- C++
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6439b48dc752d2bed01371cae59b2d77db16f1f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3490"></a>Errore del compilatore C3490
impossibile modificare 'var' perché l'accesso viene effettuato tramite un oggetto const  
  
 Un'espressione lambda dichiarata in un metodo `const` non può modificare i dati di membri non modificabili.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere il modificatore `const` dalla dichiarazione di metodo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3490 perché modifica la variabile membro `_i` in un metodo `const` :  
  
```  
// C3490a.cpp  
// compile with: /c  
  
class C  
{  
   void f() const   
   {  
      auto x = [=]() { _i = 20; }; // C3490  
   }  
  
   int _i;  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3490 rimuovendo il modificatore `const` dalla dichiarazione di metodo:  
  
```  
// C3490b.cpp  
// compile with: /c  
  
class C  
{  
   void f()  
   {  
      auto x = [=]() { _i = 20; };  
   }  
  
   int _i;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)