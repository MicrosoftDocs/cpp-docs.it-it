---
title: _fwrite_nolock
ms.date: 11/04/2016
api_name:
- _fwrite_nolock
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _fwrite_nolock
- fwrite_nolock
helpviewer_keywords:
- fwrite_nolock function
- streams, writing data to
- _fwrite_nolock function
ms.assetid: 2b4ec6ce-742e-4615-8407-44a0a18ec1d7
ms.openlocfilehash: 035ee1d958c6ea6a13481d92311733ded9ed5f2c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956208"
---
# <a name="_fwrite_nolock"></a>_fwrite_nolock

Scrive i dati in un flusso senza bloccare il thread.

## <a name="syntax"></a>Sintassi

```C
size_t _fwrite_nolock(
   const void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Puntatore ai dati da scrivere.

*size*<br/>
Dimensione dell'elemento in byte.

*count*<br/>
Numero massimo di elementi da scrivere.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Uguale a [fwrite](fwrite.md).

## <a name="remarks"></a>Note

Questa funzione è una versione non di blocco di **fwrite**. È identica a **fwrite** , con la differenza che non è protetta da interferenze da parte di altri thread. Potrebbe essere più veloce perché non comporta un sovraccarico che blocca altri thread. Utilizzare questa funzione solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fwrite_nolock**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [fread](fread.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fread](fread.md)<br/>
[_write](write.md)<br/>
