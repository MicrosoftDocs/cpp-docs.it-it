---
description: 'Altre informazioni su: _mbccpy_s, _mbccpy_s_l'
title: _mbccpy_s, _mbccpy_s_l
ms.date: 4/2/2020
api_name:
- _mbccpy_s
- _mbccpy_s_l
- _o__mbccpy_s
- _o__mbccpy_s_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbccpy_s_l
- mbccpy_s_l
- mbccpy_s
- _mbccpy_s
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
ms.openlocfilehash: 6764c100fb52b025db2d8f79a72c7c6420a64bee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97303531"
---
# <a name="_mbccpy_s-_mbccpy_s_l"></a>_mbccpy_s, _mbccpy_s_l

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
Riempito con il numero di byte copiati (1 o 2 se ha esito positivo). Passare **null** se non si è interessati al numero.

*src*<br/>
Caratteri multibyte da copiare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore. Se *src* o *dest* è **null** o se vengono copiati più di **buffSizeInBytes** byte in *dest*, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e **errno** viene impostato su **EINVAL**.

## <a name="remarks"></a>Commenti

La funzione **_mbccpy_s** copia un carattere multibyte da *src* a *dest*. Se *src* non punta al byte di apertura di un carattere multibyte come determinato da una chiamata implicita a [_ismbblead](ismbblead-ismbblead-l.md), viene copiato il singolo byte a cui punta *src* . Se *src* punta a un byte di apertura, ma il byte seguente è 0 e pertanto non è valido, 0 viene copiato in *dest*, **errno** viene impostato su **EILSEQ** e la funzione restituisce **EILSEQ**.

**_mbccpy_s** non aggiunge un carattere di terminazione null. Tuttavia, se *src* punta a un carattere null, il valore null viene copiato in *dest* (si tratta semplicemente di una normale copia a byte singolo).

Il valore in *pCopied* è riempito con il numero di byte copiati. I valori possibili sono 1 e 2 se l'operazione ha esito positivo. Se viene passato **null** , questo parametro viene ignorato.

|*src*|copiato in *dest*|*pCopied*|Valore restituito|
|-----------|----------------------|---------------|------------------|
|byte non di apertura|byte non di apertura|1|0|
|0|0|1|0|
|byte di apertura non seguito da 0|byte di apertura non seguito da 0|2|0|
|byte di apertura seguito da 0|0|1|**EILSEQ**|

Si noti che la seconda riga è semplicemente un caso speciale della prima. Si noti inoltre che la tabella presuppone *buffSizeInBytes*  >=  *pCopied*.

**_mbccpy_s** usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **_mbccpy_s_l** è identico a **_mbccpy_s** ad eccezione del fatto che **_mbccpy_s_l** usa le impostazioni locali passate per qualsiasi comportamento dipendente dalle impostazioni locali.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tccpy_s**|Esegue il mapping a una macro o a una funzione inline.|**_mbccpy_s**|Esegue il mapping a una macro o a una funzione inline.|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbccpy_s**|\<mbstring.h>|
|**_mbccpy_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
