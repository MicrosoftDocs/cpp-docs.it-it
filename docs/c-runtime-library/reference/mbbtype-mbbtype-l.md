---
title: _mbbtype, _mbbtype_l
ms.date: 11/04/2016
apiname:
- _mbbtype
- _mbbtype_l
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
ms.openlocfilehash: a6d17b99e4314c2ab836a16129ab8a0e6ac7720e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156889"
---
# <a name="mbbtype-mbbtypel"></a>_mbbtype, _mbbtype_l

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

**mbbtype** restituisce il tipo di byte in una stringa. Questa decisione è sensibile al contesto, come specificato dal valore della *tipo*, che fornisce la condizione di test di controllo. *tipo* è il tipo byte precedente nella stringa. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore di *tipo*|**mbbtype** verifica la presenza di|Valore restituito|*c*|
|---------------------|--------------------------|------------------|---------|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_SINGLE** (0)|Byte singolo (0x20 - 0x7E, 0xA1 - 0xDF)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_LEAD** (1)|Byte iniziale di caratteri multibyte (0x81 - 0x9F, 0xE0 - 0xFC)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore esclude 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|
|1|Byte finale valido|**_MBC_TRAIL** (2)|Byte finale di caratteri multibyte (0x40 - 0x7E, 0x80 - 0xFC)|
|1|Byte finale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore esclude 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|

## <a name="remarks"></a>Note

Il **mbbtype** funzione determina il tipo di un byte in un carattere multibyte. Se il valore di *tipo* è qualsiasi valore eccetto 1, **mbbtype** test per una valida a byte singolo o byte iniziale di un carattere multibyte. Se il valore di *tipo* è 1, **mbbtype** testa un byte finale valido di un carattere multibyte.

Il valore di output è interessato dall'impostazione della **LC_CTYPE** impostazione di categoria delle impostazioni locali; vedere [setlocale, wsetlocale](setlocale-wsetlocale.md) per altre informazioni. Il **mbbtype** versione di questa funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; le **mbbtype_l** versione è identica, ma usa il parametro delle impostazioni locali che verrà passato . Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti **mbbtype** chiamava **chkctype**. Per il nuovo codice, usare **mbbtype** invece.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le definizioni di costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
