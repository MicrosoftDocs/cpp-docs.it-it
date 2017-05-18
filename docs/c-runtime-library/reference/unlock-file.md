---
title: _unlock_file | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _unlock_file
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _unlock_file
- unlock_file
dev_langs:
- C++
helpviewer_keywords:
- files [C++], unlocking
- unlock_file function
- _unlock_file function
- unlocking files
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
caps.latest.revision: 10
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: bc676e9912264009e0af263ec88fb142fbb4d1fe
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="unlockfile"></a>_unlock_file
Sblocca un file, consentendo ad altri processi di accedere al file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _unlock_file(  
   FILE* file  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `file`  
 Handle di file.  
  
## <a name="remarks"></a>Note  
 La funzione `_unlock_file` sblocca il file specificato da `file`. Lo sblocco di un file consente l'accesso al file da altri processi. Questa funzione non deve essere chiamata a meno che non sia stata chiamata `_lock_file` in precedenza sul puntatore `file`. La chiamata di `_unlock_file` su un file non bloccato può causare un deadlock. Per un esempio, vedere [_lock_file](../../c-runtime-library/reference/lock-file.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_unlock_file`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_lock_file](../../c-runtime-library/reference/lock-file.md)
