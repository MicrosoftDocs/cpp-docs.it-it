---
title: __uncaught_exception
ms.date: 11/04/2016
api_name:
- __uncaught_exception
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __uncaught_exception
helpviewer_keywords:
- __uncaught_exception
ms.assetid: 4d9b75c6-c9c7-4876-b761-ea9ab1925e96
ms.openlocfilehash: 1eb06abbda7978acf578555f966f0857dff02053
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211632"
---
# <a name="__uncaught_exception"></a>__uncaught_exception

Indica se sono state generate una o più eccezioni, ma non sono ancora state gestite dal **`catch`** blocco corrispondente di un'istruzione [try-catch](../../cpp/try-throw-and-catch-statements-cpp.md) .

## <a name="syntax"></a>Sintassi

```cpp
bool __uncaught_exception(
   );
```

## <a name="return-value"></a>Valore restituito

**`true`** dal momento in cui viene generata un'eccezione in un **`try`** blocco fino a quando il blocco corrispondente non **`catch`** viene inizializzato; in caso contrario, **`false`** .

## <a name="remarks"></a>Osservazioni

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__uncaught_exception|eh.h|

## <a name="see-also"></a>Vedere anche

[Istruzioni try, throw e catch (C++)](../../cpp/try-throw-and-catch-statements-cpp.md)<br/>
