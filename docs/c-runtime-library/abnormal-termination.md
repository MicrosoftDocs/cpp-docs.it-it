---
description: 'Altre informazioni su: _abnormal_termination'
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
ms.openlocfilehash: 2fa4b82deeebda7624d8ac96be675efc100ae926
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224283"
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

## <a name="remarks"></a>Commenti

Si tratta di una funzione interna utilizzata per gestire eccezioni di rimozione e non deve essere chiamata dal codice utente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_abnormal_termination|excpt.h|

## <a name="see-also"></a>Vedi anche

[Istruzione try-finally](../cpp/try-finally-statement.md)
