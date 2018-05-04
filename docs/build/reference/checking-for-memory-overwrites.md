---
title: Verificare la presenza di sovrascrittura di memoria | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- memory, overwrites
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 258aa6ae01d48df6717135f7dc8b73fc3f9e697a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="checking-for-memory-overwrites"></a>Controllo delle sovrascritture di memoria
Se si verifica una violazione di accesso in una chiamata a una funzione di modifica di heap, è possibile che il programma ha danneggiato l'heap. Potrebbe essere un sintomo comune di questa situazione:  
  
```  
Access Violation in _searchseg  
```  
  
 Il [heapchk](../../c-runtime-library/reference/heapchk.md) funzione è disponibile in entrambe le modalità di debug e di build di rilascio (solo Windows NT) per verificare l'integrità dell'heap della libreria di runtime. È possibile utilizzare `_heapchk` in modo analogo a come il `AfxCheckMemory` funzione per isolare la sovrascrittura di un heap, ad esempio:  
  
```  
if(_heapchk()!=_HEAPOK)  
   DebugBreak();  
```  
  
 Se questa funzione non viene eseguita correttamente, è necessario isolare a quel punto è stato danneggiato l'heap.  
  
## <a name="see-also"></a>Vedere anche  
 [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)