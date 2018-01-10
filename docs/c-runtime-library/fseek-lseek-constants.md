---
title: Costanti fseek, _lseek | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SEEK_END
- SEEK_SET
- SEEK_CUR
dev_langs: C++
helpviewer_keywords:
- SEEK_SET constant
- SEEK_END constant
- SEEK_CUR constant
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4ccdee5d17b95772072f95a046e6e3c4d9a30e0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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