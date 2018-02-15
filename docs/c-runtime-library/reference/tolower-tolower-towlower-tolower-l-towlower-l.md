---
title: tolower, _tolower, towlower, _tolower_l, _towlower_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _tolower_l
- towlower
- tolower
- _tolower
- _towlower_l
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
- ntdll.dll
- ucrtbase.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _totlower
- tolower
- _tolower
- towlower
dev_langs:
- C++
helpviewer_keywords:
- tolower_l function
- _tolower_l function
- totlower function
- string conversion, to different characters
- lowercase, converting to
- tolower function
- string conversion, case
- towlower function
- _tolower function
- _totlower function
- towlower_l function
- case, converting
- characters, converting
- _towlower_l function
ms.assetid: 86e0fc02-94ae-4472-9631-bf8e96f67b92
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c5e6f77960cb0beca886ec18125e47cd929a9dfe
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="tolower-tolower-towlower-tolowerl-towlowerl"></a>tolower, _tolower, towlower, _tolower_l, _towlower_l
Converte un carattere in minuscolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int tolower(  
   int c   
);  
int _tolower(  
   int c   
);  
int towlower(  
   wint_t c   
);  
int _tolower_l(  
   int c,  
   _locale_t locale   
);  
int _towlower_l(  
   wint_t c,  
   _locale_t locale   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `c`  
 Carattere da convertire.  
  
 [in] `locale`  
 Impostazioni locali da usare per la conversione specifica delle impostazioni locali.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste routine converte una copia di `c` in minuscolo, se la conversione è possibile, e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste routine converte una determinata lettera maiuscola in minuscola, se possibile e rilevante. La conversione della combinazione di maiuscole/minuscole di `towlower` dipende dalle impostazioni locali. La combinazione di maiuscole/minuscole viene modificata solo per i caratteri rilevanti per le impostazioni locali correnti. Le funzioni senza il suffisso `_l` usano le impostazioni locali correnti. Le versioni di queste funzioni con il suffisso `_l` accettano le impostazioni locali come parametro e usano tali impostazioni invece di quelle correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 Affinché `_tolower` possa fornire i risultati previsti, [__isascii](../../c-runtime-library/reference/isascii-isascii-iswascii.md) e [isupper](../../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md) devono entrambe restituire un valore diverso da zero.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_totlower`|`tolower`|`_mbctolower`|`towlower`|  
|`_totlower_l`|`_tolower_l`|`_mbctolower_l`|`_towlower_l`|  
  
> [!NOTE]
>  Le funzioni `_tolower_l` e `_towlower_l` non dipendono dalle impostazioni locali e non sono progettate per essere chiamate direttamente. Sono destinate solo all'uso interno per `_totlower_l`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`tolower`|\<ctype.h>|  
|`_tolower`|\<ctype.h>|  
|`towlower`|\<ctype.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
 [Funzioni to](../../c-runtime-library/to-functions.md)   
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)