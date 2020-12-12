---
description: 'Altre informazioni su: _scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l'
title: _scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l
ms.date: 11/04/2016
api_name:
- _scwprintf_p
- _scprintf_p_l
- _scwprintf_p_l
- _scprintf_p
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: f3f4fa9ffd1a54756fa3dfb274ebeb3e49f0544c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288997"
---
# <a name="_scprintf_p-_scprintf_p_l-_scwprintf_p-_scwprintf_p_l"></a>_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l

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

*argument*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri che verrebbero generati se la stringa dovesse essere stampata o inviata a un file o un buffer tramite i codici di formattazione specificati. Il valore restituito non include il carattere Null di terminazione. **_scwprintf_p** esegue la stessa funzione per i caratteri wide.

La differenza tra **_scprintf_p** e **_scprintf** è che **_scprintf_p** supporta i parametri posizionali, che consente di specificare l'ordine in cui gli argomenti vengono utilizzati nella stringa di formato. Per altre informazioni, vedere [Parametri posizionali printf_p](../../c-runtime-library/printf-p-positional-parameters.md).

Se *Format* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ogni *argomento* , se presente, viene convertito in base alla specifica di formato corrispondente nel *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento *Format* per [printf](printf-printf-l-wprintf-wprintf-l.md).

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_sctprintf_p**|**_scprintf_p**|**_scprintf_p**|**_scwprintf_p**|
|**_sctprintf_p_l**|**_scprintf_p_l**|**_scprintf_p_l**|**_scwprintf_p_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_scprintf_p**, **_scprintf_p_l**|\<stdio.h>|
|**_scwprintf_p**, **_scwprintf_p_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_scprintf, _scprintf_l, _scwprintf, _scwprintf_l](scprintf-scprintf-l-scwprintf-scwprintf-l.md)<br/>
[_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)<br/>
