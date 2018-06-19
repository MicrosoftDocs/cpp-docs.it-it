---
title: Errore del compilatore C2002 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2002
dev_langs:
- C++
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 01124fc839d6e788ff2dccae325f01f7d4337f5d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33164866"
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