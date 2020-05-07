---
title: _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l
ms.date: 4/2/2020
api_name:
- _mbcjistojms
- _mbcjmstojis
- _mbcjistojms_l
- _mbcjmstojis_l
- _o__mbcjistojms
- _o__mbcjistojms_l
- _o__mbcjmstojis
- _o__mbcjmstojis_l
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
- mbcjistojms
- _mbcjistojms
- _mbcjistojms_l
- _mbcjmstojis_l
- _mbcjmstojis
- mbcjmstojis_l
- mbcjistojms_l
- mbcjmstojis
helpviewer_keywords:
- _mbcjmstojis_l function
- _mbcjistojms function
- mbcjmstojis function
- _mbcjistojms_l function
- _mbcjmstojis function
- mbcjistojms function
- mbcjmstojis_l function
- mbcjistojms_l function
ms.assetid: dece5127-b337-40a4-aa10-53320a2c9432
ms.openlocfilehash: fc4df04274c33fa14af0762dc62f20ed09f23cd9
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918430"
---
# <a name="_mbcjistojms-_mbcjistojms_l-_mbcjmstojis-_mbcjmstojis_l"></a>_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l

Esegue la conversione tra caratteri JIS (Japan Industry Standard) e caratteri JMS (Japan Microsoft).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
unsigned int _mbcjistojms(
   unsigned int c
);
unsigned int _mbcjistojms_l(
   unsigned int c,
   _locale_t locale
);
unsigned int _mbcjmstojis(
   unsigned int c
);
unsigned int _mbcjmstojis_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Nelle impostazioni locali giapponesi queste funzioni restituiscono un carattere convertito o restituiscono 0 se non è possibile alcuna conversione. Nelle impostazioni locali non giapponesi queste funzioni restituiscono il carattere passato.

## <a name="remarks"></a>Osservazioni

La funzione **_mbcjistojms** converte un carattere standard del settore Giappone (JIS) in un carattere Microsoft Kanji (Shift JIS). Il carattere viene convertito solo se i byte iniziale e finale sono compresi nell'intervallo 0x21-0x7E. Se il lead o il byte di valutazione è esterno a questo intervallo, **errno** viene impostato su **EILSEQ**. Per altre informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

La funzione **_mbcjmstojis** converte un carattere Shift JIS in un carattere JIS. Il carattere viene convertito solo se il byte di apertura è compreso nell'intervallo 0x81-0x9F o 0xE0-0xFC e il byte finale è compreso nell'intervallo 0x40-0x7E o 0x80-0xFC. Si noti che alcuni punti di codice in tale intervallo non hanno un carattere assegnato e quindi non possono essere convertiti.

Il valore *c* deve essere un valore a 16 bit i cui 8 bit superiori rappresentano il byte di apertura del carattere da convertire e i cui 8 bit inferiori rappresentano il byte finale.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti, **_mbcjistojms** e **_mbcjmstojis** sono stati denominati rispettivamente **jistojms** e **jmstojis**. in alternativa, è necessario utilizzare **_mbcjistojms**, **_mbcjistojms_l**, **_mbcjmstojis** e **_mbcjmstojis_l** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbcjistojms**|\<mbstring.h>|
|**_mbcjistojms_l**|\<mbstring.h>|
|**_mbcjmstojis**|\<mbstring.h>|
|**_mbcjmstojis_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Routine di _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
