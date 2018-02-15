---
title: _gcvt_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _gcvt_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _gcvt_s
- gcvt_s
dev_langs:
- C++
helpviewer_keywords:
- _gcvt_s function
- _CVTBUFSIZE
- floating-point functions, converting number to string
- gcvt_s function
- numbers, converting to strings
- conversions, floating point to strings
- strings [C++], converting from floating point
- CVTBUFSIZE
ms.assetid: 0a8d8a26-5940-4ae3-835e-0aa6ec1b0744
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 567738b488ae648dbd67ea1d2b5cdf34b649170c
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="gcvts"></a>_gcvt_s
Converte un valore a virgola mobile in stringa. Questa è una versione di [_gcvt](../../c-runtime-library/reference/gcvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _gcvt_s(   
   char *buffer,  
   size_t sizeInBytes,  
   double value,  
   int digits   
);  
template <size_t cchStr>  
errno_t _gcvt_s(   
   char (&buffer)[cchStr],  
   double value,  
   int digits   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `buffer`  
 Buffer per l'archiviazione del risultato della conversione.  
  
 [in] `sizeInBytes`  
 Dimensioni del buffer.  
  
 [in] `value`  
 Valore da convertire.  
  
 [in] `digits`  
 Numero di cifre significative archiviate.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. Se si verifica un errore a causa di un parametro non valido (vedere la tabella seguente per i valori non validi), viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito un codice di errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`buffer`|`sizeInBytes`|`value`|`digits`|INVIO|Valore in `buffer`|  
|--------------|-------------------|-------------|--------------|------------|-----------------------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|Non modificato.|  
|Non `NULL` (punta alla memoria valida)|zero|qualsiasi|qualsiasi|`EINVAL`|Non modificato.|  
|Non `NULL` (punta alla memoria valida)|qualsiasi|qualsiasi|>= `sizeInBytes`|`EINVAL`|Non modificato.|  
  
 **Problemi di sicurezza**  
  
 `_gcvt_s` può generare una violazione di accesso se `buffer` non punta alla memoria valida e non è `NULL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_gcvt_s` converte un elemento `value` a virgola mobile in una stringa di caratteri (che include un separatore decimale e un possibile byte del segno) e archivia la stringa in `buffer`. `buffer` deve essere sufficientemente grande da contenere il carattere convertito oltre a un carattere Null di terminazione, che viene aggiunto automaticamente. Un buffer di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore a virgola mobile. Se viene usata una dimensione del buffer pari a `digits` + 1, la funzione non sovrascriverà la fine del buffer, pertanto assicurarsi di specificare un buffer sufficiente per questa operazione. `_gcvt_s` tenta di produrre un numero di cifre pari a `digits` in formato decimale. Se non è possibile, produce un numero di cifre pari a `digits` in formato esponenziale. Gli zeri finali possono essere eliminati nella conversione.  
  
 In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 Le versioni di debug di questa funzione riempiono prima il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_gcvt_s`|\<stdlib.h>|\<error.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_gcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char buf[_CVTBUFSIZE];  
  int decimal;  
  int sign;  
  int err;  
  
  err = _gcvt_s(buf, _CVTBUFSIZE, 1.2, 5);  
  
  if (err != 0)  
  {  
     printf("_gcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
```Output  
Converted value: 1.2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [_ecvt_s](../../c-runtime-library/reference/ecvt-s.md)   
 [_fcvt_s](../../c-runtime-library/reference/fcvt-s.md)   
 [_gcvt](../../c-runtime-library/reference/gcvt.md)