---
title: _chdir, _wchdir
ms.date: 11/04/2016
apiname:
- _wchdir
- _chdir
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- tchdir
- _chdir
- _wchdir
- _tchdir
- wchdir
helpviewer_keywords:
- _tchdir function
- _chdir function
- _wchdir function
- tchdir function
- wchdir function
- chdir function
- directories [C++], changing
ms.assetid: 85e9393b-62ac-45d5-ab2a-fa2217f6152e
ms.openlocfilehash: e4cf7a44864df0b5ecca531aab3db4546c25bb2c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556338"
---
# <a name="chdir-wchdir"></a>_chdir, _wchdir

Modifica la directory di lavoro corrente.

## <a name="syntax"></a>Sintassi

```C
int _chdir(
   const char *dirname
);
int _wchdir(
   const wchar_t *dirname
);
```

### <a name="parameters"></a>Parametri

*nomedir*<br/>
Percorso della nuova directory di lavoro.

## <a name="return-value"></a>Valore restituito

Se eseguite correttamente, queste funzioni restituiscono un valore pari a 0. Valore restituito di -1 indica un errore. Se non è stato possibile trovare il percorso specificato, **errno** è impostata su **ENOENT**. Se *dirname* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce -1.

## <a name="remarks"></a>Note

Il **ChDir** funzione modifica la directory di lavoro corrente per la directory specificata da *dirname*. Il *dirname* parametro deve fare riferimento a una directory esistente. Questa funzione può modificare la directory di lavoro corrente in qualsiasi unità. Se una nuova lettera di unità viene specificata nel *dirname*, viene modificata anche la lettera di unità predefinite. Ad esempio, se A è la lettera di unità predefinita e \BIN è la directory di lavoro corrente, la chiamata seguente consente di passare alla directory di lavoro corrente per l'unità C e stabilisce C come nuova unità predefinita:

```C
_chdir("c:\temp");
```

Quando si usa il carattere barra rovesciata facoltativo (**&#92;**) nei percorsi, è necessario inserire due barre rovesciate (**&#92;&#92;**) in una stringa C per rappresentare una singola barra rovesciata letterale ( **&#92;**).

**wchdir** è una versione a caratteri wide di **ChDir**; gli *dirname* argomento **wchdir** è una stringa di caratteri "wide". **wchdir** e **ChDir** hanno lo stesso comportamento in caso contrario.

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tchdir**|**_chdir**|**_chdir**|**_wchdir**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_chdir**|\<direct.h>|\<errno.h>|
|**_wchdir**|\<direct.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_chdir.c
// arguments: C:\WINDOWS

/* This program uses the _chdir function to verify
   that a given directory exists. */

#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( int argc, char *argv[] )
{

   if(_chdir( argv[1] ) )
   {
      switch (errno)
      {
      case ENOENT:
         printf( "Unable to locate the directory: %s\n", argv[1] );
         break;
      case EINVAL:
         printf( "Invalid buffer.\n");
         break;
      default:
         printf( "Unknown error.\n");
      }
   }
   else
      system( "dir *.exe");
}
```

```Output
Volume in drive C has no label.
Volume Serial Number is 2018-08A1

Directory of c:\windows

08/29/2002  04:00 AM         1,004,032 explorer.exe
12/17/2002  04:43 PM            10,752 hh.exe
03/03/2003  09:24 AM            33,792 ieuninst.exe
10/29/1998  04:45 PM           306,688 IsUninst.exe
08/29/2002  04:00 AM            66,048 NOTEPAD.EXE
03/03/2003  09:24 AM            33,792 Q330994.exe
08/29/2002  04:00 AM           134,144 regedit.exe
02/28/2003  06:26 PM            46,352 setdebug.exe
08/29/2002  04:00 AM            15,360 TASKMAN.EXE
08/29/2002  04:00 AM            49,680 twunk_16.exe
08/29/2002  04:00 AM            25,600 twunk_32.exe
08/29/2002  04:00 AM           256,192 winhelp.exe
08/29/2002  04:00 AM           266,752 winhlp32.exe
              13 File(s)      2,249,184 bytes
               0 Dir(s)  67,326,029,824 bytes free
```

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
