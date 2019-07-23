---
title: _write
ms.date: 11/04/2016
apiname:
- _write
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
- _write
helpviewer_keywords:
- _write function
- write function
- files [C++], writing to
ms.assetid: 7b868c33-766f-4e1a-95a7-e8d25f0604c4
ms.openlocfilehash: 032bf332caee09fbe17d58eeae16ab44b98402d3
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68376301"
---
# <a name="write"></a>_write

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

*fd*<br/>
Descrittore di file del file in cui vengono scritti i dati.

*buffer*<br/>
Dati da scrivere.

*count*<br/>
Numero di byte.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, **_write** restituisce il numero di byte scritti. Se lo spazio effettivo rimanente sul disco è inferiore alle dimensioni del buffer che la funzione sta tentando di scrivere sul disco, **_write** ha esito negativo e non Scarica il contenuto del buffer sul disco. Un valore restituito di-1 indica un errore. Se vengono passati parametri non validi, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su uno dei tre valori seguenti: **EBADF**, che indica che il descrittore del file non è valido o il file non è aperto per la scrittura; **ENOSPC**, il che significa che lo spazio disponibile nel dispositivo non è sufficiente per l'operazione. o **EINVAL**, il che significa che il *buffer* è un puntatore null o che è stato passato un *numero* dispari di byte da scrivere in un file in modalità Unicode.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se il file viene aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con una coppia ritorno a capo/avanzamento riga nell'output. La sostituzione non influisce sul valore restituito.

Quando il file viene aperto in modalità di conversione Unicode, ad esempio se *FD* viene aperto utilizzando **_open** o **_sopen** e un parametro di modalità che include **_O_WTEXT**, **_O_U16TEXT**o **_O_U8TEXT**o se è aperto utilizzando **fopen** e un parametro di modalità che include **CCS = Unicode**, **CCS = UTF-16LE**o **CCS = UTF-8**o se la modalità viene modificata in modalità di conversione Unicode tramite **_setmode**, il*buffer* viene interpretato come un puntatore a un matrice di **wchar_t** che contiene dati **UTF-16** . Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.

## <a name="remarks"></a>Note

La funzione **_write** scrive il *numero* di byte dal *buffer* nel file associato a *FD*. L'operazione di scrittura inizia dalla posizione corrente del puntatore del file (se presente) associato al file specifico. Se il file è aperto per l'aggiunta, l'operazione inizia dalla fine corrente del file. Al termine dell'operazione di scrittura, il puntatore del file viene incrementato del numero di byte scritti.

Quando si scrive in file aperti in modalità testo, **_write** considera un carattere CTRL + Z come la fine logica del file. Quando si scrive in un dispositivo, **_write** considera un carattere CTRL + Z nel buffer come un terminatore di output.

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
            // An unrelated error occured
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
