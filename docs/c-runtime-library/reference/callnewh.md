---
title: _callnewh
ms.date: 11/04/2016
apiname:
- _callnewh
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _callnewh
helpviewer_keywords:
- _callnewh
ms.assetid: 4dcb73e9-6384-4d12-a973-a8807d4de7a8
ms.openlocfilehash: 98526f6c8c40b71104345563db71ef098b6cfb8d
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70739818"
---
# <a name="_callnewh"></a>_callnewh

Chiama il *nuovo gestore* attualmente installato.

## <a name="syntax"></a>Sintassi

```cpp
int _callnewh(
   size_t size
   )
```

### <a name="parameters"></a>Parametri

*size*<br/>
La quantità di memoria che il [nuovo operatore](../../cpp/new-operator-cpp.md) ha tentato di allocare.

## <a name="return-value"></a>Valore restituito

|Value|Descrizione|
|-----------|-----------------|
|0|Errore Non è installato alcun nuovo gestore o non è attivo alcun nuovo gestore.|
|1|Successo Il nuovo gestore è installato e attivo. Si può ritentare l'allocazione di memoria.|

## <a name="exceptions"></a>Eccezioni

Questa funzione genera [bad_alloc](../../standard-library/bad-alloc-class.md) se il *nuovo gestore* non può essere individuato.

## <a name="remarks"></a>Note

Il *nuovo gestore* viene chiamato se il [nuovo operatore](../../cpp/new-operator-cpp.md) non alloca la memoria correttamente. Il nuovo gestore può quindi iniziare un'azione appropriata, ad esempio liberare la memoria in modo che le allocazioni successive abbiano esito positivo.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_callnewh|internal.h|

## <a name="see-also"></a>Vedere anche

[_set_new_handler](set-new-handler.md)<br/>
[_set_new_mode](set-new-mode.md)<br/>
