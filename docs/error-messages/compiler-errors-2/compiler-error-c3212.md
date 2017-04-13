---
title: Errore del compilatore C3212 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3212
dev_langs:
- C++
helpviewer_keywords:
- C3212
ms.assetid: 9e271bb6-a51f-4b96-b26b-9f4ca28fca0a
caps.latest.revision: 6
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
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 602eccb8bcdd9a41f4adfe66c2084ff7cb22a9b8
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3212"></a>Errore del compilatore C3212
'specialization': la specializzazione esplicita di un membro di un modello deve essere un membro di una specializzazione esplicita  
  
 Una specializzazione esplicita non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C3212:  
  
```  
// C3212.cpp  
// compile with: /LD  
template <class T>  
struct S {  
   template <class T1>  
   struct S1;  
};  
  
template <class T>   // C3212  
template <>  
struct S<T>::S1<int> {};  
  
/*  
// try the following instead  
template <>  
template <>  
struct S<int>::S1<int> {};  
*/  
  
/*  
// or, the following  
template <>  
struct S<int> {  
   template <class T1>  
   struct S1;  
};  
  
template <>  
struct S<int>::S1<int> {  
};  
*/  
```
