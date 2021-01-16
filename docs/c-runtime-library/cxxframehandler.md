---
description: 'Altre informazioni su: __CxxFrameHandler'
title: __CxxFrameHandler
ms.date: 1/14/2021
api_name:
- __CxxFrameHandler
api_location:
- msvcr110.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __CxxFrameHandler
helpviewer_keywords:
- __CxxFrameHandler
ms.assetid: b79ac97f-425a-42ae-9b91-8beaef935333
ms.openlocfilehash: 0bf82b3a247505d052f1d64edc63bb9cd76a1dcb
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98243190"
---
# <a name="__cxxframehandler"></a>__CxxFrameHandler

Funzione CRT interna. Usata dalla libreria run-time del linguaggio C (CRT) per gestire i frame delle eccezioni strutturate.

## <a name="syntax"></a>Sintassi

```cpp
EXCEPTION_DISPOSITION __CxxFrameHandler(
      EHExceptionRecord  *pExcept,
      EHRegistrationNode *pRN,
      void               *pContext,
      DispatcherContext  *pDC
   )
```

#### <a name="parameters"></a>Parametri

*pExcept*<br/>
Record di eccezione passato alle **`catch`** istruzioni possibili.

*pRN*<br/>
Informazioni dinamiche sullo stack frame usato per gestire l'eccezione. Per altre informazioni, vedere ehdata.h.

*pContext*<br/>
Contesto. (Non usato nei processori Intel.)

*pDC*<br/>
Altre informazioni sull'ingresso e lo stack frame della funzione.

## <a name="return-value"></a>Valore restituito

Uno dei valori dell'*espressione di filtro* usati dall'[istruzione try-except](../cpp/try-except-statement.md).

## <a name="remarks"></a>Osservazioni

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__CxxFrameHandler|excpt.h, ehdata.h|
