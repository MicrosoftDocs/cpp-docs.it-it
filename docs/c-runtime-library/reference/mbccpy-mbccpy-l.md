---
title: _mbccpy, _mbccpy_l
ms.date: 4/2/2020
api_name:
- _mbccpy
- _mbccpy_l
- _o__mbccpy
- _o__mbccpy_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbccpy
- tccpy
- ftccpy
- mbccpy
- _tccpy
- _ftccpy
helpviewer_keywords:
- _tccpy function
- _tccpy_l function
- tccpy_l function
- tccpy function
- mbccpy function
- _mbccpy_l function
- _mbccpy function
- mbccpy_l function
ms.assetid: 13f4de6e-7792-41ac-b319-dd9b135433aa
ms.openlocfilehash: 45f93e370e11cf38fc17da3557b21c636fcbc623
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341258"
---
# <a name="_mbccpy-_mbccpy_l"></a>_mbccpy, _mbccpy_l

Copia un carattere multibyte da una stringa in un'altra stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mbccpy_s, _mbccpy_s_l](mbccpy-s-mbccpy-s-l.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
void _mbccpy(
   unsigned char *dest,
   const unsigned char *src
);
void _mbccpy_l(
   unsigned char *dest,
   const unsigned char *src,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Destinazione della copia.

*src*<br/>
Caratteri multibyte da copiare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="remarks"></a>Osservazioni

La funzione **_mbccpy** copia un carattere multibyte da *src* a *dest*.

Questa funzione convalida i relativi parametri. Se **a _mbccpy** viene passato un puntatore null per *dest* o *src*, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL**.

**_mbccpy** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **_mbccpy_l** è identica a **_mbccpy** ad eccezione del fatto che **_mbccpy_l** utilizza le impostazioni locali passate per qualsiasi comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**Nota sulla sicurezza** Usare una stringa con terminazione Null. Le dimensioni della stringa con terminazione Null non devono essere superiori a quelle del buffer di destinazione. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns). I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tccpy**|Mapping a una macro o a una funzione inline|**_mbccpy**|Mapping a una macro o a una funzione inline|
|**_tccpy_l**|n/d|**_mbccpy_l**|n/d|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbccpy**|\<mbctype.h>|
|**_mbccpy_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
