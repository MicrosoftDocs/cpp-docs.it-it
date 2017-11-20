---
title: Costanti setvbuf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _IOFBF
- _IONBF
- _IOLBF
dev_langs: C++
helpviewer_keywords:
- _IOFBF constant
- IOFBF constant
- IONBF constant
- _IOLBF constant
- IOLBF constant
- _IONBF constant
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 16a5a215657a6d447c43c7ba327ef0d5f31d4abb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setvbuf-constants"></a>Costanti setvbuf
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <stdio.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Queste costanti rappresentano il tipo di buffer per `setvbuf`.  
  
 I valori possibili sono forniti dalle costanti manifesto seguenti:  
  
|Costante|Significato|  
|--------------|-------------|  
|`_IOFBF`|Buffer completo: il buffer specificato nella chiamata a `setvbuf` viene utilizzato e la dimensione è specificata nella chiamata `setvbuf`. Se il puntatore del buffer è **NULL**, viene usato un buffer allocato automaticamente della dimensione specificata.|  
|`_IOLBF`|Uguale a `_IOFBF`.|  
|`_IONBF`|Nessun buffer viene utilizzato, indipendentemente dagli argomenti nella chiamata a `setvbuf`.|  
  
## <a name="see-also"></a>Vedere anche  
 [setbuf](../c-runtime-library/reference/setbuf.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)