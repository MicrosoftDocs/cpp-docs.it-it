---
title: 'Operatore comptrref:: T * operatore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator T*
dev_langs:
- C++
helpviewer_keywords:
- operator T* operator
ms.assetid: b4f83370-0ebc-4d56-87c6-1a8ea2d0079b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e279728ce1176dc6c65bc9fad7f3c881d8df96dd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441187"
---
# <a name="comptrrefoperator-t-operator"></a>Operatore ComPtrRef::operator T*

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
operator T*();
```

## <a name="remarks"></a>Note

Restituisce il valore della [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dei dati dell'oggetto corrente **ComPtrRef** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ComPtrRef](../windows/comptrref-class.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)