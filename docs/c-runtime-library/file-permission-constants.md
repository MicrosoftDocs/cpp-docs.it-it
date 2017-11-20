---
title: Costanti di autorizzazione file | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _S_IWRITE
- _S_IREAD
dev_langs: C++
helpviewer_keywords:
- S_IWRITE constant
- constants [C++], file attributes
- S_IREAD constant
- file permissions [C++]
- _S_IWRITE constant
- _S_IREAD constant
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: aa42ebf645c737ffe2f5db9647a3ba3912669b27
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="file-permission-constants"></a>Costanti di autorizzazione file
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Una di queste costanti è necessaria quando `_O_CREAT` (`_open`, `_sopen`) viene specificato.  
  
 L'argomento `pmode` specifica le impostazioni di autorizzazione del file come segue.  
  
|Costante|Significato|  
|--------------|-------------|  
|`_S_IREAD`|Lettura consentita|  
|`_S_IWRITE`|Scrittura consentita|  
|`_S_IREAD` &#124; `_S_IWRITE`|Lettura e scrittura consentite|  
  
 Una volta utilizzato come argomento `pmode` per `_umask`, la costante manifesto imposta l'impostazione di autorizzazione, come illustrato di seguito.  
  
|Costante|Significato|  
|--------------|-------------|  
|`_S_IREAD`|Scrittura non consentita (file di sola lettura)|  
|`_S_IWRITE`|Lettura non consentita (file di sola scrittura)|  
|`_S_IREAD` &#124; `_S_IWRITE`|Lettura e scrittura non consentite|  
  
## <a name="see-also"></a>Vedere anche  
 [_open, _wopen](../c-runtime-library/reference/open-wopen.md)   
 [_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)   
 [_umask](../c-runtime-library/reference/umask.md)   
 [Tipi standard](../c-runtime-library/standard-types.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)