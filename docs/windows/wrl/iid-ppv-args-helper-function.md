---
title: IID_PPV_ARGS_Helper (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
ms.openlocfilehash: 5ef4dd6c9db2d19e0c8a4143c5b4ed3f0ac75f6a
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54894120"
---
# <a name="iidppvargshelper-function"></a>IID_PPV_ARGS_Helper (funzione)

Verifica che il tipo dell'argomento specificato deriva dal `IUnknown` interfaccia.

> [!IMPORTANT]
> Questa specializzazione di modello supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice. Uso [IID_PPV_ARGS](/windows/desktop/api/combaseapi/nf-combaseapi-iid_ppv_args) invece.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
void** IID_PPV_ARGS_Helper(
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo dell'argomento *pp*.

*pp*<br/>
Puntatore indiretto doppio.

## <a name="return-value"></a>Valore restituito

Argomento *pp* eseguire il cast a un puntatore-a-a-puntatore al **void**.

## <a name="remarks"></a>Note

Viene generato un errore in fase di compilazione se il parametro di modello *T* non deriva da `IUnknown`.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

