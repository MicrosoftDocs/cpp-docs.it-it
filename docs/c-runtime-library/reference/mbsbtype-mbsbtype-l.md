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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: d71a061d9af5028c9bc6b4008f9904606a233592
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81340869"
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

*mbstr (intalltore*<br/>
Indirizzo di una sequenza di caratteri multibyte.

*count*<br/>
Offset dall'inizio della stringa in byte.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbsbtype** e **_mbsbtype_l** restituisce un valore intero che indica il risultato del test sul byte specificato. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore restituito|Tipo di byte|
|------------------|---------------|
|**_MBC_SINGLE** (0)|Carattere a byte singolo. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 0 se il byte specificato è compreso nell'intervallo 0x20 - 0x7E o 0xA1 - 0xDF.|
|**_MBC_LEAD** (1)|Byte di apertura del carattere multibyte. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 1 se il byte specificato è compreso nell'intervallo 0x81 - 0x9F o 0xE0 - 0xFC.|
|**_MBC_TRAIL** (2)|Byte di chiusura del carattere multibyte. Ad esempio, nella tabella codici 932, **_mbsbtype** restituisce 2 se il byte specificato è compreso nell'intervallo 0x40 - 0x7E o 0x80 - 0xFC.|
|**_MBC_ILLEGAL** (-1)|**Stringa NULL,** carattere non valido o byte null trovato prima del byte in *numero* di offset in *mbstr*.|

## <a name="remarks"></a>Osservazioni

La funzione **_mbsbtype** determina il tipo di byte in una stringa di caratteri multibyte. La funzione esamina solo il byte al *conteggio* dell'offset in *mbstr*, ignorando i caratteri non validi prima del byte specificato.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). La versione di questa funzione senza il suffisso **_l** utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. la versione con il suffisso **_l** è identica, ad eccezione del fatto che utilizza invece il parametro locale passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se la stringa di input è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **_MBC_ILLEGAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbsbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbsbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
