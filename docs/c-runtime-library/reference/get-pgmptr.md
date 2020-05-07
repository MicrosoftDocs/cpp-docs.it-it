---
title: _get_pgmptr
ms.date: 4/2/2020
api_name:
- _get_pgmptr
- _o__get_pgmptr
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
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- get_pgmptr
- _get_pgmptr
helpviewer_keywords:
- get_pgmptr function
- _get_pgmptr function
- pgmptr global variable
- _pgmptr global variable
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
ms.openlocfilehash: a4a9bddfa861727e174325dc639868e3529162cd
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918207"
---
# <a name="_get_pgmptr"></a>_get_pgmptr

Ottiene il valore corrente della variabile globale **_pgmptr** .

## <a name="syntax"></a>Sintassi

```C
errno_t _get_pgmptr(
   char **pValue
);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Puntatore a una stringa da riempire con il valore corrente della variabile **_pgmptr** .

## <a name="return-value"></a>Valore restituito

Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se *pValue* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

## <a name="remarks"></a>Osservazioni

Chiamare **_get_pgmptr** solo se il programma dispone di un punto di ingresso limitato, ad esempio **Main ()** o **WinMain ()**. La variabile globale **_pgmptr** contiene il percorso completo dell'eseguibile associato al processo. Per altre informazioni, vedere [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_pgmptr**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_get_wpgmptr](get-wpgmptr.md)<br/>
