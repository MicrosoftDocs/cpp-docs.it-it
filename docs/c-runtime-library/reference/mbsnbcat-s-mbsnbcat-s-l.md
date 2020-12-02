---
title: '`_mbsnbcat_s`, `_mbsnbcat_s_l`'
description: Descrizione API per le `_mbsnbcat_s` funzioni Microsoft Visual C++ e `_mbsnbcat_s_l`
ms.date: 12/2/2020
api_name:
- _mbsnbcat_s_l
- _mbsnbcat_s
- _o__mbsnbcat_s
- _o__mbsnbcat_s_l
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
- _mbsnbcat_s
- mbsnbcat_s
- _mbsnbcat_s_l
- mbsnbcat_s_l
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
ms.openlocfilehash: c7198d806d8ebe077b423ff2135b5bdcf66ffac6
ms.sourcegitcommit: 9c45483572db4470fe5db5a7b596d5770303098c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2020
ms.locfileid: "96523114"
---
# <a name="_mbsnbcat_s-_mbsnbcat_s_l"></a>`_mbsnbcat_s`, `_mbsnbcat_s_l`

Aggiunge a una stringa di caratteri multibyte, al massimo, i primi **n** byte di un'altra stringa di caratteri multibyte. Queste sono versioni di [ `_mbsnbcat` , `_mbsnbcat_l` ](mbsnbcat-mbsnbcat-l.md) che includono miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

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

*`dest`*\
Stringa di destinazione di caratteri multibyte con terminazione Null.

*`sizeInBytes`*\
Dimensione del *`dest`* buffer in byte.

*`src`*\
Stringa di origine di caratteri multibyte con terminazione Null.

*`count`*\
Numero di byte da *`src`* aggiungere a *`dest`* .

*`locale`*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario un codice di errore.

### <a name="error-conditions"></a>Condizioni di errore

|**`dest`**|*`sizeInBytes`*|*`src`*|Valore restituito|
|------------|-------------------|-----------|------------------|
|**`NULL`**|any|any|**`EINVAL`**|
|Qualsiasi|<= 0|any|**`EINVAL`**|
|Qualsiasi|any|**`NULL`**|**`EINVAL`**|

Se si verifica una qualsiasi condizione di errore, la funzione genera un errore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione restituisce **`EINVAL`** e imposta **errno** su **`EINVAL`** .

## <a name="remarks"></a>Osservazioni

La **`_mbsnbcat_s`** funzione aggiunge al *`dest`* massimo i primi *`count`* byte di *`src`* . Se il byte che precede immediatamente il carattere null in *`dest`* è un byte di apertura, viene sovrascritto dal byte iniziale di *`src`* . In caso contrario, il byte iniziale di *`src`* sovrascrive il carattere null di terminazione di *`dest`* . Se un byte null viene visualizzato in *`src`* prima *`count`* che vengano aggiunti byte, **`_mbsnbcat_s`** aggiunge tutti i byte da *`src`* fino al carattere null. Se *`count`* è maggiore della lunghezza di *`src`* , la lunghezza di *`src`* viene usata al posto di *`count`* . La stringa risultante termina con un carattere null. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

Il valore di output è influenzato dall'impostazione della **`LC_CTYPE`** categoria delle impostazioni locali. per ulteriori informazioni [, vedere setlocale _wsetlocale](setlocale-wsetlocale.md) . Le versioni di queste funzioni sono identiche, ad eccezione del fatto che quelle che non hanno il **`_l`** suffisso usano le impostazioni locali correnti e quelle che hanno il **`_l`** suffisso usano il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione e possono usare automaticamente le funzioni più recenti e sicure per sostituire le funzioni precedenti e meno sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|`Tchar.h` routine|`_UNICODE` e `_MBCS` non definiti|`_MBCS` definito|`_UNICODE` definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**`_tcsncat_s`**|[strncat_s](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)|**`_mbsnbcat_s`**|[wcsncat_s](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)|
|**`_tcsncat_s_l`**|**`_strncat_s_l`**|**`_mbsnbcat_s_l`**|**`_wcsncat_s_l`**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`_mbsnbcat_s`**|\<mbstring.h>|
|**`_mbsnbcat_s_l`**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)\
[`_mbsnbcmp`, `_mbsnbcmp_l`](mbsnbcmp-mbsnbcmp-l.md)\
[`_strncnt`, `_wcsncnt`, `_mbsnbcnt`, `_mbsnbcnt_l`, `_mbsnccnt`, `_mbsnccnt_l`](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)\
[`_mbsnbcpy`, `_mbsnbcpy_l`](mbsnbcpy-mbsnbcpy-l.md)\
[`_mbsnbcpy_s`, `_mbsnbcpy_s_l`](mbsnbcpy-s-mbsnbcpy-s-l.md)\
[`_mbsnbset`, `_mbsnbset_l`](mbsnbset-mbsnbset-l.md)\
[`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)\
[`strncat_s`, `_strncat_s_l`, `wcsncat_s`, `_wcsncat_s_l`, `_mbsncat_s`, `_mbsncat_s_l`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)
