---
title: Errore del compilatore C2640 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2640
dev_langs:
- C++
helpviewer_keywords:
- C2640
ms.assetid: e4d137ab-ed1d-457c-9eec-b70d97f1b0b4
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 46ff98cd80212268acdb8480edf01a3a47ce8708
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2640"></a>Errore del compilatore C2640
'identifier': based non valido di modificatore su un riferimento  
  
 Il `__based` modificatore può essere utilizzato solo su puntatori.  
  
 L'esempio seguente genera l'errore C2640:  
  
```  
// C2640.cpp  
void f(int i) {  
    void *vp;  
    int _based(vp) &vr = I;  // C2640  
}  
```
