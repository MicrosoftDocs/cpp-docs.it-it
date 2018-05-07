---
title: Errore del compilatore C2341 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2341
dev_langs:
- C++
helpviewer_keywords:
- C2341
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18cc222129f3f12b5e7b5c6cb66e090907ff42a3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2341"></a>Errore del compilatore C2341
'section name': segmento deve essere definito utilizzando #pragma data_seg, code_seg o sezione precedente da utilizzare  
  
 Un [allocare](../../cpp/allocate.md) istruzione fa riferimento a un segmento non ancora definito da [code_seg](../../preprocessor/code-seg.md), [data_seg](../../preprocessor/data-seg.md), o [sezione](../../preprocessor/section.md) pragma.  
  
 L'esempio seguente genera l'errore C2341:  
  
```  
// C2341.cpp  
// compile with: /c  
__declspec(allocate(".test"))   // C2341  
int j = 1;  
```  
  
 Possibile soluzione:  
  
```  
// C2341b.cpp  
// compile with: /c  
#pragma data_seg(".test")  
__declspec(allocate(".test"))  
int j = 1;  
```