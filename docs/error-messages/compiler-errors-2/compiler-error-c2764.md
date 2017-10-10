---
title: Errore del compilatore C2764 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2764
dev_langs:
- C++
helpviewer_keywords:
- C2764
ms.assetid: 3754f5af-e094-4425-be20-d0c9a9b5baec
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 18e32646c3930dfae79ffd1ed13dfa014da4ce1a
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2764"></a>Errore del compilatore C2764
'param': parametro di modello non utilizzato o deducibile nella specializzazione parziale 'specializzazione'  
  
 Un parametro di modello non viene usato in una specializzazione parziale. In questo modo, la specializzazione parziale inutilizzabile perché il parametro di modello non può essere dedotto.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2764:  
  
```  
// C2764.cpp  
#include <stdio.h>  
template <class T1, class T2>  
struct S  {  
   int m_i;  
};  
  
template <class T1, class T2>  
struct S<int, T2*> {   // C2764  
// try the following line instead  
// struct S<T1(*)(T2), T2*> {  
   char m_c;  
};  
  
int main() {  
   S<int, char> s1;  
   S<void (*)(short), short *> s2;  
   s2.m_c = 10;  
   s1.m_i = s2.m_c;  
   printf_s("%d\n", s1.m_i);  
}  
```
