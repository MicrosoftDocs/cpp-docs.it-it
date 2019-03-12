---
title: _abnormal_termination
ms.date: 11/04/2016
apiname:
- _abnormal_termination
apilocation:
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- _abnormal_termination
helpviewer_keywords:
- _abnormal_termination
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
ms.openlocfilehash: 213938fa830f0a924fa954d4a36a39b544473dd4
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57741282"
---
# <a name="abnormaltermination"></a>_abnormal_termination

Indica se il blocco `__finally` di un'[istruzione try-finally](../cpp/try-finally-statement.md) viene inserito mentre il sistema esegue un elenco interno di gestori di terminazione.

## <a name="syntax"></a>Sintassi

```cpp
int   _abnormal_termination(
   );
```

## <a name="return-value"></a>Valore restituito

**true** se il sistema sta eseguendo la *rimozione* dello stack; in caso contrario, **false**.

## <a name="remarks"></a>Osservazioni

Si tratta di una funzione interna utilizzata per gestire eccezioni di rimozione e non deve essere chiamata dal codice utente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_abnormal_termination|excpt.h|

## <a name="see-also"></a>Vedere anche

[Istruzione try-finally](../cpp/try-finally-statement.md)
