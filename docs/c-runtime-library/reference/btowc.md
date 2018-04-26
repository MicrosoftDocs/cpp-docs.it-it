---
title: btowc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- btowc function
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f6605184408b3a1548eeb8af469fc7df1a6407c
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Restituisce la rappresentazione a caratteri wide del carattere se l'Integer rappresenta un carattere a byte singolo valido nello stato iniziale di spostamento. Restituisce WEOF se l'Integer è EOF o non è un carattere a byte singolo valido nello stato iniziale di spostamento. L'output di questa funzione è interessato dalla corrente **LC_TYPE** delle impostazioni locali.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**btowc**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
