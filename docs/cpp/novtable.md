---
title: novtable | Microsoft Docs
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
ms.openlocfilehash: 3ad0c50330d174a6139ce6e588b278e03cd99562
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943611"
---
# <a name="novtable"></a>novtable
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Si tratta di un **declspec** attributi estesa.  
  
 Questa forma di **declspec** possono essere applicati a qualsiasi dichiarazione di classe, ma deve essere applicato solo a classi di interfaccia pure, ovvero le classi che non verranno mai avviata l'istanza in modo indipendente. Il **declspec** interrompe il compilatore di generare codice per inizializzare vfptr nel costruttori e nel distruttore della classe il costruttore di o. In molti casi, in tal modo vengono rimossi gli unici riferimenti a vtable associati alla classe e, pertanto, il linker la rimuoverà. Utilizzo del formato del **declspec** può comportare una riduzione significativa delle dimensioni del codice.  
  
 Se si tenta di creare un'istanza di una classe contrassegnata con `novtable` e quindi accedere a un membro di classe, si riceverà una violazione di accesso (AV).  
  
## <a name="example"></a>Esempio  
  
```cpp 
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