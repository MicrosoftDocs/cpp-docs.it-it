---
title: _get_pgmptr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _get_pgmptr
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- get_pgmptr
- _get_pgmptr
dev_langs:
- C++
helpviewer_keywords:
- get_pgmptr function
- _get_pgmptr function
- pgmptr global variable
- _pgmptr global variable
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6af6203f8c6f40335a132f21929abf3cc4ce1808
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getpgmptr"></a>_get_pgmptr

Ottiene il valore corrente di **pgmptr** (variabile globale).

## <a name="syntax"></a>Sintassi

```C
errno_t _get_pgmptr( 
   char **pValue 
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Un puntatore a una stringa in cui inserire il valore corrente di **pgmptr** variabile.

## <a name="return-value"></a>Valore restituito

Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se *pValue* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Note

Chiamare solo **get_pgmptr** se il programma ha un punto di ingresso "narrow", ad esempio **Main ()** oppure **WinMain ()**. Il **pgmptr** (variabile globale) contiene il percorso completo del file eseguibile associato al processo. Per altre informazioni, vedere [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_pgmptr**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_get_wpgmptr](get-wpgmptr.md)<br/>
