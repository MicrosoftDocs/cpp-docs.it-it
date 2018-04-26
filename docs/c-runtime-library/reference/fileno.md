---
title: _fileno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _fileno
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
- _fileno
dev_langs:
- C++
helpviewer_keywords:
- file handles [C++], getting from streams
- fileno function
- _fileno function
- streams, getting file handles
ms.assetid: 86474174-2f17-4100-bcc4-352dd976c7b5
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9eb3950ce66f6bfeadd4cc25602ffe2f6abda409
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fileno"></a>_fileno

Ottenere il descrittore di file associato al flusso.

## <a name="syntax"></a>Sintassi

```C
int _fileno(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fileno** restituisce il descrittore del file. Non vi è restituzione di errori. Il risultato sarà indefinito se *flusso* non specifica un file aperto. Se flusso **NULL**, **fileno** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** alla **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

> [!NOTE]
> Se **stdout** oppure **stderr** non è associato a un flusso di output (ad esempio, in un'applicazione di Windows senza una finestra della console), il descrittore del file restituito è -2. Nelle versioni precedenti, il descrittore del file restituito era -1. Questa modifica consente alle applicazioni di distinguere questa condizione da un errore.

## <a name="remarks"></a>Note

Il **fileno** routine restituisce il descrittore di file attualmente associato *flusso*. Questa routine viene implementata come funzione e come macro. Per informazioni sulla scelta di un'implementazione, vedere [Suggerimenti per la scelta tra funzioni e macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fileno**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
