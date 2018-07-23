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
ms.openlocfilehash: 0c23ba7ba476b44b44f48b76119776e2f2cb188e
ms.sourcegitcommit: 04d327940787df1297b72d534f388a035d472af0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2018
ms.locfileid: "39181146"
---
# <a name="comptrrefbaseoperator-iinspectable-operator"></a>Operatore comptrrefbase:: IInspectable\* \* operatore

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
operator IInspectable**() const;
```

## <a name="remarks"></a>Note

L'oggetto corrente viene eseguito il cast [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un oggetto-puntatore-a interfaccia IInspectable.

Se la corrente ComPtrRefBase non deriva da IInspectable, viene generato un errore.

Questo cast è disponibile solo se **&#95; &#95;WRL_CLASSIC_COM&#95; &#95;** è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)
