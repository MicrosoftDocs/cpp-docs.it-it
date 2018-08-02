---
title: 'Operator IInspectable * * operatore comptrrefbase:: | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**
dev_langs:
- C++
helpviewer_keywords:
- operator IInspectable** operator
ms.assetid: 06ac1051-606c-449b-a566-cac78ca53762
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 19e04f5415f9f7a736371c888dff7559df6c6c66
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462336"
---
# <a name="comptrrefbaseoperator-iinspectable-operator"></a>Operatore comptrrefbase:: IInspectable\* \* operatore

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
operator IInspectable**() const;
```

## <a name="remarks"></a>Note

L'oggetto corrente viene eseguito il cast [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un oggetto-puntatore-al `IInspectable` interfaccia.

Viene generato un errore se l'oggetto corrente **ComPtrRefBase** non deriva da `IInspectable`.

Questo cast è disponibile solo se **&#95; &#95;WRL_CLASSIC_COM&#95; &#95;** è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche
[ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)