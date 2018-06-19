---
title: _flushall | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _flushall
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
- _flushall
dev_langs:
- C++
helpviewer_keywords:
- flushall function
- flushing streams
- streams, flushing
- _flushall function
ms.assetid: 2cd73562-6d00-4ca2-b13c-80d0ae7870b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7fb094e2f99e0554320df69946470f42f461819d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398022"
---
# <a name="flushall"></a>_flushall

Scarica tutti i flussi; cancella tutti i buffer.

## <a name="syntax"></a>Sintassi

```C
int _flushall( void );
```

## <a name="return-value"></a>Valore restituito

**FlushAll** restituisce il numero di flussi aperti (input e output). Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Per impostazione predefinita, il **FlushAll** funzione scrive il contenuto di tutti i buffer associati ai flussi di output aperti sui file appropriati. In tutti i buffer associati ai flussi di input aperti vengono cancellati i contenuti correnti. (Questi buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso o quando un programma termina normalmente senza chiudere i flussi).

Se una lettura segue una chiamata a **FlushAll**, nuovi dati vengono letti dai file di input nei buffer. Tutti i flussi rimangono aperti dopo la chiamata a **FlushAll**.

La funzionalità di commit su disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a Commode.obj. Nel file eseguibile risultante, le chiamate a **FlushAll** scrivono il contenuto di tutti i buffer sul disco. Solo **FlushAll** e [fflush](fflush.md) interessati da commode.

Per informazioni sul controllo della funzionalità di commit al disco, vedere [I/O del flusso](../../c-runtime-library/stream-i-o.md), [fopen](fopen-wfopen.md) e [_fdopen](fdopen-wfdopen.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_flushall**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_flushall.c
// This program uses _flushall
// to flush all open buffers.

#include <stdio.h>

int main( void )
{
   int numflushed;

   numflushed = _flushall();
   printf( "There were %d streams flushed\n", numflushed );
}
```

```Output
There were 3 streams flushed
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_commit](commit.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[fflush](fflush.md)<br/>
[setvbuf](setvbuf.md)<br/>
