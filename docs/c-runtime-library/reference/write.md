---
title: _write | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
apitype: DLLExport
f1_keywords:
- _write
dev_langs:
- C++
helpviewer_keywords:
- _write function
- write function
- files [C++], writing to
ms.assetid: 7b868c33-766f-4e1a-95a7-e8d25f0604c4
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fcf10428e354c9e31ed66a949ccf0a803f8137a6
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Se ha esito positivo, **Write** restituisce il numero di byte effettivamente scritti. Se lo spazio effettivo rimanente sul disco è inferiore alla dimensione del buffer della funzione sta tentando di scrivere sul disco **Write** ha esito negativo e non consente di scaricare il contenuto del buffer sul disco. Il valore restituito-1 indica un errore. Se vengono passati parametri non validi, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostata su uno dei tre valori: **EBADF**, ovvero il descrittore del file non è valido o non è possibile aprire il file per la scrittura; **ENOSPC**, vale a dire che non vi è spazio sufficiente a sinistra sul dispositivo per l'operazione; oppure **EINVAL**, vale a dire che *buffer* era un puntatore null o che un dispari *conteggio* di byte è stato passato per essere scritto in un file in modalità Unicode.

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se il file è aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con un ritorno a capo - avanzamento riga coppia nell'output. La sostituzione non interessa il valore restituito.

Quando il file viene aperto in modalità di conversione Unicode, ad esempio, se *fd* viene aperto usando **Open** oppure **sopen** e un parametro modalità che include **_O_ WTEXT**, **_O_U16TEXT**, oppure **_O_U8TEXT**, o se viene aperto tramite **fopen** e un parametro modalità che include **ccs = UNICODE**, **ccs = UTF-16LE**, oppure **ccs = UTF-8**, o se la modalità viene modificata in una modalità di conversione Unicode tramite **setMode**:*buffer* viene interpretato come un puntatore a una matrice di **wchar_t** contenente **UTF-16** dati. Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.

## <a name="remarks"></a>Note

Il **Write** funzione scritture *conteggio* byte dal *buffer* nel file associato *fd*. L'operazione di scrittura inizia dalla posizione corrente del puntatore del file (se presente) associato al file specifico. Se il file è aperto per l'aggiunta, l'operazione inizia dalla fine corrente del file. Al termine dell'operazione di scrittura, il puntatore del file viene incrementato del numero di byte effettivamente scritti.

Durante la scrittura di file aperti in modalità testo, **Write** considera un carattere CTRL + Z come la logico fine del file. Durante la scrittura di un dispositivo **Write** considera un carattere CTRL + Z nel buffer come un carattere di terminazione di output.

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
