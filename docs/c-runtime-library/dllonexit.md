---
title: __dllonexit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- __dllonexit
apilocation:
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcr120_clr0400.dll
apitype: DLLExport
f1_keywords:
- __dllonexit
dev_langs:
- C++
helpviewer_keywords:
- __dllonexit
ms.assetid: 708f2ceb-f95c-46b0-a58d-d68b3fa36f12
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c2c04f623ba8cac2f3b967007079d41689d2346
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062865"
---
# <a name="dllonexit"></a>__dllonexit

Registra una routine da chiamare in fase di uscita.

## <a name="syntax"></a>Sintassi

```
_onexit_t __dllonexit(   _onexit_t func,
   _PVFV **  pbegin,
   _PVFV **  pend
   )
```

#### <a name="parameters"></a>Parametri

*func*<br/>
Puntatore a una funzione da eseguire all'uscita.

*pbegin*<br/>
Puntatore a una variabile che indica l'inizio di un elenco di funzioni da eseguire in fase di disconnessione.

*pend*<br/>
Puntatore a una variabile che indica la fine di un elenco di funzioni da eseguire in fase di disconnessione.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore che indica la funzione dell'utente. In caso contrario, un puntatore **NULL**.

## <a name="remarks"></a>Note

La funzione `__dllonexit` è analoga alla funzione [OnExit](../c-runtime-library/reference/onexit-onexit-m.md) ad eccezione delle variabili globali usate da tale funzione che non sono visibili per questa routine. Al posto di variabili globali, questa funzione usa i parametri `pbegin` e `pend`.

Le funzioni `_onexit` e `atexit` in una DLL collegata a MSVCRT. LIB devono mantenere il proprio elenco atexit/_onexit. Questa routine rappresenta il lavoro che viene chiamato da tali DLL.

Il tipo `_PVFV` viene è definito come `typedef void (__cdecl *_PVFV)(void)`.

## <a name="requirements"></a>Requisiti

|Routine|File obbligatorio|
|-------------|-------------------|
|__dllonexit|onexit.c|

## <a name="see-also"></a>Vedere anche

[_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)