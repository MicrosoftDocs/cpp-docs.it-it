---
title: _mbsbtype, _mbsbtype_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _mbsbtype_l
- _mbsbtype
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
- mbsbtype
- mbsbtype_l
- _mbsbtype_l
- _mbsbtype
dev_langs:
- C++
helpviewer_keywords:
- _mbsbtype function
- mbsbtype function
- _mbsbtype_l function
- mbsbtype_l function
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 54b82eae4826bd6a359f2cf0d4e74bccd32f81b0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="mbsbtype-mbsbtypel"></a>_mbsbtype, _mbsbtype_l

Restituisce il tipo di byte all'interno di una stringa.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _mbsbtype(
   const unsigned char *mbstr,
   size_t count
);
int _mbsbtype_l(
   const unsigned char *mbstr,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte.

*count*<br/>
Offset dall'inizio della stringa in byte.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**mbsbtype** e **mbsbtype_l** restituisce un valore intero che indica il risultato del test in byte specificata. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore restituito|Tipo di byte|
|------------------|---------------|
|**_MBC_SINGLE** (0)|Carattere a byte singolo. Ad esempio, nella tabella codici 932, **mbsbtype** restituisce 0 se il byte specificato è compreso nell'intervallo 0x20-0x7E o 0xA1 - 0xDF.|
|**_MBC_LEAD** (1)|Byte di apertura del carattere multibyte. Ad esempio, nella tabella codici 932, **mbsbtype** restituisce 1 se il byte specificato è compreso tra 0x81-0x9F o 0xE0 - 0xFC.|
|**_MBC_TRAIL** (2)|Byte di chiusura del carattere multibyte. Ad esempio, nella tabella codici 932, **mbsbtype** restituisce 2 se il byte specificato è compreso tra 0x40-0x7E o 0x80 - 0xFC.|
|**_MBC_ILLEGAL** (-1)|**NULL** string, il carattere non valido, o **NULL** byte trovati prima il byte in corrispondenza dell'offset *conteggio* in *mbstr*.|

## <a name="remarks"></a>Note

Il **mbsbtype** funzione determina il tipo di byte in una stringa di caratteri multibyte. La funzione esamina solo i byte in corrispondenza dell'offset *conteggio* in *mbstr*, esclusi i caratteri non validi prima di byte specificata.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. La versione di questa funzione senza il **l** suffisso utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione con il **l** suffisso è identico ad eccezione del fatto che usi il parametro delle impostazioni locali passato al In alternativa. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se la stringa di input **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **_MBC_ILLEGAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbsbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbsbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
