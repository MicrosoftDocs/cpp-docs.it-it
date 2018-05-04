---
title: _isatty | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _isatty
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
- _isatty
dev_langs:
- C++
helpviewer_keywords:
- isatty function
- character device checking
- _isatty function
- checking character devices
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d4be35fce0a790751683a4bf8a0cceaf938fea82
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="isatty"></a>_isatty

Determina se un descrittore di file è associato a un dispositivo a caratteri.

## <a name="syntax"></a>Sintassi

```C
int _isatty( int fd );
```

### <a name="parameters"></a>Parametri

*fd*<br/>
Descrittore di file che fa riferimento al dispositivo da testare.

## <a name="return-value"></a>Valore restituito

**isatty** restituisce un valore diverso da zero se il descrittore è associato a un dispositivo a caratteri. In caso contrario, **isatty** restituisce 0.

## <a name="remarks"></a>Note

Il **isatty** funzione determina se *fd* è associato a un dispositivo a caratteri (un terminal, console, una stampante o della porta seriale).

Questa funzione convalida il *fd* parametro. Se *fd* è un puntatore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta **errno** alla **EBADF**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_isatty**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

### <a name="sample-output"></a>Esempio di output

```Output
stdout has not been redirected to a file
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
