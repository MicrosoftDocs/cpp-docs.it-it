---
title: _flushall
description: Riferimento API per _flushall; che Scarica tutti i flussi e cancella tutti i buffer.
ms.date: 4/2/2020
api_name:
- _flushall
- _o__flushall
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
- _flushall
helpviewer_keywords:
- flushall function
- flushing streams
- streams, flushing
- _flushall function
ms.assetid: 2cd73562-6d00-4ca2-b13c-80d0ae7870b5
ms.openlocfilehash: c93dddea50c182b86bd4d09ae9f214e87491e830
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556723"
---
# <a name="_flushall"></a>_flushall

Scarica tutti i flussi; cancella tutti i buffer.

## <a name="syntax"></a>Sintassi

```C
int _flushall( void );
```

## <a name="return-value"></a>Valore restituito

**_flushall** restituisce il numero di flussi aperti (input e output). Non viene restituito alcun errore.

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, la funzione **_flushall** scrive nei file appropriati il contenuto di tutti i buffer associati ai flussi di output aperti. In tutti i buffer associati ai flussi di input aperti vengono cancellati i contenuti correnti. (Questi buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso o quando un programma termina normalmente senza chiudere i flussi).

Se una lettura segue una chiamata a **_flushall**, i nuovi dati vengono letti dai file di input nei buffer. Tutti i flussi rimangono aperti dopo la chiamata a **_flushall**.

La funzionalità di commit su disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a commode. obj. Nel file eseguibile risultante, le chiamate a **_flushall** scrivono il contenuto di tutti i buffer su disco. Solo **_flushall** e [fflush](fflush.md) sono interessati da commode. obj.

Per informazioni sul controllo della funzionalità di commit su disco, vedere [Flusso I/O](../../c-runtime-library/stream-i-o.md), [fopen](fopen-wfopen.md) e [_fdopen](fdopen-wfdopen.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_flushall**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
