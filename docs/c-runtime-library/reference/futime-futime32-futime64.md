---
title: _futime, _futime32, _futime64
ms.date: 11/04/2016
api_name:
- _futime64
- _futime32
- _futime
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
- api-ms-win-crt-time-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- futime
- _futime
- futime64
- _futime64
helpviewer_keywords:
- _futime function
- futime32 function
- futime64 function
- file modification time [C++]
- _futime64 function
- futime function
- _futime32 function
ms.assetid: b942ce8f-5cc7-4fa8-ab47-de5965eded53
ms.openlocfilehash: 3de638f08882e2aae4743311730afcd888c43a60
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956228"
---
# <a name="_futime-_futime32-_futime64"></a>_futime, _futime32, _futime64

Imposta la data di modifica in un file aperto.

## <a name="syntax"></a>Sintassi

```C
int _futime(
   int fd,
   struct _utimbuf *filetime
);
int _futime32(
   int fd,
   struct __utimbuf32 *filetime
);
int _futime64(
   int fd,
   struct __utimbuf64 *filetime
);
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file del file aperto.

*filetime*<br/>
Puntatore alla struttura contenente la nuova data di modifica.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo. Quando si verifica un errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, che indica un parametro non valido.

## <a name="remarks"></a>Note

La routine **_futime** imposta la data di modifica e l'ora di accesso nel file aperto associato a *FD*. **_futime** è identico a [_utime](utime-utime32-utime64-wutime-wutime32-wutime64.md), ad eccezione del fatto che il relativo argomento è il descrittore di file aperto, anziché il nome di un file o un percorso di un file. La struttura **_utimbuf** contiene i campi per la nuova data di modifica e l'ora di accesso. Entrambi i campi devono contenere valori validi. **_utimbuf32** e **_utimbuf64** sono identici a **_utimbuf** , tranne per l'uso dei tipi time a 32 bit e 64 bit, rispettivamente. **_futime** e **_utimbuf** usano un tipo time a 64 bit e **_futime** ha un comportamento identico a **_futime64**. Se è necessario forzare il comportamento precedente, definire **_USE_32BIT_TIME_T**. In questo modo il comportamento di **_futime** è identico a **_futime32** e fa in modo che la struttura **_utimbuf** usi il tipo time a 32 bit, rendendolo equivalente a **__utimbuf32**.

**_futime64**, che usa la struttura **__utimbuf64** , può leggere e modificare le date dei file fino 23:59:59, 31 dicembre 3000, UTC; mentre una chiamata a **_futime32** ha esito negativo se la data del file è successiva alla 23:59:59 del 18 gennaio 2038, UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per queste funzioni.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_futime**|\<sys/utime.h>|\<errno.h>|
|**_futime32**|\<sys/utime.h>|\<errno.h>|
|**_futime64**|\<sys/utime.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_futime.c
// This program uses _futime to set the
// file-modification time to the current time.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/utime.h>
#include <share.h>

int main( void )
{
   int hFile;

   // Show file time before and after.
   system( "dir crt_futime.c_input" );

   _sopen_s( &hFile, "crt_futime.c_input", _O_RDWR, _SH_DENYNO, 0 );

   if( _futime( hFile, NULL ) == -1 )
      perror( "_futime failed\n" );
   else
      printf( "File time modified\n" );

   _close (hFile);

   system( "dir crt_futime.c_input" );
}
```

### <a name="input-crt_futimec_input"></a>Input: crt_futime.c_input

```Input
Arbitrary file contents.
```

### <a name="sample-output"></a>Esempio di output

```Output
Volume in drive Z has no label.
Volume Serial Number is 5C68-57C1

Directory of Z:\crt

03/25/2004  10:40 AM                24 crt_futime.c_input
               1 File(s)             24 bytes
               0 Dir(s)  24,268,476,416 bytes free
Volume in drive Z has no label.
Volume Serial Number is 5C68-57C1

Directory of Z:\crt

03/25/2004  10:41 AM                24 crt_futime.c_input
               1 File(s)             24 bytes
               0 Dir(s)  24,268,476,416 bytes free
File time modified
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
