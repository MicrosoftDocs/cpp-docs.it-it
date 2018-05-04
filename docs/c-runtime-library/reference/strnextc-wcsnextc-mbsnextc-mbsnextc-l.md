---
title: _strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _strnextc
- _mbsnextc_l
- _mbsnextc
- _wcsnextc
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
apitype: DLLExport
f1_keywords:
- strnextc
- tcsnextc
- _mbsnextc_l
- _mbsnextc
- mbsnextc_l
- ftcsnextc
- mbsnextc
- _tcsnextc
- _wcsnextc
- _ftcsnextc
- _strnextc
- wcsnextc
dev_langs:
- C++
helpviewer_keywords:
- _mbsnextc function
- _tcsnextc function
- _wcsnextc function
- tcsnextc function
- strnextc function
- mbsnextc function
- _strnextc function
- _mbsnextc_l function
- mbsnextc_l function
- wcsnextc function
ms.assetid: e3086173-9eb5-4540-a23a-5d866bd05340
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f759ce9a4617ab0ca8e97ef308508d836b53b742
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strnextc-wcsnextc-mbsnextc-mbsnextcl"></a>_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l

Trova il carattere successivo in una stringa.

> [!IMPORTANT]
> **mbsnextc** e **mbsnextc_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
unsigned int _strnextc(
   const char *str
);
unsigned int _wscnextc(
   const wchar_t *str
);
unsigned int _mbsnextc(
   const unsigned char *str
);
unsigned int _mbsnextc_l(
   const unsigned char *str,
   _locale_t locale
);

```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa di origine.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il valore intero del carattere successivo nella *str*.

## <a name="remarks"></a>Note

Il **mbsnextc** funzione restituisce il valore intero del carattere multibyte successivo in *str*, senza far avanzare il puntatore di stringa. **mbsnextc** riconosce le sequenze di caratteri multibyte in base al [tabella codici multibyte](../../c-runtime-library/code-pages.md) attualmente in uso.

Se *str* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce 0.

**Nota sulla sicurezza** Questa API è esposta a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcsnextc**|**_strnextc**|**_mbsnextc**|**_wcsnextc**|

**strnextc** e **wcsnextc** sono stringhe di caratteri a byte singolo e le versioni di stringa di caratteri wide di **mbsnextc**. **wcsnextc** restituisce il valore intero del carattere "wide" successivo *str*; **strnextc** restituisce il valore intero del successivo carattere a byte singolo *str*. **strnextc** e **wcsnextc** vengono forniti solo per questo mapping e non deve essere utilizzato in caso contrario. Per altre informazioni, vedere [Uso dei mapping di testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping di testo generico](../../c-runtime-library/generic-text-mappings.md).

**mbsnextc_l** è identica ad eccezione del fatto che usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnextc**|\<mbstring.h>|
|**_mbsnextc_l**|\<mbstring.h>|
|**_strnextc**|\<tchar.h>|
|**_wcsnextc**|\<tchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strdec, _wcsdec, _mbsdec, _mbsdec_l](strdec-wcsdec-mbsdec-mbsdec-l.md)<br/>
[_strinc, _wcsinc, _mbsinc, _mbsinc_l](strinc-wcsinc-mbsinc-mbsinc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
