---
title: __CxxFrameHandler
ms.date: 11/04/2016
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __CxxFrameHandler
helpviewer_keywords:
- __CxxFrameHandler
ms.assetid: b79ac97f-425a-42ae-9b91-8beaef935333
ms.openlocfilehash: 4cb5ae10d4281c4a7167db7adf4ea6788ad3e3c0
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70944506"
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
Record di eccezione passato alle possibili istruzioni `catch`.

*pRN*<br/>
Informazioni dinamiche sullo stack frame usato per gestire l'eccezione. Per altre informazioni, vedere ehdata.h.

*pContext*<br/>
Contesto. (Non usato nei processori Intel.)

*pDC*<br/>
Altre informazioni sull'ingresso e lo stack frame della funzione.

## <a name="return-value"></a>Valore restituito

Uno dei valori dell'*espressione di filtro* usati dall'[istruzione try-except](../cpp/try-except-statement.md).

## <a name="remarks"></a>Note

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__CxxFrameHandler|excpt.h, ehdata.h|