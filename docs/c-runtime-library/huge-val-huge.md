---
title: HUGE_VAL, _HUGE | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _HUGE
apilocation: msvcrt.dll
apitype: DLLExport
f1_keywords:
- _HUGE
- HUGE_VAL
dev_langs: C++
helpviewer_keywords:
- _HUGE constant
- HUGE_VAL constant
- double value
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4c3ea9b33c4eae9d39f4df49140dcc14db1a660e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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