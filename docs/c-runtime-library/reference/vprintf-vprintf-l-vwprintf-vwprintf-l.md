---
description: 'Altre informazioni su: vprintf, _vprintf_l, vwprintf, _vwprintf_l'
title: vprintf, _vprintf_l, vwprintf, _vwprintf_l
ms.date: 3/9/2021
api_name:
- vprintf
- _vwprintf_l
- _vprintf_l
- vwprintf
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
- vwprintf
- _vtprintf
helpviewer_keywords:
- vwprintf function
- _vwprintf_l function
- vwprintf_l function
- _vtprintf function
- vtprintf_l function
- vprintf function
- _vprintf_l function
- vprintf_l function
- vtprintf function
- _vtprintf_l function
- formatted text [C++]
ms.openlocfilehash: be3615902166f4e248b06d2145df404e5ba0fe76
ms.sourcegitcommit: b04b39940b0c1e265f80fc1951278fdb05a1b30a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/10/2021
ms.locfileid: "102621425"
---
# <a name="vprintf-_vprintf_l-vwprintf-_vwprintf_l"></a>vprintf, _vprintf_l, vwprintf, _vwprintf_l

Scrive l'output formattato tramite un puntatore a un elenco di argomenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int vprintf(
   const char *format,
   va_list argptr
);
int _vprintf_l(
   const char *format,
   locale_t locale,
   va_list argptr
);
int vwprintf(
   const wchar_t *format,
   va_list argptr
);
int _vwprintf_l(
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Specifica di formato.

*argptr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

**vprintf** e **vwprintf** restituiscono il numero di caratteri scritti, escluso il carattere null di terminazione, o un valore negativo se si verifica un errore di output. Se *Format* è un puntatore null o se la stringa di formato contiene caratteri di formattazione non validi, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i dati specificati in **stdout**.

**vwprintf** è la versione a caratteri wide di **vprintf**; le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **vprintf** attualmente non supporta l'output in un flusso Unicode.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns). Si noti che le stringhe di formato non valide vengono rilevate e generano un errore.
A partire da Windows 10 versione 2004 (Build 19041), la `printf` famiglia di funzioni stampa numeri a virgola mobile rappresentati esattamente in base alle regole IEEE 754 per l'arrotondamento. Nelle versioni precedenti di Windows, i numeri a virgola mobile rappresentativi esatti che terminano con "5" verrebbero sempre arrotondati. IEEE 754 indica che è necessario arrotondare al numero pari più vicino (anche noto come "arrotondamento del banco"). Ad esempio, sia `printf("%1.0f", 1.5)` che `printf("%1.0f", 2.5)` devono arrotondare a 2. In precedenza, 1,5 veniva arrotondato a 2 e 2,5 veniva arrotondato a 3. Questa modifica ha effetto solo sui numeri rappresentabili. 2,35, ad esempio, che, quando rappresentata in memoria, è più vicino a 2.35000000000000008, continua a arrotondare fino a 2,4. L'arrotondamento eseguito da queste funzioni ora rispetta anche la modalità di arrotondamento a virgola mobile impostata da [`fesetround`](fegetround-fesetround2.md) . In precedenza, l'arrotondamento sceglie sempre il `FE_TONEAREST` comportamento. Questa modifica influiscono solo sui programmi compilati con Visual Studio 2019 versione 16,2 e successive. Per utilizzare il comportamento di arrotondamento a virgola mobile legacy, collegare con [' legacy_stdio_float_rounding. obj '](../link-options.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vtprintf**|**vprintf**|**vprintf**|**vwprintf**|
|**_vtprintf_l**|**_vprintf_l**|**_vprintf_l**|**_vwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**vprintf**, **_vprintf_l**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**vwprintf**, **_vwprintf_l**|\<stdio.h> o \<wchar.h> , e \<stdarg.h>|\<varargs.h>*|

\* Richiesto per la compatibilità con UNIX V.

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout** e **stderr** devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
