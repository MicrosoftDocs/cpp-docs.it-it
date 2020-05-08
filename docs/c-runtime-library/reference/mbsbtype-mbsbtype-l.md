---
title: _mbsbtype, _mbsbtype_l
ms.date: 4/2/2020
api_name:
- _mbsbtype_l
- _mbsbtype
- _o__mbsbtype
- _o__mbsbtype_l
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
- mbsbtype
- mbsbtype_l
- _mbsbtype_l
- _mbsbtype
helpviewer_keywords:
- _mbsbtype function
- mbsbtype function
- _mbsbtype_l function
- mbsbtype_l function
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
ms.openlocfilehash: c1431a2d0886ffd3d16b43abf82b7342c166273a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82909476"
---
# <a name="_mbsbtype-_mbsbtype_l"></a>_mbsbtype, _mbsbtype_l

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

**_mbsbtype** e **_mbsbtype_l** restituisce un valore intero che indica il risultato del test sul byte specificato. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore restituito|Tipo di byte|
|------------------|---------------|
|**_MBC_SINGLE** (0)|Carattere a byte singolo. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 0 se il byte specificato è compreso nell'intervallo 0x20-0X7E o 0XA1-0xDF.|
|**_MBC_LEAD** (1)|Byte di apertura del carattere multibyte. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 1 se il byte specificato è compreso nell'intervallo 0X81-0X9F o 0xE0-0xFC.|
|**_MBC_TRAIL** (2)|Byte di chiusura del carattere multibyte. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 2 Se il byte specificato è compreso nell'intervallo 0X40-0x7E o 0X80-0xFC.|
|**_MBC_ILLEGAL** (-1)|Stringa **null** , carattere non valido o byte NULL trovato prima del byte al *numero* di offset in *mbstr*.|

## <a name="remarks"></a>Osservazioni

La funzione **_mbsbtype** determina il tipo di un byte in una stringa di caratteri multibyte. La funzione esamina solo il byte al *numero* di offset in *mbstr*, ignorando i caratteri non validi prima del byte specificato.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). La versione di questa funzione senza il suffisso **_L** usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione con il suffisso **_L** è identica, ma usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se la stringa di input è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **_MBC_ILLEGAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbsbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbsbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
