---
title: 'Operator InterfaceType * * operatore comptrref:: | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator InterfaceType**
dev_langs:
- C++
helpviewer_keywords:
- operator InterfaceType** operator
ms.assetid: b32e3240-a4f0-4998-a55f-d4e35dc9a15a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 88b83e475ad2452d55b4696bc9b5f1b8bc75a169
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606659"
---
# <a name="comptrrefoperator-interfacetype-operator"></a>Operatore ComPtrRef::operator InterfaceType**

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
operator InterfaceType**();
```

## <a name="remarks"></a>Note

Elimina l'oggetto corrente **ComPtrRef** dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ComPtrRef](../windows/comptrref-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)