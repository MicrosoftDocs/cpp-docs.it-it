---
description: 'Altre informazioni su: _isatty'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 354cb0ba66c0c25291626cf4278935571357d058
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97303622"
---
# <a name="_isatty"></a>_isatty

Determina se un descrittore di file è associato a un dispositivo a caratteri.

## <a name="syntax"></a>Sintassi

```C
int _isatty( int fd );
```

### <a name="parameters"></a>Parametri

*FD*<br/>
Descrittore di file che fa riferimento al dispositivo da testare.

## <a name="return-value"></a>Valore restituito

**_isatty** restituisce un valore diverso da zero se il descrittore è associato a un dispositivo a caratteri. In caso contrario, **_isatty** restituisce 0.

## <a name="remarks"></a>Commenti

La funzione **_isatty** determina se *FD* è associato a un dispositivo a caratteri (un terminale, una console, una stampante o una porta seriale).

Questa funzione convalida il parametro *FD* . Se *FD* è un puntatore di file errato, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e **errno** viene impostato su **EBADF**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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

## <a name="see-also"></a>Vedi anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
