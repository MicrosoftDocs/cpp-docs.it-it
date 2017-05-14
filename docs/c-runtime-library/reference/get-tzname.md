---
title: _get_tzname | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _get_tzname
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
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _get_tzname
- get_tzname
dev_langs:
- C++
helpviewer_keywords:
- _get_tzname function
- time zones
- get_tzname function
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
caps.latest.revision: 18
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
ms.openlocfilehash: 7061018f217aec8a758b63697f3ef45dfbbdfa82
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="gettzname"></a>_get_tzname
Recupera la rappresentazione in forma di stringa di caratteri del nome del fuso orario o del nome del fuso orario dell'ora legale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _get_tzname(  
    size_t* pReturnValue,  
    char* timeZoneName,  
    size_t sizeInBytes,  
    int index      
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pReturnValue`  
 Lunghezza della stringa di `timeZoneName` incluso un carattere di terminazione NULL.  
  
 [out] `timeZoneName`  
 Indirizzo di una stringa di caratteri per la rappresentazione del nome del fuso orario o del nome del fuso orario dell'ora legale, a seconda di `index`.  
  
 [in] `sizeInBytes`  
 Dimensioni della stringa di caratteri `timeZoneName` in byte.  
  
 [in] `index`  
 Indice di uno dei due nomi di fuso orario da recuperare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. Un valore di tipo `errno` in caso contrario.  
  
 Se `timeZoneName` è `NULL` o `sizeInBytes` è zero o minore di zero (ma non entrambi), viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EINVAL`.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`pReturnValue`|`timeZoneName`|`sizeInBytes`|`index`|Valore restituito|Contenuto di `timeZoneName`|  
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|  
|Dimensioni del nome del fuso orario|`NULL`|0|0 o 1|0|non modificato|  
|Dimensioni del nome del fuso orario|any|> 0|0 o 1|0|Nome del fuso orario|  
|non modificato|`NULL`|> 0|qualsiasi|`EINVAL`|non modificato|  
|non modificato|any|zero|qualsiasi|`EINVAL`|non modificato|  
|non modificato|any|> 0|> 1|`EINVAL`|non modificato|  
  
## <a name="remarks"></a>Note  
 La funzione `_get_tzname` recupera la rappresentazione in forma di stringa di caratteri del nome del fuso orario o del nome del fuso orario dell'ora legale nell'indirizzo di `timeZoneName` a seconda del valore index, insieme alle dimensioni della stringa in `pReturnValue`. Se `timeZoneName` è `NULL` e `sizeInBytes` è zero, in `pReturnValue` viene restituita solo la dimensione in byte della stringa di uno dei nomi di fuso orario. I valori index devono essere 0 per il fuso orario standard o 1 per il fuso orario dell'ora legale. Per qualsiasi altro valore di index i risultati saranno indeterminati.  
  
### <a name="index-values"></a>Valori di index  
  
|`index`|Contenuto di `timeZoneName`|Valore predefinito di `timeZoneName`|  
|-------------|--------------------------------|----------------------------------|  
|0|Nome del fuso orario|"PST"|  
|1|Nome del fuso orario dell'ora legale|"PDT"|  
|> 1 o < 0|`errno` impostato su `EINVAL`|non modificato|  
  
 A meno che i valori non vengano modificati in modo esplicito in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".  Le dimensioni di queste matrici di caratteri sono regolamentate dal valore di `TZNAME_MAX`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_get_tzname`|\<time.h>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)   
 [_get_daylight](../../c-runtime-library/reference/get-daylight.md)   
 [_get_dstbias](../../c-runtime-library/reference/get-dstbias.md)   
 [_get_timezone](../../c-runtime-library/reference/get-timezone.md)   
 [TZNAME_MAX](../../c-runtime-library/tzname-max.md)
