---
title: Errore del compilatore C3490 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3490
dev_langs:
- C++
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 593e5509ada926f27243a761da3470eb2d846a22
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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