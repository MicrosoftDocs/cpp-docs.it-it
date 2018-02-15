---
title: _dupenv_s, _wdupenv_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _dupenv_s
- _wdupenv_s
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- tdupenv_s
- _dupenv_s
- wdupenv_s
- dupenv_s
- _tdupenv_s
- _wdupenv_s
dev_langs:
- C++
helpviewer_keywords:
- _dupenv_s function
- _tdupenv_s function
- _wdupenv_s function
- environment variables
- wdupenv_s function
- dupenv_s function
- tdupenv_s function
ms.assetid: b729ecc2-a31d-4ccf-92a7-5accedb8f8c8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2ec5e7b80d7d3ff2c7f67ec66e4e3e454ea3f5aa
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="dupenvs-wdupenvs"></a>_dupenv_s, _wdupenv_s
Ottiene un valore dall'ambiente corrente.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _dupenv_s(  
   char **buffer,  
   size_t *numberOfElements,  
   const char *varname  
);  
errno_t _wdupenv_s(  
   wchar_t **buffer,  
   size_t *numberOfElements,  
   const wchar_t *varname  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Buffer per l'archiviazione del valore della variabile.  
  
 `numberOfElements`  
 Dimensioni di `buffer`.  
  
 `varname`  
 Nome della variabile di ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se eseguita correttamente, un codice di errore se non eseguita correttamente.  
  
 Queste funzioni convalidano i propri parametri. Se `buffer` o `varname` è `NULL`, sarà richiamato il gestore dei parametri non validi come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, le funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
 Se queste funzioni non riescono ad allocare memoria sufficiente, impostano `buffer` su `NULL` e `numberOfElements` su 0, quindi restituiscono `ENOMEM`.  
  
## <a name="remarks"></a>Note  
 La funzione `_dupenv_s` cerca `varname` nell'elenco delle variabili di ambiente. Se la variabile viene trovata, `_dupenv_s` alloca un buffer e copia il valore della variabile nel buffer. L'indirizzo e la lunghezza del buffer vengono restituiti in `buffer` e `numberOfElements`. Allocando il buffer stesso, `_dupenv_s` offre un'alternativa più pratica a [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
> [!NOTE]
>  È responsabilità del programma chiamante liberare la memoria chiamando [free](../../c-runtime-library/reference/free.md).  
  
 Se la variabile non viene trovata, `buffer` viene impostato su `NULL`, `numberOfElements` viene impostato su 0 e il valore restituito è 0 perché questa situazione non viene considerata come una condizione di errore.  
  
 Se non si è interessati alla dimensione del buffer è possibile passare `NULL` per `numberOfElements`.  
  
 Per `_dupenv_s` non viene rilevata la distinzione tra maiuscole e minuscole nel sistema operativo Windows. `_dupenv_s` usa la copia dell'ambiente a cui fa riferimento la variabile globale `_environ` per accedere all'ambiente. Vedere la sezione Note in [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md) per una spiegazione di `_environ`.  
  
 Il valore in `buffer` è una copia del valore della variabile di ambiente. Modificarlo non influisce sull'ambiente. Per modificare il valore di una variabile di ambiente, usare la funzione [_putenv_s, _wputenv_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md).  
  
 `_wdupenv_s` è una versione a caratteri wide di `_dupenv_s`. Gli argomenti di `_wdupenv_s` sono stringhe a caratteri wide. La variabile globale `_wenviron` è una versione a caratteri wide di `_environ`. Vedere la sezione Note in [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md) per altre informazioni su `_wenviron`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tdupenv_s`|`_dupenv_s`|`_dupenv_s`|`_wdupenv_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_dupenv_s`|\<stdlib.h>|  
|`_wdupenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_dupenv_s.c  
#include  <stdlib.h>  
  
int main( void )  
{  
   char *pValue;  
   size_t len;  
   errno_t err = _dupenv_s( &pValue, &len, "pathext" );  
   if ( err ) return -1;  
   printf( "pathext = %s\n", pValue );  
   free( pValue );  
   err = _dupenv_s( &pValue, &len, "nonexistentvariable" );  
   if ( err ) return -1;  
   printf( "nonexistentvariable = %s\n", pValue );  
   free( pValue ); // It's OK to call free with NULL  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl  
nonexistentvariable = (null)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Environmental Constants](../../c-runtime-library/environmental-constants.md)  (Costanti di ambiente)  
 [_dupenv_s_dbg, _wdupenv_s_dbg](../../c-runtime-library/reference/dupenv-s-dbg-wdupenv-s-dbg.md)   
 [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [_putenv_s, _wputenv_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md)