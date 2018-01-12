---
title: Errore del compilatore C2002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2002
dev_langs: C++
helpviewer_keywords: C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9a2cbd21c27cff3effad69b19f42eeaecacf20d6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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