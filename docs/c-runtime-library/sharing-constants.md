---
title: Costanti di condivisione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _SH_DENYNO
- _SH_DENYRD
- _SH_DENYRW
- _SH_DENYWR
- _SH_COMPAT
dev_langs:
- C++
helpviewer_keywords:
- _SH_DENYRW constant
- SH_DENYRD constant
- _SH_COMPAT constant
- _SH_DENYRD constant
- SH_DENYRW constant
- sharing constants
- SH_DENYNO constant
- _SH_DENYWR constant
- SH_DENYWR constant
- _SH_DENYNO constant
- SH_COMPAT constant
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: f2cf723738fccb92421f88b6c08405083f08e0fb
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="sharing-constants"></a>Condivisione costanti
Costanti per le modalità di condivisione file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <share.h>  
  
```  
  
## <a name="remarks"></a>Note  
 L'argomento *shflag* determina la modalità di condivisione, che consiste in una o più costanti manifesto. Queste possono essere combinate con gli argomenti *oflag*. Vedere [Costanti di file](../c-runtime-library/file-constants.md).  
  
 Nella tabella seguente sono elencate le costanti e i relativi significati:  
  
|Costante|Significato|  
|--------------|-------------|  
|`_SH_DENYRW`|Nega l'accesso in lettura e scrittura al file.|  
|`_SH_DENYWR`|Nega l'accesso in scrittura al file|  
|`_SH_DENYRD`|Nega l'accesso in lettura al file|  
|`_SH_DENYNO`|Consente l'accesso in lettura e scrittura|  
|`_SH_SECURE`|Imposta la modalità protetta (accesso in lettura condivisa e scrittura esclusiva).|  
  
## <a name="see-also"></a>Vedere anche  
 [_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)
