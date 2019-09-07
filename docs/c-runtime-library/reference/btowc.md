---
title: btowc
ms.date: 11/04/2016
apiname:
- btowc
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- btowc
helpviewer_keywords:
- btowc function
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
ms.openlocfilehash: 399f56fe133a9f67ed457b435ae6c0496e1ecaa5
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740009"
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

*character*<br/>
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

Restituisce la rappresentazione a caratteri wide del carattere se l'Integer rappresenta un carattere a byte singolo valido nello stato iniziale di spostamento. Restituisce WEOF se l'Integer è EOF o non è un carattere a byte singolo valido nello stato iniziale di spostamento. L'output di questa funzione è influenzato dalle impostazioni locali correnti di **LC_TYPE** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**btowc**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
