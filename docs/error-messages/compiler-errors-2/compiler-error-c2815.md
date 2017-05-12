---
title: Errore del compilatore C2815 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2815
dev_langs:
- C++
helpviewer_keywords:
- C2815
ms.assetid: d0256fd6-0721-4c99-b03c-52d96e77a613
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 7cd85d29ee14376b46d05ac5cfa95496fffdc9e5
ms.lasthandoff: 04/29/2017

---
# <a name="compiler-error-c2815"></a>Errore del compilatore C2815
'operator delete': il primo parametro formale deve essere ' void *', ma è stata utilizzata 'param'  
  
 Qualsiasi definiti dall'utente [operatore delete](../../standard-library/new-operators.md#op_delete) funzione deve accettare un primo parametro formale di tipo `void *`.  
  
 L'esempio seguente genera l'errore C2815:  
  
```  
// C2815.cpp  
// compile with: /c  
class CMyClass {  
public:  
   void mf1(int *a);  
   void operator delete(CMyClass *);   // C2815  
   void operator delete(void *);   
};  
```
