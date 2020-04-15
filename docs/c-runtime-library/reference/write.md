---
title: _write
ms.date: 4/2/2020
api_name:
- _write
- _o__write
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
- _write
helpviewer_keywords:
- _write function
- write function
- files [C++], writing to
ms.assetid: 7b868c33-766f-4e1a-95a7-e8d25f0604c4
ms.openlocfilehash: a616df570d266c335337d897da59a2a0ec69b40e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367387"
---
# <a name="_write"></a>_write

Scrive i dati in un file.

## <a name="syntax"></a>Sintassi

```C
int _write(
   int fd,
   const void *buffer,
   unsigned int count
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Descrittore di file del file in cui vengono scritti i dati.

*buffer*<br/>
Dati da scrivere.

*count*<br/>
Numero di byte.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **_write** restituisce il numero di byte scritti. Se lo spazio effettivo rimanente sul disco è inferiore alla dimensione del buffer che la funzione sta tentando di scrivere sul disco, **_write** non riesce e non scarica il contenuto del buffer sul disco. Un valore restituito di -1 indica un errore. Se vengono passati parametri non validi, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostato su uno dei tre valori seguenti: **EBADF**, ovvero il descrittore del file non è valido o il file non è aperto per la scrittura; **ENOSPC**, il che significa che non c'è abbastanza spazio sul dispositivo per l'operazione; o **EINVAL**, ovvero che *il buffer* era un puntatore null o che è stato passato un *conteggio* dispari di byte per essere scritto in un file in modalità Unicode.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se il file viene aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con una coppia di avanzamento riga di ritorno a capo nell'output. La sostituzione non influisce sul valore restituito.

Quando il file viene aperto in modalità di conversione Unicode, ad esempio se *fd* viene aperto utilizzando **_open** o **_sopen** e un parametro mode che include **_O_WTEXT**, **_O_U16TEXT**o **_O_U8TEXT**, oppure se viene aperto utilizzando **fopen** e un parametro mode che include **ccs , UNICODE**, **ccs , UTF-16LE**o **ccs , UTF-8**o se la modalità viene modificata in una modalità di conversione Unicode utilizzando **_setmode**,*il buffer* viene interpretato come un wchar_t matrice **di** dati **UTF-16.** Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.

## <a name="remarks"></a>Osservazioni

La funzione **_write** scrive i byte *di conteggio* dal *buffer* nel file associato a *fd*. L'operazione di scrittura inizia dalla posizione corrente del puntatore del file (se presente) associato al file specifico. Se il file è aperto per l'aggiunta, l'operazione inizia dalla fine corrente del file. Dopo l'operazione di scrittura, il puntatore del file viene aumentato del numero di byte scritti.

Quando si scrive in file aperti in modalità testo, **_write** considera un carattere CTRL , come la fine logica del file. Durante la scrittura in un dispositivo, **_write** considera un carattere CTRL nel buffer come un terminatore di output.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_write**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt__write.c
//
// This program opens a file for output and uses _write to write
// some bytes to the file.

#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <share.h>

char buffer[] = "This is a test of '_write' function";

int main( void )
{
   int         fileHandle = 0;
   unsigned    bytesWritten = 0;

   if ( _sopen_s(&fileHandle, "write.o", _O_RDWR | _O_CREAT,
                  _SH_DENYNO, _S_IREAD | _S_IWRITE) )
      return -1;

   if (( bytesWritten = _write( fileHandle, buffer, sizeof( buffer ))) == -1 )
   {
      switch(errno)
      {
         case EBADF:
            perror("Bad file descriptor!");
            break;
         case ENOSPC:
            perror("No space left on device!");
            break;
         case EINVAL:
            perror("Invalid parameter: buffer was NULL!");
            break;
         default:
            // An unrelated error occurred
            perror("Unexpected error!");
      }
   }
   else
   {
      printf_s( "Wrote %u bytes to file.\n", bytesWritten );
   }
   _close( fileHandle );
}
```

```Output
Wrote 36 bytes to file.
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[fwrite](fwrite.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_read](read.md)<br/>
[_setmode](setmode.md)<br/>
