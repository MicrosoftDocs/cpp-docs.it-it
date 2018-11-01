---
title: strcat_s, wcscat_s, _mbscat_s
ms.date: 11/04/2016
apiname:
- strcat_s
- _mbscat_s
- wcscat_s
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- strcat_s
- wcscat_s
- _mbscat_s
helpviewer_keywords:
- wcscat_s function
- strcat_s function
- mbscat_s function
- strings [C++], appending
- _mbscat_s function
- appending strings
ms.assetid: 0f2f9901-c5c5-480b-98bc-f8f690792fc0
ms.openlocfilehash: 7b622fbefc690317a4b57e3fd1bb54712b84f2a0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621312"
---
# <a name="strcats-wcscats-mbscats"></a>strcat_s, wcscat_s, _mbscat_s

Aggiunge una stringa. Queste versioni di [strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **mbscat_s** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t strcat_s(
   char *strDestination,
   size_t numberOfElements,
   const char *strSource
);
errno_t wcscat_s(
   wchar_t *strDestination,
   size_t numberOfElements,
   const wchar_t *strSource
);
errno_t _mbscat_s(
   unsigned char *strDestination,
   size_t numberOfElements,
   const unsigned char *strSource
);
template <size_t size>
errno_t strcat_s(
   char (&strDestination)[size],
   const char *strSource
); // C++ only
template <size_t size>
errno_t wcscat_s(
   wchar_t (&strDestination)[size],
   const wchar_t *strSource
); // C++ only
template <size_t size>
errno_t _mbscat_s(
   unsigned char (&strDestination)[size],
   const unsigned char *strSource
); // C++ only
```

### <a name="parameters"></a>Parametri

*strDestination*<br/>
Buffer della stringa di destinazione con terminazione Null.

*numberOfElements*<br/>
Dimensioni del buffer della stringa di destinazione.

*strSource*<br/>
Buffer della stringa di origine che termina con Null.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*strDestination*|*numberOfElements*|*strSource*|Valore restituito|Contenuto di *strDestination*|
|----------------------|------------------------|-----------------|------------------|----------------------------------|
|**NULL** o senza terminazione|qualsiasi|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|qualsiasi|**NULL**|**EINVAL**|*strDestination*[0] impostato su 0|
|qualsiasi|0 o troppo piccolo|qualsiasi|**ERANGE**|*strDestination*[0] impostato su 0|

## <a name="remarks"></a>Note

Il **strcat_s** funzione Accoda *strSource* al *strDestination* e termina la stringa risultante con un carattere null. Il carattere iniziale di *strSource* sovrascrive il carattere null di terminazione del *strDestination*. Il comportamento delle **strcat_s** sarà indefinito se le stringhe di origine e destinazione si sovrappongono.

Si noti che il secondo parametro rappresenta le dimensioni totali del buffer e non le dimensioni rimanenti:

```C
char buf[16];
strcpy_s(buf, 16, "Start");
strcat_s(buf, 16, " End");               // Correct
strcat_s(buf, 16 - strlen(buf), " End"); // Incorrect
```

**wcscat_s** e **mbscat_s** sono versioni a caratteri wide e caratteri multibyte di **strcat_s**. Gli argomenti e il valore restituito di **wcscat_s** sono caratteri wide, mentre quelli di stringhe **mbscat_s** sono stringhe a caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

Se *strDestination* è un puntatore null o non è con terminazione null, o se *strSource* è un **NULL** puntatore, o se la stringa di destinazione è troppo piccola, il parametro non valido gestore viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcscat_s**|**strcat_s**|**_mbscat_s**|**wcscat_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strcat_s**|\<string.h>|
|**wcscat_s**|\<string.h> o \<wchar.h>|
|**_mbscat_s**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere il codice di esempio in [strcpy_s, wcscpy_s, _mbscpy_s](strcpy-s-wcscpy-s-mbscpy-s.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
