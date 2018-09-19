---
title: _popen, _wpopen | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a48e4112dc513923b3a933457a874409121fb1e7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087721"
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

Restituisce un flusso associato a un'estremità della pipe creata. L'altra estremità della pipe viene associata all'input standard o all'output standard del comando generato. Le funzioni restituiscono **NULL** in caso di errore. Se l'errore è un parametro non valido, ad esempio se *comandi* oppure *modalità* è un puntatore null, o *modalità* non è una modalità valida, **errno** è impostato su **EINVAL**. Per informazioni sulle modalità valide, vedere la sezione Note.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **popen** funzione crea una pipe ed esegue in modo asincrono una copia generata del processore di comando con la stringa specificata *comando*. La stringa di caratteri *mode* specifica il tipo di accesso richiesto, come segue.

|Modalità di accesso|Descrizione|
|-|-|
|**"r"**|Il processo chiamante può leggere l'output standard del comando generato usando il flusso restituito.|
|**"w"**|Il processo chiamante può scrivere nell'input standard del comando generato usando il flusso restituito.|
|**"b"**|Apertura in modalità binaria.|
|**"t"**|Apertura in modalità testo.|

> [!NOTE]
> Se usato in un programma di Windows, il **popen** funzione restituisce un puntatore di file non valido che fa sì che il programma smette di rispondere indefinitamente. **popen** funziona correttamente in un'applicazione console. Per creare un'applicazione Windows che reindirizza input e output, vedere [creazione di un processo figlio con reindirizzato Input e Output](/windows/desktop/ProcThread/creating-a-child-process-with-redirected-input-and-output) nel SDK di Windows.

**wpopen** è una versione a caratteri wide di **popen**; gli *percorso* argomento **wpopen** è una stringa di caratteri "wide". **wpopen** e **popen** hanno lo stesso comportamento in caso contrario.

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
