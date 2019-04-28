---
title: fsetpos
ms.date: 11/04/2016
apiname:
- fsetpos
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
- fsetpos
helpviewer_keywords:
- streams, setting position indicators
- fsetpos function
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
ms.openlocfilehash: 9854c71e381da6ec9a75d440b9588e2476bada7c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62287573"
---
# <a name="fsetpos"></a>fsetpos

Imposta l'indicatore di posizione del flusso.

## <a name="syntax"></a>Sintassi

```C
int fsetpos(
   FILE *stream,
   const fpos_t *pos
);
```

### <a name="parameters"></a>Parametri

*stream*<br/>
Puntatore alla struttura **FILE**.

*pos*<br/>
Archiviazione dell'indicatore di posizione.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **fsetpos** restituisce 0. In caso di errore, la funzione restituisce un valore diverso da zero e imposta **errno** a uno dei seguenti (definite in ERRNO di costanti di manifesto. H): **EBADF**, ovvero il file non è accessibile oppure l'oggetto che *flusso* punta a non è una struttura di file valido, o **EINVAL**, ovvero un valore valido per *flusso*  oppure *pos* è stato passato. Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **fsetpos** funzione imposta l'indicatore di posizione del file relativo *stream* al valore di *pos*, ottenuto in una chiamata precedente a **fgetpos**contro *stream*. La funzione Cancella l'indicatore di fine del file e Annulla eventuali effetti di [ungetc](ungetc-ungetwc.md) sul *stream*. Dopo avere chiamato **fsetpos**, l'operazione successiva nel *stream* può essere di input o output.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fsetpos**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [fgetpos](fgetpos.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetpos](fgetpos.md)<br/>
