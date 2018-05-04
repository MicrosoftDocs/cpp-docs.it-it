---
title: perror, _wperror | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 455bf63cdac425217c40068853b302edefb94f16
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="perror-wperror"></a>perror, _wperror

Stampare un messaggio di errore.

## <a name="syntax"></a>Sintassi

```C
void perror(
   const char *message
);
void _wperror(
   const wchar_t *message
);
```

### <a name="parameters"></a>Parametri

*messaggio* messaggio stringa da stampare.

## <a name="remarks"></a>Note

Il **perror** funzione viene stampato un messaggio di errore **stderr**. **wperror** è una versione a caratteri wide **pError**; il *messaggio* argomento **wperror** è una stringa di caratteri "wide". **wperror** e **pError** si comportano in modo identico in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tperror**|**perror**|**perror**|**_wperror**|

*messaggio* viene prima stampato, seguito da due punti, quindi dal messaggio di errore di sistema per l'ultima chiamata della libreria che ha generato l'errore e infine da un carattere di nuova riga. Se *messaggio* è un puntatore null o un puntatore a una stringa null **perror** viene stampato solo il messaggio di errore di sistema.

Il numero dell'errore viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (definita in ERRNO.H). I messaggi di errore di sistema sono accessibili tramite la variabile [sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), ovvero una matrice dei messaggi ordinati in base al numero di errore. **pError** stampa il messaggio di errore appropriato utilizzando il **errno** valore come indice **sys_errlist**. Il valore della variabile [sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è definito come il numero massimo di elementi nel **sys_errlist** matrice.

Per risultati accurati, chiamare **perror** immediatamente dopo la restituzione di una routine di libreria con un errore. In caso contrario, le chiamate successive possono sovrascrivere il **errno** valore.

Nelle finestre del sistema operativo, alcune **errno** i valori elencati in ERRNO. H sono inutilizzati. Questi valori sono riservati per l'utilizzo del sistema operativo UNIX. Vedere [doserrno, errno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per un elenco dei **errno** i valori utilizzati dal sistema operativo Windows. **pError** stampa una stringa vuota per qualsiasi **errno** non usata da queste piattaforme.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**perror**|\<stdio.h> o \<stdlib.h>|
|**_wperror**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
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

```Output
perror says open failed: No such file or directory
strerror says open failed: No such file or directory
_strerror says open failed: No such file or directory
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[strerror, _strerror, _wcserror, \__wcserror](strerror-strerror-wcserror-wcserror.md)<br/>
