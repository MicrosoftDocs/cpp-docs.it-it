---
title: 'Operatore comptr:: -&gt; operatore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator->
dev_langs:
- C++
helpviewer_keywords:
- operator-> operator
ms.assetid: 7b7faefd-d1e4-4f31-a77d-17a42e0d6b6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 417fd11017f9f70ee8cc247898e23741488ae5e7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599988"
---
# <a name="comptroperator-gt-operator"></a>Operatore comptr:: -&gt; operatore

Recupera un puntatore al tipo specificato dal parametro di modello corrente.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

## <a name="return-value"></a>Valore restituito

Puntatore al tipo specificato dal nome del tipo di modello corrente.

## <a name="remarks"></a>Note

Questa funzione di supporto rimuove un sovraccarico non necessario quando si utilizza lo STDMETHOD (macro). Questa funzione rende `IUnknown` tipi **privati** anziché **virtuale**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)