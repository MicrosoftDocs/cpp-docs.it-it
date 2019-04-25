---
title: _locking
ms.date: 11/04/2016
apiname:
- _locking
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
- _locking
helpviewer_keywords:
- locking function
- bytes [C++], locking file
- files [C++], locking bytes
- files [C++], locking
- _locking function
ms.assetid: 099aaac1-d4ca-4827-aed6-24dff9844150
ms.openlocfilehash: 90327ed3388d4f18e0f64f92c33112c9ddd800f5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62157463"
---
# <a name="locking"></a>_locking

Blocca o sblocca i byte di un file.

## <a name="syntax"></a>Sintassi

```C
int _locking(
   int fd,
   int mode,
   long nbytes
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file.

*mode*<br/>
Azione di blocco da eseguire.

*nbytes*<br/>
Numero di byte da bloccare.

## <a name="return-value"></a>Valore restituito

**Locking** restituisce 0 se ha esito positivo. Valore restituito di -1 indica un errore, nel qual caso [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è impostato su uno dei valori seguenti.

|Valore errno|Condizione|
|-|-|
| **EACCES** | Violazione del blocco (file già bloccato o sbloccato). |
| **EBADF** | Descrittore di file non valido. |
| **EDEADLOCK** | Violazione di blocco. Restituito quando la **lk_lock** oppure **lk_rlck** flag è specificato e il file non può essere bloccato dopo 10 tentativi. |
| **EINVAL** | È stato assegnato un argomento non valido **Locking**. |

Se l'errore è causato da un parametro non corretto, ad esempio un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="remarks"></a>Note

Il **Locking** funzione blocca o Sblocca *nbytes* byte del file specificato dal *fd*. Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. Tutte le operazioni di blocco o sblocco iniziano dalla posizione corrente del puntatore del file e procedono per i successivi *nbytes* byte. È possibile bloccare byte oltre la fine del file.

L'argomento *mode* deve essere una delle seguenti costanti manifeste, definite in Locking.h.

|*modalità* valore|Effetto|
|-|-|
| **_LK_LOCK** | Blocca i byte specificati. Se i byte non possono essere bloccati, il programma ripeterà immediatamente il tentativo dopo 1 secondo. Se, dopo 10 tentativi, i byte non possono essere bloccati, la costante restituisce un errore. |
| **_LK_NBLCK** | Blocca i byte specificati. Se i byte non possono essere bloccati, la costante restituisce un errore. |
| **_LK_NBRLCK** | Uguale allo **lk_nblck**. |
| **_LK_RLCK** | Uguale allo **lk_lock**. |
| **_LK_UNLCK** | Sblocca i byte specificati, che devono essere stati bloccati in precedenza. |

È possibile bloccare più aree di un file che non si sovrappongano. Un'area da sbloccare deve essere stata bloccata in precedenza. **Locking** unisce aree adiacenti; se due aree bloccate sono adiacenti, ogni area deve essere sbloccata separatamente. Le aree devono essere bloccate solo brevemente e devono essere sbloccate prima di chiudere un file o di uscire dal programma.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_locking**|\<io.h> e \<sys/locking.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_locking.c
/* This program opens a file with sharing. It locks
* some bytes before reading them, then unlocks them. Note that the
* program works correctly only if the file exists.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/locking.h>
#include <share.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>

int main( void )
{
   int  fh, numread;
   char buffer[40];

   /* Quit if can't open file or system doesn't
    * support sharing.
    */
   errno_t err = _sopen_s( &fh, "crt_locking.txt", _O_RDONLY, _SH_DENYNO,
                          _S_IREAD | _S_IWRITE );
   printf( "%d %d\n", err, fh );
   if( err != 0 )
      exit( 1 );

   /* Lock some bytes and read them. Then unlock. */
   if( _locking( fh, LK_NBLCK, 30L ) != -1 )
   {
      long lseek_ret;
      printf( "No one can change these bytes while I'm reading them\n" );
      numread = _read( fh, buffer, 30 );
      buffer[30] = '\0';
      printf( "%d bytes read: %.30s\n", numread, buffer );
      lseek_ret = _lseek( fh, 0L, SEEK_SET );
      _locking( fh, LK_UNLCK, 30L );
      printf( "Now I'm done. Do what you will with them\n" );
   }
   else
      perror( "Locking failed\n" );

   _close( fh );
}
```

### <a name="input-crtlockingtxt"></a>Input: crt_locking.txt

```Input
The first thirty bytes of this file will be locked.
```

## <a name="sample-output"></a>Esempio di output

```Output
No one can change these bytes while I'm reading them
30 bytes read: The first thirty bytes of this
Now I'm done. Do what you will with them
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
