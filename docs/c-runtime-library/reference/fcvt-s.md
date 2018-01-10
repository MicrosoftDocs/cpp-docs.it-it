---
title: _fcvt_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _fcvt_s
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
- fcvt_s
- _fcvt_s
dev_langs: C++
helpviewer_keywords:
- fcvt_s function
- converting floating point, to strings
- floating-point functions, converting number to string
- _fcvt_s function
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
caps.latest.revision: "27"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9bd77d18f63885aa29f49ce8bd497f935d292e0b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fcvts"></a>_fcvt_s
Converte un numero a virgola mobile in una stringa. Questa è una versione di [_fcvt](../../c-runtime-library/reference/fcvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _fcvt_s(   
   char* buffer,  
   size_t sizeInBytes,  
   double value,  
   int count,  
   int *dec,  
   int *sign   
);  
template <size_t size>  
errno_t _fcvt_s(   
   char (&buffer)[size],  
   double value,  
   int count,  
   int *dec,  
   int *sign   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `buffer`  
 Buffer specificato che conterrà il risultato della conversione.  
  
 [in] `sizeInBytes`  
 Dimensioni del buffer in byte.  
  
 [in] `value`  
 Numero da convertire.  
  
 [in] `count`  
 Numero di cifre dopo il separatore decimale.  
  
 [out] `dec`  
 Puntatore alla posizione del separatore decimale archiviata.  
  
 [out] `sign`  
 Puntatore all'indicatore di segno archiviato.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Se uno parametro non è valido, come elencato nella tabella seguente, questa funzione richiama il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EINVAL`.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`buffer`|`sizeInBytes`|predefinito|count|dec|segno|Restituzione|Valore in `buffer`|  
|--------------|-------------------|-----------|-----------|---------|----------|------------|-----------------------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|Non modificato.|  
|Non `NULL` (punta alla memoria valida)|<=0|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|Non modificato.|  
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`NULL`|qualsiasi|`EINVAL`|Non modificato.|  
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`NULL`|`EINVAL`|Non modificato.|  
  
 **Problemi di sicurezza**  
  
 `_fcvt_s` può generare una violazione di accesso se `buffer` non punta a una memoria valida e non è `NULL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_fcvt_s` converte un numero a virgola mobile in una stringa di caratteri che termina con NULL. Il parametro `value` è il numero a virgola mobile da convertire. `_fcvt_s` archivia le cifre di `value` come stringa e aggiunge un carattere null ('\0'). Il parametro `count` specifica il numero di cifre da archiviare dopo il separatore decimale. Le cifre in eccesso vengono arrotondate a `count` posti. Se ci sono meno di `count` cifre, la stringa viene riempita con zeri.  
  
 Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e `sign` dopo la chiamata. Il parametro `dec` punta a un valore intero. Questo valore intero indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro `sign` punta a un numero intero che indica il segno di `value`. L'intero viene impostato su 0 se `value` è positivo e viene impostato su un numero diverso da zero se `value` è negativo.  
  
 Un buffer di lunghezza `_CVTBUFSIZE` è sufficiente per qualsiasi valore a virgola mobile.  
  
 La differenza tra `_ecvt_s` e `_fcvt_s` consiste nell'interpretazione del parametro `count`. `_ecvt_s`interpreta `count` come il numero totale di cifre nella stringa di output e `_fcvt_s` interpreta `count` come il numero di cifre dopo il separatore decimale.  
  
 In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, evitando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 Le versioni di debug di questa funzione riempiono prima il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|---------------------|---------------------|  
|`_fcvt_s`|\<stdlib.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** tutte le versioni delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// fcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char * buf = 0;  
  int decimal;  
  int sign;  
  int err;  
  
  buf = (char*) malloc(_CVTBUFSIZE);  
  err = _fcvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);  
  
  if (err != 0)  
  {  
     printf("_fcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
```Output  
Converted value: 120000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [_ecvt_s](../../c-runtime-library/reference/ecvt-s.md)   
 [_gcvt_s](../../c-runtime-library/reference/gcvt-s.md)   
 [_fcvt](../../c-runtime-library/reference/fcvt.md)