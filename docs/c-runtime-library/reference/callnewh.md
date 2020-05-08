---
title: _callnewh
ms.date: 4/2/2020
api_name:
- _callnewh
- _o__callnewh
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
- api-ms-win-crt-heap-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _callnewh
helpviewer_keywords:
- _callnewh
ms.assetid: 4dcb73e9-6384-4d12-a973-a8807d4de7a8
ms.openlocfilehash: 3990d4b15c25cfd6c753c2b1d44c112971ff59af
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918794"
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

|valore|Descrizione|
|-----------|-----------------|
|0|Errore: non è installato alcun nuovo gestore o nessun gestore è attivo.|
|1|Riuscito: il nuovo gestore è stato installato e attivato. Si può ritentare l'allocazione di memoria.|

## <a name="exceptions"></a>Eccezioni

Questa funzione genera [bad_alloc](../../standard-library/bad-alloc-class.md) se il *nuovo gestore* non può essere individuato.

## <a name="remarks"></a>Osservazioni

Il *nuovo gestore* viene chiamato se il [nuovo operatore](../../cpp/new-operator-cpp.md) non alloca la memoria correttamente. Il nuovo gestore può quindi iniziare un'azione appropriata, ad esempio liberare la memoria in modo che le allocazioni successive abbiano esito positivo.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_callnewh|internal.h|

## <a name="see-also"></a>Vedere anche

[_set_new_handler](set-new-handler.md)<br/>
[_set_new_mode](set-new-mode.md)<br/>
