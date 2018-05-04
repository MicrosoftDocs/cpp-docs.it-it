---
title: __uncaught_exception | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- __uncaught_exception
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
apitype: DLLExport
f1_keywords:
- __uncaught_exception
dev_langs:
- C++
helpviewer_keywords:
- __uncaught_exception
ms.assetid: 4d9b75c6-c9c7-4876-b761-ea9ab1925e96
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fcae75a5d25710866f781d766cfd77eceb977649
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="uncaughtexception"></a>__uncaught_exception

Indica se sono state generate una o più eccezioni, ma non sono ancora state gestite dal corrispondente **catch** block di una [try-catch](../../cpp/try-throw-and-catch-statements-cpp.md) istruzione.

## <a name="syntax"></a>Sintassi

```cpp
bool __uncaught_exception(
   );
```

## <a name="return-value"></a>Valore restituito

**true** dal momento in cui viene generata un'eccezione un **provare** blocco finché la corrispondenza **catch** blocco è inizializzato; in caso contrario, **false**.

## <a name="remarks"></a>Note

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__uncaught_exception|eh.h|

## <a name="see-also"></a>Vedere anche

[Istruzioni try, throw e catch (C++)](../../cpp/try-throw-and-catch-statements-cpp.md)<br/>
