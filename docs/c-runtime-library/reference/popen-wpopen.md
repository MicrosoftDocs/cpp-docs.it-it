---
title: _popen, _wpopen
description: Riferimento per le funzioni _popen della libreria Microsoft C Runtime (CRT) e _wpopen.
ms.date: 4/2/2020
api_name:
- _popen
- _wpopen
- _o__popen
- _o__wpopen
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- tpopen
- popen
- wpopen
- _popen
- _wpopen
- _tpopen
helpviewer_keywords:
- tpopen function
- pipes, creating
- _popen function
- _tpopen function
- popen function
- wpopen function
- _wpopen function
ms.assetid: eb718ff2-c87d-4bd4-bd2e-ba317c3d6973
no-loc:
- _popen
- _wpopen
- _tpopen
- _doserrno
- errno
- _sys_errlist
- _sys_nerr
- EINVAL
ms.openlocfilehash: 37e5bb491234e46a0e3330bc2fd42c16e54793fc
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82915285"
---
# <a name="_popen-_wpopen"></a>_popen, _wpopen

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

*comando*\
Comando da eseguire.

*modalità*\
Modalità del flusso restituito.

## <a name="return-value"></a>Valore restituito

Restituisce un flusso associato a un'estremità della pipe creata. L'altra estremità della pipe viene associata all'input standard o all'output standard del comando generato. Le funzioni restituiscono **NULL** in caso di errore. Se l'errore è causato da un parametro non valido, **errno** viene impostato su **EINVAL**. Per informazioni sulle modalità valide, vedere la sezione Note.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_popen** crea una pipe. Esegue quindi in modo asincrono una copia generata del processore dei comandi e usa il *comando* come riga di comando. La stringa di caratteri *mode* specifica il tipo di accesso richiesto, come segue.

|Modalità di accesso|Description|
|-|-|
|**r**|Il processo chiamante può leggere l'output standard del comando generato usando il flusso restituito.|
|**w**|Il processo chiamante può scrivere nell'input standard del comando generato usando il flusso restituito.|
|**b**|Apertura in modalità binaria.|
|**t**|Apertura in modalità testo.|

> [!NOTE]
> Se utilizzata in un programma Windows, la funzione **_popen** restituisce un puntatore di file non valido che impedisce la risposta illimitata del programma. **_popen** funziona correttamente in un'applicazione console. Per creare un'applicazione Windows che reindirizza input e output, vedere Creazione di [un processo figlio con input e output reindirizzati](/windows/win32/ProcThread/creating-a-child-process-with-redirected-input-and-output) nel Windows SDK.

**_wpopen** è una versione a caratteri wide di **_popen**; l'argomento *path* per **_wpopen** è una stringa di caratteri wide. **_wpopen** e **_popen** si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tpopen**|**_popen**|**_popen**|**_wpopen**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_popen**|\<stdio.h>|
|**_wpopen**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
      puts(psBuffer);
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

Questo output presuppone che esista un `.c` solo file nella directory corrente con estensione di file.

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

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)\
[_pclose](pclose.md)\
[_pipe](pipe.md)
