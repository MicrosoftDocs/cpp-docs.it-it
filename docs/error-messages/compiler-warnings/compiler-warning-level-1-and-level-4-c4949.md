---
title: Compilatore avviso (livello 1 e livello 4) C4949 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4949
dev_langs: C++
helpviewer_keywords: C4949
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3d23a6d6e030007289cc50ce0372acc8f99e7ed3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-and-level-4-c4949"></a>Avviso del compilatore (livelli 1 e 4) C4949
pragma 'managed' e 'unmanaged' sono significativi solo se compilati con ' / /CLR [: opzione]'  
  
 Il compilatore ignora la [gestiti](../../preprocessor/managed-unmanaged.md) e non gestita di direttive pragma se il codice sorgente non è stato compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md). Si tratta di un avviso informativo.  
  
 L'esempio seguente genera l'errore C4949:  
  
```  
// C4949.cpp  
// compile with: /LD /W1  
#pragma managed   // C4949  
```  
  
 Quando **#pragma non gestita** viene usato senza **/clr**, C4949 è un avviso di livello 4.  
  
 L'esempio seguente genera l'errore C4949:  
  
```  
// C4949b.cpp  
// compile with: /LD /W4  
#pragma unmanaged   // C4949  
```