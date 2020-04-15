---
title: _mbbtype, _mbbtype_l
ms.date: 4/2/2020
api_name:
- _mbbtype
- _mbbtype_l
- _o__mbbtype
- _o__mbbtype_l
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
ms.openlocfilehash: 7e2e818ed70ec393e4f81008f76ca9efe9cfa7e7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341404"
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

*C*<br/>
Carattere da testare.

*type*<br/>
Tipo di byte per cui effettuare il test.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbbtype** restituisce il tipo di byte in una stringa. Questa decisione è sensibile al contesto, come specificato dal valore di *type*, che fornisce la condizione di test del controllo. *type* è il tipo del byte precedente nella stringa. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.

|Valore di *tipo*|**_mbbtype** per i test di _mbbtype per|Valore restituito|*C*|
|---------------------|--------------------------|------------------|---------|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_SINGLE** (0)|Byte singolo (0x20 - 0x7E, 0xA1 - 0xDF)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_LEAD** (1)|Byte iniziale del carattere multibyte (0x81 - 0x9F, 0xE0 - 0xFC)|
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore tranne 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|
|1|Byte finale valido|**_MBC_TRAIL** (2)|Byte finale del carattere multibyte (0x40 - 0x7E, 0x80 - 0xFC)|
|1|Byte finale valido|**_MBC_ILLEGAL**<br /><br /> ( -1)|Carattere non valido (qualsiasi valore tranne 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|

## <a name="remarks"></a>Osservazioni

La funzione **_mbbtype** determina il tipo di byte in un carattere multibyte. Se il valore di *type* è qualsiasi valore ad eccezione di 1, **_mbbtype** verifica un byte singolo o iniziale valido di un carattere multibyte. Se il valore di *tipo* è 1, **_mbbtype** verifica un byte finale valido di un carattere multibyte.

Il valore di output è influenzato dall'impostazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali; Per ulteriori informazioni, vedere [setlocale, _wsetlocale.](setlocale-wsetlocale.md) Il **_mbbtype** versione di questa funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. la versione **_mbbtype_l** è identica, ad eccezione del fatto che utilizza il parametro locale che viene passato invece. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti, **_mbbtype** era denominato **chkctype**. Per il nuovo codice, usare invece **_mbbtype.**

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* Per le definizioni di costanti manifeste usate come valori restituiti.

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
