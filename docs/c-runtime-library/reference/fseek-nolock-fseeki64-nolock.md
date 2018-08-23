---
title: _fseek_nolock, _fseeki64_nolock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _fseek_nolock
- _fseeki64_nolock
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _fseek_nolock
- _fseeki64_nolock
- fseek_nolock
- fseeki64_nolock
dev_langs:
- C++
helpviewer_keywords:
- _fseek_nolock function
- fseeki64_nolock function
- file pointers [C++], moving
- fseek_nolock function
- _fseeki64_nolock function
- seek file pointers
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3b1ce866f7438ebc677156e6cfc9113f9725b65d
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42572056"
---
# <a name="fseeknolock-fseeki64nolock"></a>_fseek_nolock, _fseeki64_nolock

Sposta il puntatore del file in una posizione specificata.

## <a name="syntax"></a>Sintassi

```C
int _fseek_nolock(
   FILE *stream,
   long offset,
   int origin
);
int _fseeki64_nolock(
   FILE *stream,
   __int64 offset,
   int origin
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

*offset*<br/>
Numero di byte da *origin*.

*origin*<br/>
Posizione iniziale.

## <a name="return-value"></a>Valore restituito

Uguale allo [fseek](fseek-fseeki64.md) e [_fseeki64](fseek-fseeki64.md), rispettivamente.

## <a name="remarks"></a>Note

Queste funzioni sono elencate le versioni non blocca il thread del [fseek](fseek-fseeki64.md) e [_fseeki64](fseek-fseeki64.md), rispettivamente. Identici agli [fseek](fseek-fseeki64.md) e [_fseeki64](fseek-fseeki64.md) ad eccezione del fatto che non sono protette da interferenze da altri thread. Queste funzioni potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread. Utilizzare queste funzioni solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fseek_nolock**, **_fseeki64_nolock**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
[rewind](rewind.md)<br/>
