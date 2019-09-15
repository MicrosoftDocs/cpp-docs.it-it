---
title: _mbbtombc, _mbbtombc_l
ms.date: 11/04/2016
api_name:
- _mbbtombc_l
- _mbbtombc
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbbtombc_l
- _mbbtombc
- mbbtombc_l
- mbbtombc
helpviewer_keywords:
- mbbtombc_l function
- mbbtombc function
- _mbbtombc_l function
- _mbbtombc function
ms.assetid: 78593389-b0fc-43b6-8c1f-2a6bf702d64e
ms.openlocfilehash: 244e603a3234b755d19a1c1d0738e8c22d74b8e2
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952731"
---
# <a name="_mbbtombc-_mbbtombc_l"></a>_mbbtombc, _mbbtombc_l

Converte un carattere multibyte a byte singolo in un carattere multibyte a byte doppio corrispondente.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
unsigned int _mbbtombc(
   unsigned int c
);
unsigned int _mbbtombc_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere a byte singolo da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Se **_mbbtombc** converte correttamente *c*, restituisce un carattere multibyte; in caso contrario, restituisce *c*.

## <a name="remarks"></a>Note

La funzione **_mbbtombc** converte un carattere multibyte a byte singolo specificato in un carattere multibyte a byte doppio corrispondente. I caratteri devono essere compresi nell'intervallo 0x20-0x7E o 0xA1-0xDF da convertire.

Il valore di output è influenzato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni [, vedere setlocale, _wsetlocale](setlocale-wsetlocale.md) . Le versioni di questa funzione sono identiche, ad eccezione del fatto che **_mbbtombc** usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e **_mbbtombc_l** usa invece il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti **_mbbtombc** era denominato **hantozen**. Per il nuovo codice, usare **_mbbtombc**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbbtombc**|\<mbstring.h>|
|**_mbbtombc_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[_mbctombb, _mbctombb_l](mbctombb-mbctombb-l.md)<br/>
