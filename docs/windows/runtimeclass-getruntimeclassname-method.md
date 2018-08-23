---
title: 'Metodo runtimeclass:: Getruntimeclassname | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::GetRuntimeClassName
dev_langs:
- C++
helpviewer_keywords:
- GetRuntimeClassName method
ms.assetid: f6388163-fe65-4948-a4bc-ae6826f480e7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e367f956fbaeb36837733d619b19cdc8363ca3a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606827"
---
# <a name="runtimeclassgetruntimeclassname-method"></a>Metodo RuntimeClass::GetRuntimeClassName

Ottiene il nome di classe di runtime dell'oggetto corrente **RuntimeClass** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### <a name="parameters"></a>Parametri

*runtimeName*  
Quando questa operazione viene completata, il nome di classe di runtime.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Viene generato un errore di asserzione se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)