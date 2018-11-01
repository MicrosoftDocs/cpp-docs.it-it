---
title: _get_pgmptr
ms.date: 11/04/2016
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
helpviewer_keywords:
- get_pgmptr function
- _get_pgmptr function
- pgmptr global variable
- _pgmptr global variable
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
ms.openlocfilehash: 40c9f237aadb5f44066bcbf40fe378fb2ce96fc5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562500"
---
# <a name="getpgmptr"></a>_get_pgmptr

Ottiene il valore corrente del **pgmptr** (variabile globale).

## <a name="syntax"></a>Sintassi

```C
errno_t _get_pgmptr( 
   char **pValue 
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Un puntatore a una stringa da riempire con il valore corrente del **pgmptr** variabile.

## <a name="return-value"></a>Valore restituito

Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se *pValue* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Note

Chiamare solo **get_pgmptr** se il programma ha un punto di ingresso narrow, ad esempio **Main ()** oppure **WinMain ()**. Il **pgmptr** (variabile globale) contiene il percorso completo del file eseguibile associato al processo. Per altre informazioni, vedere [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_pgmptr**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_get_wpgmptr](get-wpgmptr.md)<br/>
