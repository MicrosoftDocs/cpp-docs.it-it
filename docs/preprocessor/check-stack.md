---
title: check_stack | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
dev_langs: C++
helpviewer_keywords:
- check_stack pragma
- pragmas, check_stack
- pragmas, check_stack usage table
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e48952788e7bbef86ade1177ce243da503ec8b9b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="checkstack"></a>check_stack
Indica al compilatore di disattivare le ricerche dello stack se **off** (o  **-** ) viene specificato, o per attivare le ricerche dello stack se **su** (o  **+** ) è specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      #pragma check_stack([ {on | off}] )  
#pragma check_stack{+ | -}  
```  
  
## <a name="remarks"></a>Note  
 Se non viene fornito alcun argomento, le ricerche dello stack sono considerate in base all'impostazione predefinita. Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.  
  
 Se non si fornisce un argomento per il **check_stack** pragma, il controllo dello stack viene ripristinato al comportamento specificato nella riga di comando. Per ulteriori informazioni, vedere [riferimenti al compilatore](../build/reference/compiler-options.md). L'interazione tra il **#pragma check_stack** e [/Gs](../build/reference/gs-control-stack-checking-calls.md) opzione è riepilogato nella tabella riportata di seguito.  
  
### <a name="using-the-checkstack-pragma"></a>Utilizzo del pragma check_stack  
  
|Sintassi|Compilato con<br /><br /> l'opzione /Gs?|Operazione|  
|------------|------------------------------------|------------|  
|**#pragma check_stack ()** o<br /><br /> **#pragma check_stack**|Yes|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
|**#pragma check_stack ()** o<br /><br /> **#pragma check_stack**|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|**#pragma check_stack(on)**<br /><br /> o **#pragma check_stack +**|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|**#pragma check_stack(off)**<br /><br /> o **check_stack #pragma -**|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)