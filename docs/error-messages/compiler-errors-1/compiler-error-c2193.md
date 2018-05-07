---
title: Errore del compilatore C2193 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2193
dev_langs:
- C++
helpviewer_keywords:
- C2193
ms.assetid: 9813e853-d581-4f51-bb75-4e242298a844
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc5d6a5890a74fbb4f8a70ee86073c257cdf16ea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2193"></a>Errore del compilatore C2193
'identifier': già esistente in un segmento  
  
 Una funzione è stata inserita in due segmenti differenti utilizzando `alloc_text` e `code_seg` pragma.  
  
 L'esempio seguente genera l'errore C2193:  
  
```  
// C2193.cpp  
// compile with: /c  
extern "C" void MYFUNCTION();  
#pragma alloc_text(MYCODE, MYFUNCTION)  
#pragma code_seg("MYCODE2")  
extern "C" void MYFUNCTION() {}   // C2193  
extern "C" void MYFUNCTION2() {}  
```