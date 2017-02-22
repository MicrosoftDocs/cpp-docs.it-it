---
title: "_dupenv_s, _wdupenv_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_dupenv_s"
  - "_wdupenv_s"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-environment-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "tdupenv_s"
  - "_dupenv_s"
  - "wdupenv_s"
  - "dupenv_s"
  - "_tdupenv_s"
  - "_wdupenv_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_dupenv_s (funzione)"
  - "_tdupenv_s (funzione)"
  - "_wdupenv_s (funzione)"
  - "dupenv_s (funzione)"
  - "variabili di ambiente"
  - "tdupenv_s (funzione)"
  - "wdupenv_s (funzione)"
ms.assetid: b729ecc2-a31d-4ccf-92a7-5accedb8f8c8
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _dupenv_s, _wdupenv_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un valore dall'ambiente corrente.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime.  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t _dupenv_s(    char **buffer,    size_t *numberOfElements,    const char *varname ); errno_t _wdupenv_s(    wchar_t **buffer,    size_t *numberOfElements,    const wchar_t *varname );  
```  
  
#### Parametri  
 `buffer`  
 Buffer per l'archiviazione del valore della variabile.  
  
 `numberOfElements`  
 Dimensioni di `buffer`.  
  
 `varname`  
 Nome della variabile di ambiente.  
  
## Valore restituito  
 Zero se eseguita correttamente, un codice di errore se non eseguita correttamente.  
  
 Queste funzioni convalidano i propri parametri. Se `buffer` o `varname` è `NULL`, sarà richiamato il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, le funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
 Se queste funzioni non riescono ad allocare memoria sufficiente, impostano `buffer` su `NULL` e `numberOfElements` su 0, quindi restituiscono `ENOMEM`.  
  
## Note  
 La funzione `_dupenv_s` cerca `varname` nell'elenco delle variabili di ambiente.  Se la variabile viene trovata, `_dupenv_s` alloca un buffer e copia il valore della variabile nel buffer.  L'indirizzo e la lunghezza del buffer vengono restituiti in `buffer` e `numberOfElements`.  Allocando il buffer stesso, `_dupenv_s` offre un'alternativa più pratica a [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
> [!NOTE]
>  È responsabilità del programma chiamante liberare la memoria chiamando [free](../../c-runtime-library/reference/free.md).  
  
 Se la variabile non viene trovata, `buffer` viene impostato su `NULL`, `numberOfElements` viene impostato su 0 e il valore restituito è 0 perché questa situazione non viene considerata come una condizione di errore.  
  
 Se non si è interessati alla dimensione del buffer è possibile passare `NULL` per `numberOfElements`.  
  
 Per `_dupenv_s` non viene rilevata la distinzione tra maiuscole e minuscole nel sistema operativo Windows.  `_dupenv_s` usa la copia dell'ambiente a cui fa riferimento la variabile globale `_environ` per accedere all'ambiente.  Vedere la sezione Note in [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md) per informazioni su `_environ`.  
  
 Il valore in `buffer` è una copia del valore della variabile di ambiente. Modificarlo non influisce sull'ambiente.  Per modificare il valore di una variabile di ambiente, usare la funzione [\_putenv\_s, \_wputenv\_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md).  
  
 `_wdupenv_s` è una versione a caratteri wide di `_dupenv_s`. Gli argomenti di `_wdupenv_s` sono stringhe a caratteri wide.  La variabile globale `_wenviron` è una versione a caratteri wide di `_environ`.  Vedere la sezione Note in [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md) per altre informazioni su `_wenviron`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tdupenv_s`|`_dupenv_s`|`_dupenv_s`|`_wdupenv_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_dupenv_s`|\<stdlib.h\>|  
|`_wdupenv_s`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
## Esempio di output  
  
```  
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl  
nonexistentvariable = (null)  
```  
  
## Equivalente .NET Framework  
 [System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Costanti di ambiente](../../c-runtime-library/environmental-constants.md)   
 [\_dupenv\_s\_dbg, \_wdupenv\_s\_dbg](../../c-runtime-library/reference/dupenv-s-dbg-wdupenv-s-dbg.md)   
 [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [\_putenv\_s, \_wputenv\_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md)