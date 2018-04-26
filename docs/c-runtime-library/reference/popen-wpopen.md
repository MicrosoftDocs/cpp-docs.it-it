---
title: _popen, _wpopen | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _popen
- _wpopen
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- tpopen
- popen
- wpopen
- _popen
- _wpopen
- _tpopen
dev_langs:
- C++
helpviewer_keywords:
- tpopen function
- pipes, creating
- _popen function
- _tpopen function
- popen function
- wpopen function
- _wpopen function
ms.assetid: eb718ff2-c87d-4bd4-bd2e-ba317c3d6973
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 39ed5841c50dea2aad79db3ee73589fcaa5aa39b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="popen-wpopen"></a>_popen, _wpopen

Crea una pipe ed esegue un comando.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
FILE *_popen(
const char *command,
const char *mode
);
FILE *_wpopen(
const wchar_t *command,
const wchar_t *mode
);
```

### <a name="parameters"></a>Parametri

*command*<br/>
Comando da eseguire.

*mode*<br/>
Modalità del flusso restituito.

## <a name="return-value"></a>Valore restituito

Restituisce un flusso associato a un'estremità della pipe creata. L'altra estremità della pipe viene associata all'input standard o all'output standard del comando generato. Le funzioni restituiscono **NULL** in caso di errore. Se l'errore è un parametro non valido, ad esempio se *comando* oppure *modalità* è un puntatore null, o *modalità* non è una modalità valida **errno** è impostata su **EINVAL**. Per informazioni sulle modalità valide, vedere la sezione Note.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **popen** funzione crea un pipe ed esegue in modo asincrono una copia del processore dei comandi con la stringa specificata generata *comando*. La stringa di caratteri *mode* specifica il tipo di accesso richiesto, come segue.

**"r"** processo chiamante può leggere l'output standard del comando generato utilizzando il flusso restituito.

**"w"** il processo di chiamata può scrivere l'input standard del comando generato utilizzando il flusso restituito.

**"b"** aperto in modalità binaria.

**"t"** aperto in modalità testo.

> [!NOTE]
> Se utilizzato in un programma di Windows, il **popen** funzione restituisce un puntatore a file non valido che causa il blocco del programma per un periodo illimitato. **popen** funziona correttamente in un'applicazione console. Per creare un'applicazione Windows che reindirizza l'input e output, vedere [creazione di un processo figlio con reindirizzato Input e Output](http://msdn.microsoft.com/library/windows/desktop/ms682499) in Windows SDK.

**wpopen** è una versione a caratteri wide **popen**; il *percorso* argomento **wpopen** è una stringa di caratteri "wide". **wpopen** e **popen** si comportano in modo identico in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tpopen**|**_popen**|**_popen**|**_wpopen**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_popen**|\<stdio.h>|
|**_wpopen**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_popen.c
/* This program uses _popen and _pclose to receive a
* stream of text from a system process.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{

   char   psBuffer[128];
   FILE   *pPipe;

        /* Run DIR so that it writes its output to a pipe. Open this
         * pipe with read text attribute so that we can read it
         * like a text file.
         */

   if( (pPipe = _popen( "dir *.c /on /p", "rt" )) == NULL )
      exit( 1 );

   /* Read pipe until end of file, or an error occurs. */

   while(fgets(psBuffer, 128, pPipe))
   {
      printf(psBuffer);
   }

   /* Close pipe and print return value of pPipe. */
   if (feof( pPipe))
   {
     printf( "\nProcess returned %d\n", _pclose( pPipe ) );
   }
   else
   {
     printf( "Error: Failed to read the pipe to the end.\n");
   }
}
```

### <a name="sample-output"></a>Esempio di output

Questo output presuppone che esista un solo file nella directory corrente con estensione c.

```Output
 Volume in drive C is CDRIVE
 Volume Serial Number is 0E17-1702

Directory of D:\proj\console\test1

 07/17/98  07:26p                   780 popen.c
               1 File(s)            780 bytes
                             86,597,632 bytes free

Process returned 0
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[_pclose](pclose.md)<br/>
[_pipe](pipe.md)<br/>
