---
title: _setmode
ms.date: 11/04/2016
apiname:
- _setmode
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
- _setmode
helpviewer_keywords:
- Unicode [C++], console output
- files [C++], modes
- _setmode function
- file translation [C++], setting mode
- files [C++], translation
- setmode function
ms.assetid: 996ff7cb-11d1-43f4-9810-f6097182642a
ms.openlocfilehash: 887936299dce0a13738f9dd891a168785d17c979
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50617438"
---
# <a name="setmode"></a>_setmode

Imposta la modalità di conversione di file.

## <a name="syntax"></a>Sintassi

```C
int _setmode (
   int fd,
   int mode
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file.

*mode*<br/>
Nuova modalità di conversione.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce la modalità di conversione precedente.

Se a questa funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** a una delle due **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, ovvero indica un valore non valido *modalità* argomento.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **setMode** funzione imposta *modalità* la modalità di conversione di file fornito dal *fd*. Il passaggio **o_text** come *modalità* imposta il testo (convertito è,) modalità. Combinazioni di ritorno a capo return-line feed (CR-LF) vengono convertite in una singola riga, carattere di avanzamento nell'input. I caratteri di avanzamento riga sono convertiti in combinazioni di ritorno a capo-avanzamento riga in fase di output. Il passaggio **O_BINARY** set (non convertita) modalità binaria, in cui queste conversioni sono eliminate.

È anche possibile passare **_O_U16TEXT**, **_O_U8TEXT**, o **o_wtext** per abilitare la modalità Unicode, come illustrato nel secondo esempio più avanti in questo documento. **setMode** viene in genere usato per modificare la modalità di traduzione predefinita di **stdin** e **stdout**, ma è possibile usarlo per qualsiasi file. Se si applicano **setMode** al descrittore di file per un flusso, chiamare **setMode** prima di eseguire qualsiasi operazione di input o output nel flusso.

> [!CAUTION]
> Se si scrittura dati in un flusso di file, scaricare esplicitamente il codice usando [fflush](fflush.md) prima di usare **setMode** per modificare la modalità. Se non si scarica il codice, è possibile che si ottenga comportamento imprevisto. Se non sono stati scritti dati nel flusso, non sarà necessario scaricare il codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_setmode**|\<io.h>|\<fcntl.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_setmode.c
// This program uses _setmode to change
// stdin from text mode to binary mode.

#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main( void )
{
   int result;

   // Set "stdin" to have binary mode:
   result = _setmode( _fileno( stdin ), _O_BINARY );
   if( result == -1 )
      perror( "Cannot set mode" );
   else
      printf( "'stdin' successfully changed to binary mode\n" );
}
```

```Output
'stdin' successfully changed to binary mode
```

## <a name="example"></a>Esempio

```C
// crt_setmodeunicode.c
// This program uses _setmode to change
// stdout to Unicode. Cyrillic and Ideographic
// characters will appear on the console (if
// your console font supports those character sets).

#include <fcntl.h>
#include <io.h>
#include <stdio.h>

int main(void) {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd\n");
    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_set_fmode](set-fmode.md)<br/>
