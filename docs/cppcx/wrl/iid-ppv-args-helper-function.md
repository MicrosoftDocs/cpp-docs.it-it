---
title: IID_PPV_ARGS_Helper (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
ms.openlocfilehash: e7733ae6084b64c20dff5a2c35d7a31c614d6e44
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500512"
---
# <a name="iid_ppv_args_helper-function"></a>IID_PPV_ARGS_Helper (funzione)

Verifica che il tipo dell'argomento specificato derivi dall' `IUnknown` interfaccia.

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

*pp*<br/>
Puntatore A doppia indiretta.

## <a name="return-value"></a>Valore restituito

Viene eseguito il cast dell'argomento in un puntatore a un puntatore a **void**.

## <a name="remarks"></a>Note

Viene generato un errore in fase di compilazione se il parametro di modello *T* non deriva `IUnknown`da.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

