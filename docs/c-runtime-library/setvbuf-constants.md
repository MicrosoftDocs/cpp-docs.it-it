---
title: Costanti setvbuf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _IOFBF
- _IONBF
- _IOLBF
dev_langs:
- C++
helpviewer_keywords:
- _IOFBF constant
- IOFBF constant
- IONBF constant
- _IOLBF constant
- IOLBF constant
- _IONBF constant
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
caps.latest.revision: 6
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
ms.openlocfilehash: 72597020534100f86de855db0095995e50d10f9b
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

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
