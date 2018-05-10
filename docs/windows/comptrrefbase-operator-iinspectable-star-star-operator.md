---
title: 'Operatore comptrrefbase:: IInspectable * * (operatore) | Documenti Microsoft'
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
ms.openlocfilehash: e337f6bbc92718c839fc2bd12c9df9f0caa5d5aa
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrrefbaseoperator-iinspectable-operator"></a>Operatore ComPtrRefBase::operator IInspectable**

Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
operator IInspectable**() const;
```

## <a name="remarks"></a>Note

Esegue il cast corrente [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un-puntatore-all'interfaccia IInspectable.

Se il ComPtrRefBase corrente non deriva da IInspectable, viene generato un errore.

Questo cast è disponibile solo se **&#95; &#95;WRL_CLASSIC_COM&#95; &#95;** è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)