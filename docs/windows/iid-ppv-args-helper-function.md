---
title: IID_PPV_ARGS_Helper (funzione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/IID_PPV_ARGS_Helper
dev_langs:
- C++
helpviewer_keywords:
- IID_PPV_ARGS_Helper function
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a6131cea7a7684036fd7183a79214c7c6936540b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218748"
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

*T*  
Il tipo dell'argomento *pp*.

*profilo di porta*  
Puntatore indiretto doppio.

## <a name="return-value"></a>Valore restituito

Argomento *pp* eseguire il cast a un puntatore-a-a-puntatore al **void**.

## <a name="remarks"></a>Note

Viene generato un errore in fase di compilazione se il parametro di modello *T* non deriva da `IUnknown`.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

## <a name="see-also"></a>Vedere anche

[Riferimento (libreria Windows Runtime)](https://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)