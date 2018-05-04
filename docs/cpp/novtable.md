---
title: novtable | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- novtable_cpp
dev_langs:
- C++
helpviewer_keywords:
- novtable __declspec keyword
- __declspec keyword [C++], novtable
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 283ff09c320b67686e353f0497c665828cd8b5d0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)