---
title: Errore irreversibile C1202 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1202
dev_langs:
- C++
helpviewer_keywords:
- C1202
ms.assetid: c859adb8-17a7-4fa1-a1f3-5820b7bf3849
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 1ef5f54c1893ab7d61ea1c8049657950be2c147b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1202"></a>Errore irreversibile C1202
tipo ricorsivo o contesto delle dipendenze di una funzione troppo complesso  
  
 Una definizione di modello è ricorsiva o troppo complessa.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C1202.  
  
```  
// C1202.cpp  
// processor: x86 IPF  
template<int n>   
class Factorial : public Factorial<n-1>  {   // C1202  
public:  
   operator int () {   
      return Factorial <n-1>::operator int () * n;   
   }  
};  
Factorial<7> facSeven;  
```  
  
## <a name="example"></a>Esempio  
 Possibile soluzione.  
  
```  
// C1202b.cpp  
// compile with: /c  
template<int n>   
class Factorial : public Factorial<n-1> {  
public:  
   operator int () {   
      return Factorial <n-1>::operator int () * n;   
   }  
};  
  
template <>  
class Factorial<0> {  
public:  
   operator int () {   
      return 1;   
   }  
};  
  
Factorial<7> facSeven;  
```
