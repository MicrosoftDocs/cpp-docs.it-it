---
title: _ismbbblank, _ismbbblank_l
ms.date: 4/2/2020
api_name:
- _ismbbblank_l
- _ismbbblank
- _o__ismbbblank
- _o__ismbbblank_l
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
ms.assetid: d21b2e41-7206-41f5-85bb-9c9ab4f3e21b
ms.openlocfilehash: 819ea45bb9d5775bb59764b587a75e368fa0e80d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81343751"
---
# <a name="_ismbbblank-_ismbbblank_l"></a>_ismbbblank, _ismbbblank_l

Determina se un particolare carattere multibyte è un carattere vuoto.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _ismbbblank(
   unsigned int c
);
int _ismbbblank_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Valore Integer da testare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_ismbbblank** restituisce un valore diverso da zero se *c* rappresenta uno spazio (0x20) carattere, un carattere di tabulazione orizzontale (0x09) o un carattere specifico delle impostazioni locali utilizzato per separare le parole all'interno di una riga di testo per cui **isspace** è true; in caso contrario, restituisce 0. **_ismbbblank** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **_ismbbblank_l** è identico, ad eccezione del fatto che utilizza invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbblank**|\<mbctype.h>|
|**_ismbbblank_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
