---
title: _isatty
ms.date: 4/2/2020
api_name:
- _isatty
- _o__isatty
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
- _isatty
helpviewer_keywords:
- isatty function
- character device checking
- _isatty function
- checking character devices
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
ms.openlocfilehash: c9611c2bd55ebc1602a73e4c71518716ea100420
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81343897"
---
# <a name="_isatty"></a>_isatty

Determina se un descrittore di file è associato a un dispositivo a caratteri.

## <a name="syntax"></a>Sintassi

```C
int _isatty( int fd );
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Descrittore di file che fa riferimento al dispositivo da testare.

## <a name="return-value"></a>Valore restituito

**_isatty** restituisce un valore diverso da zero se il descrittore è associato a un dispositivo di caratteri. In caso contrario, **restituisce _isatty** restituisce 0.

## <a name="remarks"></a>Osservazioni

La funzione **_isatty** determina se *fd* è associato a una periferica carattere (un terminale, una console, una stampante o una porta seriale).

Questa funzione convalida il parametro *fd.* Se *fd* è un puntatore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta **errno** su **EBADF**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_isatty**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_isatty.c
/* This program checks to see whether
* stdout has been redirected to a file.
*/

#include <stdio.h>
#include <io.h>

int main( void )
{
   if( _isatty( _fileno( stdout ) ) )
      printf( "stdout has not been redirected to a file\n" );
   else
      printf( "stdout has been redirected to a file\n");
}
```

### <a name="sample-output"></a>Output di esempio

```Output
stdout has not been redirected to a file
```

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
