---
title: _write | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 9e6e654e043a71cbb6eb75c53077b14400b82d72
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="write"></a>_write
Scrive i dati in un file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _write(  
   int fd,  
   const void *buffer,  
   unsigned int count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Descrittore di file del file in cui vengono scritti i dati.  
  
 `buffer`  
 Dati da scrivere.  
  
 `count`  
 Numero di byte.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, `_write` restituisce il numero di byte effettivamente scritti. Se lo spazio effettivo rimanente sul disco è inferiore alle dimensioni del buffer che la funzione sta tentando di scrivere sul disco, `_write` ha esito negativo e no scarica i contenuti del buffer nel disco. Il valore restituito-1 indica un errore. Se vengono passati parametri non validi, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e `errno` viene impostato su uno di tre valori: `EBADF`, che indica che il descrittore di file non è valido o che il file non è aperto per la scrittura; `ENOSPC`, che indica che nel dispositivo non vi è spazio sufficiente per l'operazione; oppure `EINVAL`, che indica che `buffer` è un puntatore Null o che è stato passato un parametro `count` di byte dispari per la scrittura in un file in modalità Unicode.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Se il file è aperto in modalità testo, ogni carattere di avanzamento riga viene sostituito con un ritorno a capo - avanzamento riga coppia nell'output. La sostituzione non interessa il valore restituito.  
  
 Quando il file viene aperto nella modalità di conversione Unicode, ad esempio se `fd` viene aperto con `_open` o `_sopen` e un parametro di modalità che include `_O_WTEXT`, `_O_U16TEXT` o `_O_U8TEXT`, o se viene aperto con `fopen` e un parametro di modalità che include `ccs=UNICODE`, `ccs=UTF-16LE` o `ccs=UTF-8`, o se la modalità viene sostituita con una modalità di conversione Unicode tramite `_setmode`, `buffer` viene interpretato come un puntatore a una matrice di `wchar_t` che contiene dati **UTF-16**. Un tentativo di scrivere un numero dispari di byte in questa modalità causerà un errore di convalida del parametro.  
  
## <a name="remarks"></a>Note  
 La funzione `_write` scrive byte `count` da `buffer` nel file associato a `fd`. L'operazione di scrittura inizia dalla posizione corrente del puntatore del file (se presente) associato al file specifico. Se il file è aperto per l'aggiunta, l'operazione inizia dalla fine corrente del file. Al termine dell'operazione di scrittura, il puntatore del file viene incrementato del numero di byte effettivamente scritti.  
  
 Durante la scrittura nei file aperti in modalità testo, `_write` considera un carattere CTRL+Z come la fine del file logica. Durante la scrittura in un dispositivo, `_write` considera un carattere CTRL+Z nel buffer come un terminatore di output.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_write`|\<io.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
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
 [I/O di basso livello](../../c-runtime-library/low-level-i-o.md)   
 [fwrite](../../c-runtime-library/reference/fwrite.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_read](../../c-runtime-library/reference/read.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)
