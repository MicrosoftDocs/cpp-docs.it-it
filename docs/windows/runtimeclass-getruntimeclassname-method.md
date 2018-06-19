---
title: 'Metodo runtimeclass:: Getruntimeclassname | Documenti Microsoft'
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
ms.openlocfilehash: 3cfe3cc4a8a304bbd04fde9e6c38e2b9170e2e73
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892439"
---
# <a name="runtimeclassgetruntimeclassname-method"></a>Metodo RuntimeClass::GetRuntimeClassName

Ottiene il nome di classe di runtime dell'oggetto RuntimeClass corrente.

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

Viene generato un errore di asserzione se &#95; &#95;WRL_STRICT&#95; &#95; o &#95; &#95;WRL_FORCE_INSPECTABLE_CLASS_MACRO&#95; &#95; non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM.

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)