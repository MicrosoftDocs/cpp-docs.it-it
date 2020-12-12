---
description: 'Altre informazioni su: ToLower, _tolower, towlower, _tolower_l, _towlower_l'
title: tolower, _tolower, towlower, _tolower_l, _towlower_l
ms.date: 4/2/2020
api_name:
- _tolower_l
- towlower
- tolower
- _tolower
- _towlower_l
- _o__tolower
- _o__tolower_l
- _o__towlower_l
- _o_tolower
- _o_towlower
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
- ntdll.dll
- ucrtbase.dll
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _totlower
- tolower
- _tolower
- towlower
helpviewer_keywords:
- tolower_l function
- _tolower_l function
- totlower function
- string conversion, to different characters
- lowercase, converting to
- tolower function
- string conversion, case
- towlower function
- _tolower function
- _totlower function
- towlower_l function
- case, converting
- characters, converting
- _towlower_l function
ms.assetid: 86e0fc02-94ae-4472-9631-bf8e96f67b92
ms.openlocfilehash: 5b686d9b511fe4864724f85be78ac511a6351ef7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318325"
---
# <a name="tolower-_tolower-towlower-_tolower_l-_towlower_l"></a>tolower, _tolower, towlower, _tolower_l, _towlower_l

Converte un carattere in minuscolo.

## <a name="syntax"></a>Sintassi

```C
int tolower(
   int c
);
int _tolower(
   int c
);
int towlower(
   wint_t c
);
int _tolower_l(
   int c,
   _locale_t locale
);
int _towlower_l(
   wint_t c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da convertire.

*locale*<br/>
Impostazioni locali da usare per la conversione specifica delle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine converte una copia di *c* in lettere minuscole se la conversione è possibile e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.

## <a name="remarks"></a>Commenti

Ognuna di queste routine converte una determinata lettera maiuscola in minuscola, se possibile e rilevante. La conversione del case di **towlower** è specifica delle impostazioni locali. La combinazione di maiuscole/minuscole viene modificata solo per i caratteri rilevanti per le impostazioni locali correnti. Le funzioni senza il suffisso **_L** usano le impostazioni locali attualmente impostate. Le versioni di queste funzioni che hanno il suffisso **_L** accettano le impostazioni locali come parametro e lo usano anziché le impostazioni locali attualmente impostate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Affinché **_tolower** forniscano i risultati previsti, è [necessario che i](isupper-isupper-l-iswupper-iswupper-l.md) [__isascii](isascii-isascii-iswascii.md) e l'oggetto sia restituito un valore diverso da zero.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_totlower**|**ToLower**|**_mbctolower**|**towlower**|
|**_totlower_l**|**_tolower_l**|**_mbctolower_l**|**_towlower_l**|

> [!NOTE]
> **_tolower_l** e **_towlower_l** non hanno alcuna dipendenza dalle impostazioni locali e non sono destinati a essere chiamati direttamente. Vengono fornite per uso interno da **_totlower_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ToLower**|\<ctype.h>|
|**_tolower**|\<ctype.h>|
|**towlower**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[is, ISW routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
