---
title: STACKSIZE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- STACKSIZE
dev_langs:
- C++
helpviewer_keywords:
- STACKSIZE .def file statement
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b2093762b3c6f21d319c53a85da5ec5b430a1fd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="stacksize"></a>STACKSIZE
Imposta le dimensioni in byte dello stack.  
  
```  
STACKSIZE reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 È un metodo equivalente per impostare lo stack con il [allocazioni Stack](../../build/reference/stack-stack-allocations.md) (/stack) opzione. Vedere la documentazione relativa all'opzione per informazioni dettagliate *riservare* e `commit` argomenti.  
  
 Questa opzione non ha effetto sulle DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)