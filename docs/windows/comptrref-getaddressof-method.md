---
title: 'Metodo comptrref:: Getaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::GetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- GetAddressOf method
ms.assetid: 797df323-a2fa-412b-ab60-32cce3721096
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a0f35bbe2bdc0d0c8d3500e6b157da542458b1fe
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46421018"
---
# <a name="comptrrefgetaddressof-method"></a>Metodo ComPtrRef::GetAddressOf

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
InterfaceType* const * GetAddressOf() const;
```

## <a name="return-value"></a>Valore restituito

Indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente **ComPtrRef** oggetto.

## <a name="remarks"></a>Note

Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente **ComPtrRef** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ComPtrRef](../windows/comptrref-class.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)