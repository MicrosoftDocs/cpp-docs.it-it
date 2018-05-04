---
title: _mbccpy_s, _mbccpy_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _mbccpy_s
- _mbccpy_s_l
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
- _mbccpy_s_l
- mbccpy_s_l
- mbccpy_s
- _mbccpy_s
dev_langs:
- C++
helpviewer_keywords:
- tccpy_s_l function
- _tccpy_s function
- _mbccpy_s function
- mbccpy_s function
- tccpy_s function
- mbccpy_s_l function
- _tccpy_s_l function
- _mbccpy_s_l function
ms.assetid: b6e965fa-53c1-4ec3-85ef-a1c4b4f2b2da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a3a52314209b62c818623e315757dcd358ec491
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="mbccpys-mbccpysl"></a>_mbccpy_s, _mbccpy_s_l

Copia un carattere multibyte da una stringa in un'altra stringa. Queste versioni di [_mbccpy, _mbccpy_l](mbccpy-mbccpy-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _mbccpy_s(
   unsigned char *dest,
   size_t buffSizeInBytes,
   int * pCopied,
   const unsigned char *src
);
errno_t _mbccpy_s_l(
   unsigned char *dest,
   size_t buffSizeInBytes,
   int * pCopied,
   const unsigned char *src,
   locale_t locale
);
template <size_t size>
errno_t _mbccpy_s(
   unsigned char (&dest)[size],
   int * pCopied,
   const unsigned char *src
); // C++ only
template <size_t size>
errno_t _mbccpy_s_l(
   unsigned char (&dest)[size],
   int * pCopied,
   const unsigned char *src,
   locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Destinazione della copia.

*buffSizeInBytes*<br/>
Dimensioni del buffer di destinazione.

*pCopied*<br/>
Riempito con il numero di byte copiati (1 o 2 se ha esito positivo). Passare **NULL** se non si è interessati al numero.

*src*<br/>
Caratteri multibyte da copiare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore. Se *src* oppure *dest* è **NULL**, o se più del **buffSizeinBytes** verrebbero copiati byte *dest*, quindi viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e **errno** è impostato su **EINVAL**.

## <a name="remarks"></a>Note

Il **mbccpy_s** funzione copia un carattere multibyte da *src* al *dest*. Se *src* non fa riferimento al byte iniziale di un carattere multibyte in base a una chiamata implicita a [ismbblead](ismbblead-ismbblead-l.md), quindi il singolo byte che *src* punta a viene copiato. Se *src* punta a un byte iniziale, ma il byte successivo è 0 e pertanto non valido, quindi viene copiato 0 *dest*, **errno** è impostata su **EILSEQ**e il restituito dalla funzione **EILSEQ**.

**mbccpy_s** non viene accodato un terminatore null; tuttavia, se *src* punta a un carattere null, viene copiato tale null *dest* (si tratta semplicemente una normale copia a un byte).

Il valore in *pCopied* viene riempita con il numero di byte copiati. I valori possibili sono 1 e 2 se l'operazione ha esito positivo. Se **NULL** viene passato, questo parametro viene ignorato.

|*src*|copiato *dest*|*pCopied*|Valore restituito|
|-----------|----------------------|---------------|------------------|
|byte non di apertura|byte non di apertura|1|0|
|0|0|1|0|
|byte di apertura non seguito da 0|byte di apertura non seguito da 0|2|0|
|byte di apertura seguito da 0|0|1|**EILSEQ**|

Si noti che la seconda riga è semplicemente un caso speciale della prima. Si noti inoltre che la tabella presuppone *buffSizeInBytes* >= *pCopied*.

**mbccpy_s** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **mbccpy_s_l** è identica a **mbccpy_s** ad eccezione del fatto che **mbccpy_s_l** utilizza le impostazioni locali passata per qualsiasi comportamento dipendente dalle impostazioni locali.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tccpy_s**|Esegue il mapping a una macro o a una funzione inline.|**_mbccpy_s**|Esegue il mapping a una macro o a una funzione inline.|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbccpy_s**|\<mbstring.h>|
|**_mbccpy_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
