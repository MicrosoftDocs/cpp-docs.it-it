---
title: _mbbtype, _mbbtype_l
ms.date: 11/04/2016
api_name:
- _mbbtype
- _mbbtype_l
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
- _mbbtype_l
- mbbtype
- mbbtype_l
- _mbbtype
helpviewer_keywords:
- _mbbtype function
- _mbbtype_l function
- mbbtype function
- mbbtype_l function
ms.assetid: b8e34b40-842a-4298-aa39-0bd2d8e51c2a
ms.openlocfilehash: ba4311921a0924d3f447feb1929a81ae1d816604
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952727"
---
# <a name="_mbbtype-_mbbtype_l"></a>_mbbtype, _mbbtype_l

Restituisce il tipo di byte, in base al byte precedente.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _mbbtype(
   unsigned char c,
   int type
);
int _mbbtype_l(
   unsigned char c,
   int type,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da testare.

*type*<br/>
Tipo di byte per cui effettuare il test.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbbtype** restituisce il tipo di byte in una stringa. Questa decisione è sensibile al contesto, come specificato dal valore di *tipo*, che fornisce la condizione di test del controllo. il *tipo è il tipo del* byte precedente nella stringa. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore di *tipo*|test di **_mbbtype** per|Valore restituito|*c*|
|---------------------|--------------------------|------------------|---------|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_SINGLE** (0)|Singolo byte (0x20-0x7E, 0xA1-0xDF)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_LEAD** (1)|Byte di apertura del carattere multibyte (0x81-0x9F, 0xE0-0xFC)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore, ad eccezione di 0x20-0x7E, 0xA1-0xDF, 0x81-0x9F, 0xE0-0xFC|
|1|Byte finale valido|**_MBC_TRAIL** (2)|Byte finale di caratteri multibyte (0x40-0x7E, 0x80-0xFC)|
|1|Byte finale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore, ad eccezione di 0x20-0x7E, 0xA1-0xDF, 0x81-0x9F, 0xE0-0xFC|

## <a name="remarks"></a>Note

La funzione **_mbbtype** determina il tipo di byte in un carattere multibyte. Se il valore di *tipo* è qualsiasi valore eccetto 1, **_mbbtype** verifica la presenza di un byte iniziale o a byte singolo valido di un carattere multibyte. Se il valore di *tipo* è 1, **_mbbtype** verifica la presenza di un byte finale valido di un carattere multibyte.

Il valore di output è influenzato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni [, vedere setlocale, _wsetlocale](setlocale-wsetlocale.md) . La versione **_mbbtype** di questa funzione usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione di **_mbbtype_l** è identica, ma usa il parametro delle impostazioni locali che viene passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti **_mbbtype** era denominato **chkctype**. Per il nuovo codice, usare invece **_mbbtype** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le definizioni di costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
