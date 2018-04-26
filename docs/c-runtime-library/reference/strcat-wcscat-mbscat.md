---
title: strcat, wcscat, _mbscat | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _mbscat
- wcscat
- strcat
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
- _mbscat
- _ftcscat
- _tcscat
- strcat
- wcscat
dev_langs:
- C++
helpviewer_keywords:
- concatenating strings
- mbscat function
- _ftcscat function
- _tcscat function
- ftcscat function
- strcat function
- strings [C++], appending
- _mbscat function
- tcscat function
- strings [C++], concatenating
- appending strings
- wcscat function
ms.assetid: c89c4ef1-817a-44ff-a229-fe22d06ba78a
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7998ae70985558550c3fed35709112897fca2a18
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="strcat-wcscat-mbscat"></a>strcat, wcscat, _mbscat

Aggiunge una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [strcat_s, wcscat_s, _mbscat_s](strcat-s-wcscat-s-mbscat-s.md).

> [!IMPORTANT]
> **mbscat_s** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *strcat(
   char *strDestination,
   const char *strSource
);
wchar_t *wcscat(
   wchar_t *strDestination,
   const wchar_t *strSource
);
unsigned char *_mbscat(
   unsigned char *strDestination,
   const unsigned char *strSource
);
template <size_t size>
char *strcat(
   char (&strDestination)[size],
   const char *strSource
); // C++ only
template <size_t size>
wchar_t *wcscat(
   wchar_t (&strDestination)[size],
   const wchar_t *strSource
); // C++ only
template <size_t size>
unsigned char *_mbscat(
   unsigned char (&strDestination)[size],
   const unsigned char *strSource
); // C++ only
```

### <a name="parameters"></a>Parametri

*strDestination*<br/>
Stringa di destinazione con terminazione Null.

*strSource*<br/>
Stringa di origine con terminazione null.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce la stringa di destinazione (*strDestination*). Nessun valore restituito è riservato per indicare un errore.

## <a name="remarks"></a>Note

Il **strcat** funzione Accoda *strSource* al *strDestination* e termina la stringa risulta con un carattere null. Il carattere iniziale di *strSource* sovrascrive il carattere di terminazione null di *strDestination*. Il comportamento delle **strcat** è definito se le stringhe di origine e di destinazione si sovrappongono.

> [!IMPORTANT]
> Poiché **strcat** non verifica la presenza di spazio sufficiente in *strDestination* prima di accodare *strSource*, è una causa possibile dei sovraccarichi del buffer. In alternativa, considerare l'uso di [strncat](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md).

**wcscat** e **mbscat** sono versioni a caratteri wide e caratteri multibyte di **strcat**. Gli argomenti e il valore restituito di **wcscat** sono caratteri wide, mentre quelli di stringhe **mbscat** sono stringhe a caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcscat**|**strcat**|**_mbscat**|**wcscat**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strcat**|\<string.h>|
|**wcscat**|\<string.h> o \<wchar.h>|
|**_mbscat**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strcpy](strcpy-wcscpy-mbscpy.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
