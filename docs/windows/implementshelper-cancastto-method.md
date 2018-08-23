---
title: 'Metodo implementshelper:: Cancastto | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: 9ae6fa17-d0b1-4e31-9ae5-da6ae4026e32
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ab1f2c16f7329f455fbd1fea525b17c9cc433a36
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593155"
---
# <a name="implementshelpercancastto-method"></a>Metodo ImplementsHelper::CanCastTo

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);

HRESULT CanCastTo(
   _In_ const IID &iid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*  
Riferimento all'ID di interfaccia.

*ppv*  
Se questa operazione ha esito positivo, un puntatore all'interfaccia specificata da *riid* oppure *iid*.

*IID*  
Riferimento all'ID di interfaccia.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Ottiene un puntatore all'ID di interfaccia specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura ImplementsHelper](../windows/implementshelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)