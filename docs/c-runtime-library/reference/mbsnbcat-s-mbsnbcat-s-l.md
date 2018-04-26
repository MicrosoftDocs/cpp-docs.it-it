---
title: _mbsnbcat_s, _mbsnbcat_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _mbsnbcat_s_l
- _mbsnbcat_s
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
- _mbsnbcat_s
- mbsnbcat_s
- _mbsnbcat_s_l
- mbsnbcat_s_l
dev_langs:
- C++
helpviewer_keywords:
- _tcsncat function
- mbsnbcat_s function
- _mbsnbcat_s function
- _mbsnbcat_s_l function
- _tcsncat_s_l function
- tcsncat_s_l function
- mbsnbcat_s_l function
- tcsncat function
ms.assetid: 2c9e9be7-d979-4a54-8ada-23428b6648a9
caps.latest.revision: 28
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 78497f5915ec48afb677db9ee6850b733b28ae00
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="mbsnbcats-mbsnbcatsl"></a>_mbsnbcat_s, _mbsnbcat_s_l

Aggiunge a una stringa di caratteri multibyte, al massimo i primi **n** byte di un'altra stringa di caratteri multibyte. Queste sono versioni di [_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _mbsnbcat_s(
   unsigned char *dest,
   size_t sizeInBytes,
   const unsigned char *src,
   size_t count
);
errno_t _mbsnbcat_s_l(
   unsigned char *dest,
   size_t sizeInBytes,
   const unsigned char *src,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbcat_s(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbcat_s_l(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Stringa di destinazione di caratteri multibyte con terminazione Null.

*sizeInBytes*<br/>
Dimensioni di *dest* buffer in byte.

*src*<br/>
Stringa di origine di caratteri multibyte con terminazione Null.

*count*<br/>
Numero di byte da *src* da aggiungere alla *dest*.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario un codice di errore.

### <a name="error-conditions"></a>Condizioni di errore

|**distruttore**|*sizeInBytes*|*src*|Valore restituito|
|------------|-------------------|-----------|------------------|
|**NULL**|qualsiasi|qualsiasi|**EINVAL**|
|Qualsiasi|<= 0|qualsiasi|**EINVAL**|
|Qualsiasi|qualsiasi|**NULL**|**EINVAL**|

Se si verifica una qualsiasi condizione di errore, la funzione genera un errore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione restituisce **EINVAL** e imposta **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Il **mbsnbcat_s** funzione aggiunge *dest*, al massimo, il primo *conteggio* byte di *src*. Se il byte immediatamente prima del carattere null in *dest* è un byte iniziale, viene sovrascritto dal byte iniziale di *src*. In caso contrario, il byte iniziale di *src* sovrascrive il carattere di terminazione null di *dest*. Se un byte null viene visualizzato nella *src* prima *conteggio* byte vengano aggiunti, **mbsnbcat_s** aggiunge tutti i byte da *src*, fino a null carattere. Se *conteggio* è maggiore della lunghezza di *src*, la lunghezza del *src* è usato al posto di *conteggio*. La stringa risultante termina con un carattere null. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni sono identiche, ad eccezione del fatto che quelle che non hanno il **l** suffisso utilizzare le impostazioni locali correnti, mentre quelle che hanno il **l** suffisso usano il parametro delle impostazioni locali che passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente eliminando quindi la necessità di specificare un argomento di dimensione e possono usare automaticamente le funzioni più recenti e sicure che sostituiscono quelle precedenti, meno sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcsncat**|[strncat](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|**_mbsnbcat_s**|[wcsncat](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|
|**tcsncat_s_l**|**_strncat_s_l**|**_mbsnbcat_s_l**|**_wcsncat_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbcat_s**|\<mbstring.h>|
|**_mbsnbcat_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)<br/>
[_mbsnbcpy, _mbsnbcpy_l](mbsnbcpy-mbsnbcpy-l.md)<br/>
[_mbsnbcpy_s, _mbsnbcpy_s_l](mbsnbcpy-s-mbsnbcpy-s-l.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)<br/>
