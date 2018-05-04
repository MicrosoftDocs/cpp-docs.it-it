---
title: fsetpos | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- streams, setting position indicators
- fsetpos function
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c381cf478a97d47efe10c68096fffe3d9fd8efdf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

*Flusso*<br/>
Puntatore alla struttura **FILE**.

*POS*<br/>
Archiviazione dell'indicatore di posizione.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **fsetpos** restituisce 0. In caso di errore, la funzione restituisce un valore diverso da zero e imposta **errno** a uno dei seguenti manifesto costanti (definite in ERRNO. H): **EBADF**, ovvero il file non è accessibile oppure l'oggetto che *flusso* punta a non è una struttura di file valido, o **EINVAL**, ovvero un valore valido per *flusso* oppure *pos* è stato passato. Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **fsetpos** funzione imposta l'indicatore di posizione del file per *flusso* al valore di *pos*, in una chiamata precedente a cui viene ottenuto **fgetpos**contro *flusso*. La funzione Cancella l'indicatore di fine del file e Annulla gli effetti delle [ungetc](ungetc-ungetwc.md) sul *flusso*. Dopo la chiamata **fsetpos**, l'operazione successiva nel *flusso* può essere di input o output.

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
