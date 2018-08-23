---
title: check_stack | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
dev_langs:
- C++
helpviewer_keywords:
- check_stack pragma
- pragmas, check_stack
- pragmas, check_stack usage table
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b16a3d87741b8dda3b130c09d74e86a2350cd7be
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541586"
---
# <a name="checkstack"></a>check_stack
Indica al compilatore di disattivare i probe dello stack se `off` (o `-`) viene specificato, oppure di abilitare le ricerche dello stack se `on` (o `+`) specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma check_stack([ {on | off}] )  
#pragma check_stack{+ | -}  
```  
  
## <a name="remarks"></a>Note 

Se non viene fornito alcun argomento, le ricerche dello stack sono considerate in base all'impostazione predefinita. Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.  
  
Se non si assegna un argomento per il **check_stack** pragma, controllo dello stack viene ripristinato il comportamento specificato nella riga di comando. Per altre informazioni, vedere [riferimenti al compilatore](../build/reference/compiler-options.md). L'interazione tra il `#pragma check_stack` e il [/Gs](../build/reference/gs-control-stack-checking-calls.md) opzione è riepilogato nella tabella seguente.  
  
### <a name="using-the-checkstack-pragma"></a>Utilizzo del pragma check_stack  
  
|Sintassi|Compilato con<br /><br /> l'opzione /Gs?|Operazione|  
|------------|------------------------------------|------------|  
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|Yes|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|`#pragma check_stack(on)`<br /><br /> o `#pragma check_stack +`|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|  
|`#pragma check_stack(off)`<br /><br /> o `#pragma check_stack -`|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)