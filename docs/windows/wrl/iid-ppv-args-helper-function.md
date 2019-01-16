---
title: IID_PPV_ARGS_Helper (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
ms.openlocfilehash: cae29c70c551701a351cdcf404342ed1634a0e3b
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336475"
---
# <a name="iidppvargshelper-function"></a>IID_PPV_ARGS_Helper (funzione)

Verifica che il tipo dell'argomento specificato deriva dal `IUnknown` interfaccia.

> [!IMPORTANT]
> Questa specializzazione di modello supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice. Uso [IID_PPV_ARGS](https://msdn.microsoft.com/library/windows/desktop/ee330727.aspx) invece.

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

