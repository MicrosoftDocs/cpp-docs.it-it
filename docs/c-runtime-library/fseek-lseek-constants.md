---
title: Costanti fseek, _lseek | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- SEEK_END
- SEEK_SET
- SEEK_CUR
dev_langs:
- C++
helpviewer_keywords:
- SEEK_SET constant
- SEEK_END constant
- SEEK_CUR constant
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fbcf0a1106610740a585b7e4f8b68e3fc9b6a8f7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fseek-lseek-constants"></a>Costanti fseek, _lseek
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <stdio.h>  
  
```  
  
## <a name="remarks"></a>Note  
 L'argomento *origin* specifica la posizione iniziale e può essere una delle costanti manifesto seguenti:  
  
|Costante|Significato|  
|--------------|-------------|  
|`SEEK_END`|Fine del file|  
|`SEEK_CUR`|Posizione corrente del puntatore del file|  
|`SEEK_SET`|Inizio del file|  
  
## <a name="see-also"></a>Vedere anche  
 [fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)   
 [_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)