---
title: 'Operatore comptrrefbase:: IInspectable * * (operatore) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**
dev_langs:
- C++
helpviewer_keywords:
- operator IInspectable** operator
ms.assetid: 06ac1051-606c-449b-a566-cac78ca53762
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d83580537a81b1c75f44e32e6aa43b2b014c8373
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

Questo cast è disponibile solo se **&#95; &#95; WRL_CLASSIC_COM &#95; &#95;**  è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)