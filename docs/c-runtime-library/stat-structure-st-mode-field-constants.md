---
title: Costanti campo _stat Structure st_mode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- S_IFCHR
- S_IFDIR
- _S_IWRITE
- S_IFMT
- _S_IFDIR
- _S_IREAD
- S_IEXEC
- _S_IEXEC
- _S_IFMT
- S_IWRITE
- S_IFREG
- S_IREAD
- _S_IFCHR
- _S_IFREG
dev_langs:
- C++
helpviewer_keywords:
- S_IFDIR constant
- stat structure
- S_IWRITE constant
- S_IEXEC constant
- _S_IFREG constant
- S_IREAD constant
- stat structure, constants
- _S_IFMT constant
- st_mode field constants
- S_IFMT constant
- _S_IEXEC constant
- _S_IWRITE constant
- _S_IFDIR constant
- S_IFREG constant
- S_IFCHR constant
- _S_IREAD constant
- _S_IFCHR constant
ms.assetid: fd462004-7563-4766-8443-30b0a86174b6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f603757706bfdeeaaefe5b6d33cd94bb2624c389
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410135"
---
# <a name="stat-structure-stmode-field-constants"></a>Costanti campo _stat Structure st_mode
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Queste costanti vengono usate per indicare il tipo di file nel campo **st_mode** di [_stat structure](../c-runtime-library/standard-types.md).  
  
 Le costanti di maschera di bit sono descritte di seguito:  
  
|Costante|Significato|  
|--------------|-------------|  
|`_S_IFMT`|Maschera del tipo file|  
|`_S_IFDIR`|Directory|  
|`_S_IFCHR`|Speciale di carattere (indica un dispositivo se impostato)|  
|`_S_IFREG`|Regular|  
|`_S_IREAD`|Autorizzazione di lettura, proprietario|  
|`_S_IWRITE`|Autorizzazione di scrittura, proprietario|  
|`_S_IEXEC`|Autorizzazione di esecuzione/ricerca, proprietario|  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni _stat, _wstat](../c-runtime-library/reference/stat-functions.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [Tipi standard](../c-runtime-library/standard-types.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)