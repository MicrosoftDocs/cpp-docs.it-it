---
title: Errore irreversibile C1191 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1191
dev_langs:
- C++
helpviewer_keywords:
- C1191
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 95795ddfcc27a7cd150dec565f0e52a4f7eca00e
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1191"></a>Errore irreversibile C1191
'dll' può essere importato solo in ambito globale  
  
 Le istruzioni per importare mscorlib. dll in un programma che utilizza la programmazione /clr non possono trovarsi in uno spazio dei nomi o una funzione, ma solo in ambito globale.  
  
 L'esempio seguente genera l'errore C1191:  
  
```  
// C1191.cpp  
// compile with: /clr  
namespace sample {  
   #using <mscorlib.dll>   // C1191 not at global scope  
}  
```  
  
 Possibile soluzione:  
  
```  
// C1191b.cpp  
// compile with: /clr /c  
#using <mscorlib.dll>  
namespace sample {}  
```
