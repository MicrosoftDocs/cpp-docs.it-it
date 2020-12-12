---
description: 'Altre informazioni su: fsetpos'
title: fsetpos
ms.date: 4/2/2020
api_name:
- fsetpos
- _o_fsetpos
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
- fsetpos
helpviewer_keywords:
- streams, setting position indicators
- fsetpos function
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
ms.openlocfilehash: e8259bcf4dba951bf6603fb5d4984db6ece0e266
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114221"
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

*flusso*<br/>
Puntatore alla struttura **FILE**.

*pos*<br/>
Archiviazione dell'indicatore di posizione.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **fsetpos** restituisce 0. In caso di errore, la funzione restituisce un valore diverso da zero e imposta **errno** su una delle costanti manifeste seguenti, definite in errno. H): **EBADF**, il che significa che il file non è accessibile o che l'oggetto a cui punta il *flusso* non è una struttura di file valida. o **EINVAL**, che indica che è stato passato un valore non valido per *Stream* o *pos* . Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **fsetpos** imposta l'indicatore di posizione del file per il *flusso* sul valore di *pos*, ottenuto in una chiamata precedente a **fgetpos** in base al *flusso*. La funzione Cancella l'indicatore di fine del file e Annulla gli effetti di [ungetc](ungetc-ungetwc.md) nel *flusso*. Dopo la chiamata a **fsetpos**, l'operazione successiva nel *flusso* può essere di input o di output.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fsetpos**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [fgetpos](fgetpos.md).

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetpos](fgetpos.md)<br/>
