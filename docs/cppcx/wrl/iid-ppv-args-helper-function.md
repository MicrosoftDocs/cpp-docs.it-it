---
title: IID_PPV_ARGS_Helper (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
ms.openlocfilehash: 68dbd0b5b2e9d4fc04821a7e7e0193840b55e312
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077137"
---
# <a name="iid_ppv_args_helper-function"></a>IID_PPV_ARGS_Helper (funzione)

Verifica che il tipo dell'argomento specificato derivi dall'interfaccia `IUnknown`.

> [!IMPORTANT]
> Questa specializzazione del modello supporta l'infrastruttura WRL e non può essere usata direttamente dal codice. In alternativa, usare [IID_PPV_ARGS](/windows/win32/api/combaseapi/nf-combaseapi-iid_ppv_args) .

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
void** IID_PPV_ARGS_Helper(
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di argomento *PP*.

*PP*<br/>
Puntatore A doppia indiretta.

## <a name="return-value"></a>Valore restituito

Viene *eseguito il* cast dell'argomento in un puntatore a un puntatore a **void**.

## <a name="remarks"></a>Osservazioni

Se il parametro di modello *T* non deriva da `IUnknown`, viene generato un errore in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h
