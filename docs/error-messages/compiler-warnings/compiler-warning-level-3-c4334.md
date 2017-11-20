---
title: Compilatore avviso (livello 3) C4334 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4334
dev_langs: C++
helpviewer_keywords: C4334
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: dba8fe25bc6401c0b823205bcc163dced466d4b9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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