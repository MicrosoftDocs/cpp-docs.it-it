---
title: btowc
ms.date: 4/2/2020
api_name:
- btowc
- _o_btowc
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- btowc
helpviewer_keywords:
- btowc function
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
ms.openlocfilehash: b4262f31c95b5272e3917f58a6c945577d401f16
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81333767"
---
# <a name="btowc"></a>btowc

Determina se un Integer rappresenta un carattere a byte singolo valido nello stato iniziale di spostamento.

## <a name="syntax"></a>Sintassi

```C
wint_t btowc(
   int character
);
```

### <a name="parameters"></a>Parametri

*Carattere*<br/>
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

Restituisce la rappresentazione a caratteri wide del carattere se l'Integer rappresenta un carattere a byte singolo valido nello stato iniziale di spostamento. Restituisce WEOF se l'Integer è EOF o non è un carattere a byte singolo valido nello stato iniziale di spostamento. L'output di questa funzione è influenzato dalle impostazioni locali **LC_TYPE** correnti.

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**btowc**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
