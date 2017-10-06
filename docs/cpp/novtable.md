---
title: novtable | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- novtable_cpp
dev_langs:
- C++
helpviewer_keywords:
- novtable __declspec keyword
- __declspec keyword [C++], novtable
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 7064bd08a97f3eabbf337b1a351614e94d6458dd
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="novtable"></a>novtable
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Questo è un attributo `__declspec` esteso.  
  
 Questo formato dell'attributo `__declspec` può essere applicato a qualsiasi dichiarazione di classe, ma deve essere applicato solo a classi di interfaccia pure, ovvero, classi per le quali non verrà mai creata un'istanza automaticamente. L'attributo `__declspec` arresta la generazione di codice da parte del compilatore per inizializzare vfptr nel costruttore o nei costruttori e nel distruttore della classe. In molti casi, in tal modo vengono rimossi gli unici riferimenti a vtable associati alla classe e, pertanto, il linker la rimuoverà. L'utilizzo del formato dell'attributo `__declspec` può comportare una riduzione significativa della dimensione del codice.  
  
 Se si tenta di creare un'istanza di una classe contrassegnata con `novtable` e quindi accedere a un membro di classe, si riceverà una violazione di accesso (AV).  
  
## <a name="example"></a>Esempio  
  
```  
// novtable.cpp  
#include <stdio.h>  
  
struct __declspec(novtable) X {  
   virtual void mf();  
};  
  
struct Y : public X {  
   void mf() {  
      printf_s("In Y\n");  
   }  
};  
  
int main() {  
   // X *pX = new X();  
   // pX->mf();   // Causes a runtime access violation.  
  
   Y *pY = new Y();  
   pY->mf();  
}  
```  
  
```Output  
In Y  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
