---
title: HUGE_VAL, _HUGE | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _HUGE
apilocation:
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _HUGE
- HUGE_VAL
dev_langs:
- C++
helpviewer_keywords:
- _HUGE constant
- HUGE_VAL constant
- double value
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 27fbb0ae4f8bbe658c37c0e979ea97a4dcec2fb3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hugeval-huge"></a>HUGE_VAL, _HUGE
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <math.h>  
  
```  
  
## <a name="remarks"></a>Note  
 `HUGE_VAL` è il massimo valore double rappresentabile. Questo valore viene restituito da numerose funzioni matematiche di runtime quando si verifica un errore. Per alcune funzioni, viene restituito -`HUGE_VAL`. `HUGE_VAL` viene definito come `_HUGE`, ma le funzioni matematiche di runtime restituiscono `HUGE_VAL`. È inoltre necessario utilizzare `HUGE_VAL` nel codice, per coerenza.  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)