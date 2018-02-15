---
title: perror, _wperror | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _wperror
- perror
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _wperror
- _tperror
- perror
dev_langs:
- C++
helpviewer_keywords:
- _tperror function
- tperror function
- wperror function
- error messages, printing
- printing error messages
- _wperror function
- perror function
ms.assetid: 34fce792-16fd-4673-9849-cd88b54b6cd5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3929d35ac258823a70bf063f2e90e3ce8f1dfb4a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="perror-wperror"></a>perror, _wperror
Stampare un messaggio di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void perror(  
   const char *string   
);  
void _wperror(  
   const wchar_t *string   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `string`  
 Messaggio stringa da stampare.  
  
## <a name="remarks"></a>Note  
 La funzione `perror` stampa un messaggio di errore su `stderr`. `_wperror` è una versione a caratteri wide di **_perror`_wperror`. L'argomento**  per `string` è una stringa di caratteri wide. In caso contrario, `_wperror` e **_perror** si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tperror`|`perror`|`perror`|`_wperror`|  
  
 `string` viene prima stampato, seguito da due punti, quindi dal messaggio di errore del sistema per l'ultima chiamata di libreria che ha generato l'errore e, infine, da un carattere di nuova riga. Se `string` è un puntatore null o un puntatore a una stringa null, `perror` stampa solo il messaggio di errore del sistema.  
  
 Il numero dell'errore viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (definita in ERRNO.H). I messaggi di errore di sistema sono accessibili tramite la variabile [sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), ovvero una matrice dei messaggi ordinati in base al numero di errore. `perror` stampa il messaggio di errore appropriato utilizzando il valore `errno` come indice a `_sys_errlist`. Il valore della variabile [sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è definito come il numero massimo di elementi nella matrice `_sys_errlist`.  
  
 Per risultati accurati, chiamare `perror` subito dopo che una routine di libreria restituisce un errore. In caso contrario, le chiamate successive possono sovrascrivere il valore `errno`.  
  
 Nel sistema operativo Windows, alcuni valori `errno` elencati in ERRNO.H sono inutilizzati. Questi valori sono riservati per l'utilizzo del sistema operativo UNIX. Vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per un elenco di valori `errno` usati dal sistema operativo Windows. `perror` stampa una stringa vuota per qualsiasi valore `errno` non utilizzato da queste piattaforme.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`perror`|\<stdio.h> o \<stdlib.h>|  
|`_wperror`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_perror.c  
// compile with: /W3  
/* This program attempts to open a file named  
 * NOSUCHF.ILE. Because this file probably doesn't exist,  
 * an error message is displayed. The same message is  
 * created using perror, strerror, and _strerror.  
 */  
  
#include <fcntl.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
#include <share.h>  
  
int main( void )  
{  
   int  fh;  
  
   if( _sopen_s( &fh, "NOSUCHF.ILE", _O_RDONLY, _SH_DENYNO, 0 ) != 0 )  
   {  
      /* Three ways to create error message: */  
      perror( "perror says open failed" );  
      printf( "strerror says open failed: %s\n",  
         strerror( errno ) ); // C4996  
      printf( _strerror( "_strerror says open failed" ) ); // C4996  
      // Note: strerror and _strerror are deprecated; consider  
      // using strerror_s and _strerror_s instead.  
   }  
   else  
   {  
      printf( "open succeeded on input file\n" );  
      _close( fh );  
   }  
}  
```  
  
## <a name="output"></a>Output  
  
```  
perror says open failed: No such file or directory  
strerror says open failed: No such file or directory  
_strerror says open failed: No such file or directory  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [strerror, _strerror, _wcserror, \__wcserror](../../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)