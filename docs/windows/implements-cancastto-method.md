---
title: 'Metodo Implements:: cancastto | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: a8e85c7d-4dcd-446d-bebc-a97da46ce44a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 328691877a3b129c852460f8f68cdd3db4974e6f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595299"
---
# <a name="implementscancastto-method"></a>Metodo Implements::CanCastTo

Ottiene un puntatore all'interfaccia specificata.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*  
Un riferimento all'ID di interfaccia.

*ppv*  
Se ha esito positivo, un puntatore all'interfaccia specificata da *riid*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica l'errore, ad esempio E_NOINTERFACE.

## <a name="remarks"></a>Note

Si tratta di una funzione helper interna che esegue un'operazione QueryInterface.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura Implements](../windows/implements-structure.md)