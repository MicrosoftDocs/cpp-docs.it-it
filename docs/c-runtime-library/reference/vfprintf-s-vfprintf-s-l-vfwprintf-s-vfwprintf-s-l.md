---
description: 'Altre informazioni su: vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l'
title: vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l
ms.date: 11/04/2016
api_name:
- vfwprintf_s
- _vfprintf_s_l
- vfprintf_s
- _vfwprintf_s_l
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
- _vftprintf_s
- vfwprintf_s
- vfprintf_s
helpviewer_keywords:
- vfprintf_s_l function
- vfwprintf_s_l function
- vfwprintf_s function
- _vfprintf_s_l function
- _vfwprintf_s_l function
- vftprintf_s_l function
- vfprintf_s function
- _vftprintf_s_l function
- formatted text [C++]
- _vftprintf_s function
ms.assetid: eab6f563-46e2-4806-963f-2b23f339ecdc
ms.openlocfilehash: 743bf613cc6e09f396072d6bd00060d6d30e662c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97279650"
---
# <a name="vfprintf_s-_vfprintf_s_l-vfwprintf_s-_vfwprintf_s_l"></a>vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l

Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Queste sono versioni di [vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int vfprintf_s(
   FILE *stream,
   const char *format,
   va_list argptr
);
int _vfprintf_s_l(
   FILE *stream,
   const char *format,
   locale_t locale,
   va_list argptr
);
int vfwprintf_s(
   FILE *stream,
   const wchar_t *format,
   va_list argptr
);
int _vfwprintf_s_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

*format*<br/>
Specifica di formato.

*argptr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

**vfprintf_s** e **vfwprintf_s** restituiscono il numero di caratteri scritti, escluso il carattere null di terminazione, o un valore negativo se si verifica un errore di output. Se il *flusso* o il *formato* è un puntatore null o se la stringa di formato contiene caratteri di formattazione non validi, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i dati specificati nel *flusso*.

Queste funzioni differiscono dalle versioni non sicure solo in quanto le versioni sicure verificano che la stringa di *formato* contenga caratteri di formattazione validi.

**vfwprintf_s** è la versione a caratteri wide di **vfprintf_s**; le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **vfprintf_s** attualmente non supporta l'output in un flusso Unicode.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vftprintf_s**|**vfprintf_s**|**vfprintf_s**|**vfwprintf_s**|
|**_vftprintf_s_l**|**_vfprintf_s_l**|**_vfprintf_s_l**|**_vfwprintf_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**vfprintf_s**, **_vfprintf_s_l**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**vfwprintf_s**, **_vfwprintf_s_l**|\<stdio.h> o \<wchar.h> , e \<stdarg.h>|\<varargs.h>*|

\* Richiesto per la compatibilità con UNIX V.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
