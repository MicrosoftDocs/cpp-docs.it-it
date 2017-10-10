---
title: Errore del compilatore C2723 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2723
dev_langs:
- C++
helpviewer_keywords:
- C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3816640569a503c8a56c4cf37f1bf23360b30a12
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2723"></a>Errore del compilatore C2723
'function': identificatore 'specifier' non valido nella definizione di funzione  
  
 L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe. L'identificatore `virtual` può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.  
  
 L'esempio seguente genera l'errore C2723 e mostra come risolverlo:  
  
```  
// C2723.cpp  
struct X {  
   virtual void f();  
   virtual void g();  
};  
  
virtual void X::f() {}   // C2723  
  
// try the following line instead  
void X::g() {}  
```
