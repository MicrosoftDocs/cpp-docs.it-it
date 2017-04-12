---
title: Errore del compilatore C3490 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3490
dev_langs:
- C++
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
caps.latest.revision: 7
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 83a215b1c4883ba7ed4b285af8c4efafe2cfaa05
ms.lasthandoff: 04/04/2017

---
# <a name="compiler-error-c3490"></a>Errore del compilatore C3490
impossibile modificare 'var' perché l'accesso viene effettuato tramite un oggetto const  
  
 Un'espressione lambda dichiarata in un metodo `const` non può modificare i dati di membri non modificabili.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere il modificatore `const` dalla dichiarazione di metodo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente genera l'errore C3490 perché modifica la variabile membro `_i` in un `const` metodo:  
  
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
