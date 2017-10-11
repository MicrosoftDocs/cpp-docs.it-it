---
title: Errore del compilatore C3412 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3412
dev_langs:
- C++
helpviewer_keywords:
- C3412
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0e050e6d4aef2f9a51e6cc27e7b64b8f6cd8db3d
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3412"></a>Errore del compilatore C3412
'template': Impossibile specializzare il modello nell'ambito corrente  
  
 Un modello non può essere specializzato in ambito di classe, solo nel modello globale o dello spazio dei nomi.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3412.  
  
```  
// C3412.cpp  
template <class T>  
struct S {  
   template <>  
   struct S<int> {};   // C3412 in a class  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrata una possibile soluzione.  
  
```  
// C3412b.cpp  
// compile with: /c  
template <class T>  
struct S {};  
  
template <>  
struct S<int> {};  
```
