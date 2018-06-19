---
title: Compilatore avviso (livello 3) C4334 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4334
dev_langs:
- C++
helpviewer_keywords:
- C4334
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f26749c968c3cac18b509046633ba3d91d15a4be
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292685"
---
# <a name="compiler-warning-level-3-c4334"></a>Avviso del compilatore (livello 3) C4334
'operator': risultato dello shift a 32 bit convertito in modo implicito a 64 bit (si intendeva eseguire lo shift a 64 bit?)  
  
 Il risultato dello shift a 32 bit è stato convertito implicitamente a 64 bit e sospetta del compilatore che è previsto un shift a 64 bit.  Per risolvere il problema, utilizzare shift a 64 bit oppure in modo esplicito il cast del risultato di shift a 64 bit.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4334.  
  
```  
// C4334.cpp  
// compile with: /W3 /c  
void SetBit(unsigned __int64 *p, int i) {  
   *p |= (1 << i);   // C4334  
   *p |= (1i64 << i);   // OK  
}  
```