---
title: _strinc, _wcsinc, _mbsinc, _mbsinc_l
ms.date: 4/2/2020
api_name:
- _mbsinc
- _wcsinc
- _mbsinc_l
- _strinc
- _o__mbsinc
- _o__mbsinc_l
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
- mbsinc_l
- _strinc
- strinc
- _mbsinc
- _wcsinc
- wcsinc
- mbsinc
- _mbsinc_l
helpviewer_keywords:
- _mbsinc function
- wcsinc function
- mbsinc_l function
- _strinc function
- strinc function
- _mbsinc_l function
- mbsinc function
- _wcsinc function
- _tcsinc function
- tcsinc function
ms.assetid: 54685943-8e2c-45e9-a559-2d94930dc6b4
ms.openlocfilehash: 0cfbe857ec8bbcdec887d4594cee0bf2b66de380
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362902"
---
# <a name="_strinc-_wcsinc-_mbsinc-_mbsinc_l"></a>_strinc, _wcsinc, _mbsinc, _mbsinc_l

Sposta un puntatore di stringa in avanti di un carattere.

> [!IMPORTANT]
> **_mbsinc** e **_mbsinc_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *_strinc(
   const char *current,
   _locale_t locale
);
wchar_t *_wcsinc(
   const wchar_t *current,
   _locale_t locale
);
unsigned char *_mbsinc(
   const unsigned char *current
);
unsigned char *_mbsinc_l(
   const unsigned char *current,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*Corrente*<br/>
Puntatore di caratteri.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un puntatore al carattere che segue immediatamente *l'oggetto corrente.*

## <a name="remarks"></a>Osservazioni

La funzione **_mbsinc** restituisce un puntatore al primo byte del carattere multibyte che segue immediatamente *l'oggetto corrente.* **_mbsinc** riconosce le sequenze di caratteri multibyte in base alla tabella codici [multibyte](../../c-runtime-library/code-pages.md) attualmente in uso; **_mbsinc_l** è identico ad eccezione del fatto che utilizza invece il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

La funzione testo generico **_tcsinc**, definita in Tchar.h, esegue il mapping a **_mbsinc** se è stato definito **_MBCS** o a **_wcsinc** se è stato definito **_UNICODE.** In caso contrario, **_tcsinc** esegue il mapping a **_strinc**. **_strinc** e **_wcsinc** sono versioni a byte singolo e a caratteri wide di **_mbsinc**. **_strinc** e **_wcsinc** vengono forniti solo per questo mapping e non devono essere utilizzati in caso contrario. Per altre informazioni, vedere [Uso dei mapping di testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping di testo generico](../../c-runtime-library/generic-text-mappings.md).

Se *current* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **EINVAL** e imposta **errno** su **EINVAL**.

> [!IMPORTANT]
> Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer. I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsinc**|\<mbstring.h>|
|**_mbsinc_l**|\<mbstring.h>|
|**_strinc**|\<tchar.h>|
|**_wcsinc**|\<tchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strdec, _wcsdec, _mbsdec, _mbsdec_l](strdec-wcsdec-mbsdec-mbsdec-l.md)<br/>
[_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
