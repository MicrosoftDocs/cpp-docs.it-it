---
title: _fileno
description: Riferimento API per _fileno; che ottiene il descrittore di file associato a un flusso.
ms.date: 4/2/2020
api_name:
- _fileno
- _o__fileno
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
- _fileno
helpviewer_keywords:
- file handles [C++], getting from streams
- fileno function
- _fileno function
- streams, getting file handles
ms.assetid: 86474174-2f17-4100-bcc4-352dd976c7b5
ms.openlocfilehash: c07f446cc3c5c29fb102a74b2b095957589eab46
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89554851"
---
# <a name="_fileno"></a>_fileno

Ottenere il descrittore di file associato al flusso.

## <a name="syntax"></a>Sintassi

```C
int _fileno(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**_fileno** restituisce il descrittore del file. Non viene restituito alcun errore. Il risultato non è definito se il *flusso* non specifica un file aperto. Se il flusso è **null**, **_fileno** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** su **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

> [!NOTE]
> Se **stdout** o **stderr** non è associato a un flusso di output (ad esempio, in un'applicazione Windows senza una finestra della console), il descrittore del file restituito è-2. Nelle versioni precedenti, il descrittore del file restituito era -1. Questa modifica consente alle applicazioni di distinguere questa condizione da un errore.

## <a name="remarks"></a>Osservazioni

La routine **_fileno** restituisce il descrittore di file attualmente associato al *flusso*. Questa routine viene implementata come funzione e come macro. Per informazioni sulla scelta di un'implementazione, vedere [Suggerimenti per la scelta tra funzioni e macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_fileno**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fileno.c
// This program uses _fileno to obtain
// the file descriptor for some standard C streams.
//

#include <stdio.h>

int main( void )
{
   printf( "The file descriptor for stdin is %d\n", _fileno( stdin ) );
   printf( "The file descriptor for stdout is %d\n", _fileno( stdout ) );
   printf( "The file descriptor for stderr is %d\n", _fileno( stderr ) );
}
```

```Output
The file descriptor for stdin is 0
The file descriptor for stdout is 1
The file descriptor for stderr is 2
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[_filelength, _filelengthi64](filelength-filelengthi64.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
