---
title: _swab | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _swab
- stdlib/_swab
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _swab
- stdlib/_swab
dev_langs:
- C++
helpviewer_keywords:
- _swab function
- swapping bytes
- swab function
- bytes, swapping
ms.assetid: 017142f2-050c-4f6a-8b49-6b094f58ec94
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01f23047436b7ff8cee16b42cc6ae0d8c2a9fd78
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="swab"></a>_swab
Inverte i byte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _swab(  
   char *src,  
   char *dest,  
   int n   
);  
```  
  
## <a name="parameters"></a>Parametri  
 `src`  
 Dati da copiare e invertire.  
  
 `dest`  
 Posizione di archiviazione per i dati convertiti.  
  
 `n`  
 Numero di byte da copiare e invertire.  
  
## <a name="return-value"></a>Valore restituito
 La funzione `swab` non restituisce un valore. La funzione imposta `errno` su `EINVAL` se il puntatore `src` o `dest` è Null oppure se `n` è minore di zero e viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).
 
## <a name="remarks"></a>Note  
 Se `n` è pari, la funzione `_swab` copia `n` byte da `src`, inverte ogni coppia di byte adiacenti e archivia il risultato in `dest`. Se `n` è dispari, `_swab` copia e inverte i primi `n-1` byte di `src` e il byte finale non viene copiato. La funzione `_swab` viene in genere usata per preparare i dati binari per il trasferimento in un computer che usa un ordine dei byte diverso.  
  
## <a name="requirements"></a>Requisiti  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_swab`|C: \<stdlib.h> C++: \<cstdlib> o \<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
```C 
// crt_swab.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
char from[] = "BADCFEHGJILKNMPORQTSVUXWZY";  
char to[] =   "...........................";  
  
int main()  
{  
    printf("Before: %s  %d bytes\n        %s\n\n", from, sizeof(from), to);  
    _swab(from, to, sizeof(from));  
    printf("After:  %s\n        %s\n\n", from, to);  
}  
```  
  
```Output  
Before: BADCFEHGJILKNMPORQTSVUXWZY  27 bytes  
        ...........................  
  
After:  BADCFEHGJILKNMPORQTSVUXWZY  
        ABCDEFGHIJKLMNOPQRSTUVWXYZ.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)