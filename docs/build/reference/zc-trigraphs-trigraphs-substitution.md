---
title: '-Zc: trigraphs (sostituzione trigrammi) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /Zc
dev_langs:
- C++
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Conformance compiler options
- Zc compiler options (C++)
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 739e772c87c937a552e07a32fa5bb80b1a1e2508
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zctrigraphs-trigraphs-substitution"></a>/Zc:trigraphs (sostituzione trigrammi)
Quando **/Zc: trigraphs** viene specificato, il compilatore sostituisce una sequenza di caratteri di trigramma usando un carattere di punteggiatura corrispondenti. Per disattivare la sostituzione di trigramma, specificare **/Zc:trigraphs-**. Per impostazione predefinita, **/Zc: trigraphs** è disattivata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:trigraphs[-]  
```  
  
## <a name="remarks"></a>Note  
 Un trigramma è costituito da due punti interrogativi consecutivi ("??") seguiti da un terzo carattere univoco. Ad esempio, il compilatore sostituisce il "?? = "utilizzando il carattere '#'. Usare i trigrammi in file di origine C che usano un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura.  
  
 Per un elenco dei trigrammi C/C++ e un esempio in cui viene illustrato come utilizzare i trigrammi, vedere [trigrammi](../../c-language/trigraphs.md).  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)   
 [Trigrammi](../../c-language/trigraphs.md)