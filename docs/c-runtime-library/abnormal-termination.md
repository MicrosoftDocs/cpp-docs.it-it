---
title: _abnormal_termination
ms.date: 11/04/2016
api_name:
- _abnormal_termination
api_location:
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _abnormal_termination
helpviewer_keywords:
- _abnormal_termination
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
ms.openlocfilehash: a963f1059eccaddce9ec01cd53a07df668ee46c6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213658"
---
# <a name="_abnormal_termination"></a>_abnormal_termination

Indica se il **`__finally`** blocco di un' [istruzione try-finally](../cpp/try-finally-statement.md) viene inserito mentre il sistema esegue un elenco interno di gestori di terminazione.

## <a name="syntax"></a>Sintassi

```cpp
int   _abnormal_termination(
   );
```

## <a name="return-value"></a>Valore restituito

**`true`** Se il sistema sta *rimuovendo* lo stack; in caso contrario, **`false`** .

## <a name="remarks"></a>Osservazioni

Si tratta di una funzione interna utilizzata per gestire eccezioni di rimozione e non deve essere chiamata dal codice utente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_abnormal_termination|excpt.h|

## <a name="see-also"></a>Vedere anche

[Istruzione try-finally](../cpp/try-finally-statement.md)
