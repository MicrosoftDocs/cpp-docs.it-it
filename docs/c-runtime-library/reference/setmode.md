---
title: _setmode
ms.date: 4/2/2020
api_name:
- _setmode
- _o__setmode
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 36d2130d4039f1f87f7f54fc26ad02cb8d519b4a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81353829"
---
# <a name="_setmode"></a>_setmode

Imposta la modalità di conversione di file.

## <a name="syntax"></a>Sintassi

```C
int _setmode (
   int fd,
   int mode
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Descrittore di file.

*Modalità*<br/>
Nuova modalità di conversione.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce la modalità di conversione precedente.

Se a questa funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** su **EBADF**, che indica un descrittore di file non valido, oppure **eINVAL**, che indica un argomento *di modalità* non valida.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_setmode** imposta in *modalità* la modalità di conversione del file data da *fd*. Il **passaggio di _O_TEXT** come *modalità* imposta la modalità di testo, ovvero tradotto. Le combinazioni di avanzamento riga di ritorno a capo (CR-LF) vengono convertite in un singolo carattere di avanzamento riga all'input. I caratteri di avanzamento riga sono convertiti in combinazioni di ritorno a capo-avanzamento riga in fase di output. Il **passaggio _O_BINARY** imposta la modalità binaria (non tradotta), in cui queste traduzioni vengono soppresse.

È inoltre possibile passare **_O_U16TEXT** **, _O_U8TEXT**o **_O_WTEXT** per abilitare la modalità Unicode, come illustrato nel secondo esempio più avanti in questo documento.

> [!CAUTION]
> La modalità Unicode è per `wprintf`le funzioni di stampa wide (ad esempio, ) e non è supportata per le funzioni di stampa strette. L'utilizzo di una funzione di stampa stretta in un flusso in modalità Unicode attiva un'asserzione.

**_setmode** viene in genere utilizzata per modificare la modalità di conversione predefinita **stdin** e **stdout**, ma è possibile utilizzarla su qualsiasi file. Se si applica **_setmode** al descrittore di file per un flusso, chiamare **_setmode** prima di eseguire qualsiasi operazione di input o output nel flusso.

> [!CAUTION]
> Se si scrivono dati in un flusso di file, scaricare in modo esplicito il codice utilizzando [fflush](fflush.md) prima di utilizzare **_setmode** per modificare la modalità. Se non si scarica il codice, è possibile che si ottenga comportamento imprevisto. Se non sono stati scritti dati nel flusso, non sarà necessario scaricare il codice.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_setmode**|\<io.h>|\<fcntl.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_set_fmode](set-fmode.md)<br/>
