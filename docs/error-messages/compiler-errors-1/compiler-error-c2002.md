---
title: Errore del compilatore C2002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2002
dev_langs:
- C++
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d8f6fc5983a462850581f69ca32dd7c305f9e847
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2002"></a>Errore del compilatore C2002
costante a caratteri wide non valida  
  
 La costante di caratteri multibyte non è valida.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  La costante a caratteri wide contiene più i byte del previsto.  
  
2.  L'intestazione standard STDDEF. h non è incluso.  
  
3.  Non è possibile concatenare valori letterali di stringa normali caratteri "wide".  
  
4.  Una costante a caratteri "wide" deve essere preceduta dal carattere "L":  
  
    ```  
    L'mbconst'  
    ```  
  
5.  Per Microsoft C++ gli argomenti di testo di una direttiva del preprocessore devono essere ASCII. Ad esempio, la direttiva `#pragma message(L"string")`, non è valido.
