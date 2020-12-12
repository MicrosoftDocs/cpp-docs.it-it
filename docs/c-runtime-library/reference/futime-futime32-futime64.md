---
description: 'Altre informazioni su: _futime, _futime32, _futime64'
title: _futime, _futime32, _futime64
ms.date: 4/2/2020
api_name:
- _futime64
- _futime32
- _futime
- _o__futime32
- _o__futime64
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: d0e438c14d8fa7ba472be77d9d6f064b41d61431
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273761"
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

*FD*<br/>
Descrittore di file del file aperto.

*FILETIME*<br/>
Puntatore alla struttura contenente la nuova data di modifica.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo. Quando si verifica un errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, che indica un parametro non valido.

## <a name="remarks"></a>Commenti

La routine **_futime** imposta la data di modifica e l'ora di accesso nel file aperto associato a *FD*. **_futime** è identico a [_utime](utime-utime32-utime64-wutime-wutime32-wutime64.md), ad eccezione del fatto che il relativo argomento è il descrittore di file aperto, anziché il nome di un file o un percorso di un file. La struttura **_utimbuf** contiene i campi per la nuova data di modifica e l'ora di accesso. Entrambi i campi devono contenere valori validi. **_utimbuf32** e **_utimbuf64** sono identici ai **_utimbuf** tranne che per l'uso dei tipi time a 32 bit e 64 bit, rispettivamente. **_futime** e **_utimbuf** usano un tipo time a 64 bit e **_futime** è identico nel comportamento per **_futime64**. Se è necessario forzare il comportamento precedente, definire **_USE_32BIT_TIME_T**. In questo modo **_futime** comportamento identico al **_futime32** e fa in modo che la struttura **_utimbuf** usi il tipo di ora a 32 bit, rendendolo equivalente a **__utimbuf32**.

**_futime64**, che utilizza la struttura **__utimbuf64** , è in grado di leggere e modificare le date dei file fino 23:59:59, 31 dicembre 3000, UTC; mentre una chiamata a **_futime32** ha esito negativo se la data del file è successiva alla 23:59:59 del 18 gennaio 2038, UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per queste funzioni.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_futime**|\<sys/utime.h>|\<errno.h>|
|**_futime32**|\<sys/utime.h>|\<errno.h>|
|**_futime64**|\<sys/utime.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

### <a name="sample-output"></a>Output di esempio

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

## <a name="see-also"></a>Vedi anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
