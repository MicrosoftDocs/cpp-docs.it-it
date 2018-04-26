---
title: _scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _scwprintf_p
- _scprintf_p_l
- _scwprintf_p_l
- _scprintf_p
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
apitype: DLLExport
f1_keywords:
- _scwprintf_p_l
- _sctprintf_p
- scprintf_p_l
- scprintf_p
- _sctprintf_p_l
- scwprintf_p
- _scprintf_p_l
- scwprintf_p_l
- _scprintf_p
- _scwprintf_p
dev_langs:
- C++
helpviewer_keywords:
- sctprintf_p_l function
- _scwprintf_p_l function
- scprintf_p_l function
- _scprintf_p function
- _scprintf_p_l function
- scprintf_p function
- sctprintf_p function
- _scwprintf_p function
- _sctprintf_p function
- scwprintf_p function
- scwprintf_p_l function
- _sctprintf_p_l function
ms.assetid: 8390d1e1-2826-47a4-851f-6635a88087cc
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2d8f15036cc7e4ffeb2cd29388bff2c7e615bb59
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="scprintfp-scprintfpl-scwprintfp-scwprintfpl"></a>_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l

Restituisce il numero di caratteri nella stringa formattata, con la possibilità di specificare l'ordine in cui i parametri vengono utilizzati nella stringa di formato.

## <a name="syntax"></a>Sintassi

```C
int _scprintf_p(
   const char *format [,
   argument] ...
);
int _scprintf_p_l(
   const char *format,
   locale_t locale [,
   argument] ...
);
int _scwprintf_p (
   const wchar_t *format [,
   argument] ...
);
int _scwprintf_p _l(
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di controllo del formato.

*Argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri che verrebbero generati se la stringa dovesse essere stampata o inviata a un file o un buffer tramite i codici di formattazione specificati. Il valore restituito non include il carattere Null di terminazione. **scwprintf_p** esegue la stessa funzione per i caratteri "wide".

La differenza tra **scprintf_p** e **scprintf** consiste nel fatto che **scprintf_p** supporta i parametri posizionali, che consentono di specificare l'ordine in cui gli argomenti vengono utilizzati nella stringa di formato. Per altre informazioni, vedere [printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md) (Parametri posizionali printf_p).

Se *formato* è un **NULL** puntatore, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni *argomento* (se presente) viene convertito in base alla specifica del formato corrispondente in *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso modulo e funziona come le *formato* argomento per [printf](printf-printf-l-wprintf-wprintf-l.md).

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**sctprintf_p**|**_scprintf_p**|**_scprintf_p**|**_scwprintf_p**|
|**sctprintf_p_l**|**_scprintf_p_l**|**_scprintf_p_l**|**_scwprintf_p_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**scprintf_p**, **scprintf_p_l**|\<stdio.h>|
|**scwprintf_p**, **scwprintf_p_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_scprintf, _scprintf_l, _scwprintf, _scwprintf_l](scprintf-scprintf-l-scwprintf-scwprintf-l.md)<br/>
[_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)<br/>
