---
title: _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _mbcjistojms
- _mbcjmstojis
- _mbcjistojms_l
- _mbcjmstojis_l
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
- mbcjistojms
- _mbcjistojms
- _mbcjistojms_l
- _mbcjmstojis_l
- _mbcjmstojis
- mbcjmstojis_l
- mbcjistojms_l
- mbcjmstojis
dev_langs:
- C++
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
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d1415a7423e231b994ff21120faeb49a45d51a70
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="mbcjistojms-mbcjistojmsl-mbcjmstojis-mbcjmstojisl"></a>_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l

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

## <a name="remarks"></a>Note

Il **mbcjistojms** funzione converte un carattere Giappone settore JIS (Standard) a un carattere Kanji Microsoft (Shift JIS). Il carattere viene convertito solo se i byte di anticipo e di traccia sono compresi nell'intervallo 0x21 - 0x7E. Se il responsabile o un byte versione di valutazione è esterno all'intervallo, **errno** è impostata su **EILSEQ**. Per altre informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il **mbcjmstojis** funzione converte un carattere Shift JIS in un carattere JIS. Il carattere viene convertito solo se il byte di apertura è compreso nell'intervallo tra 0x81-0x9F o 0xE0 - 0xFC e il byte di chiusura è compreso nell'intervallo 0x40-0x7E o 0x80 - 0xFC. Si noti che alcuni punti di codice in tale intervallo non hanno un carattere assegnato e quindi non possono essere convertiti.

Il valore *c* deve essere un valore a 16 bit con 8 bit superiori rappresentano il byte iniziale del carattere da convertire e cui 8 bit inferiori rappresentano il byte di chiusura.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti, **mbcjistojms** e **mbcjmstojis** chiamate **jistojms** e **jmstojis**, rispettivamente. **mbcjistojms**, **mbcjistojms_l**, **mbcjmstojis** e **mbcjmstojis_l** deve pertanto essere utilizzato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbcjistojms**|\<mbstring.h>|
|**_mbcjistojms_l**|\<mbstring.h>|
|**_mbcjmstojis**|\<mbstring.h>|
|**_mbcjmstojis_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
