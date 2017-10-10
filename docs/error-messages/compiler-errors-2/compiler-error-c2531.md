---
title: Errore del compilatore C2531 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2531
dev_langs:
- C++
helpviewer_keywords:
- C2531
ms.assetid: c49afe15-55f8-4dc8-ac01-bf653622a7db
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5696fdd631f23f2ac53d5e9677085d8709817e38
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2531"></a>Errore del compilatore C2531
'identifier': riferimento a un bit campo non valido  
  
 Non sono consentiti riferimenti a campi di bit.  
  
 L'esempio seguente genera l'errore C2531:  
  
```  
// C2531.cpp  
// compile with: /c  
class P {  
   int &b1 : 10;   // C2531  
   int b2 : 10;   // OK  
};  
```
