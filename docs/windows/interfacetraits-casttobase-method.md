---
title: 'Metodo interfacetraits:: Casttobase | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits::CastToBase
dev_langs:
- C++
helpviewer_keywords:
- CastToBase method
ms.assetid: 0591a017-0adf-4358-b946-eb0a307ce7f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 473656f25c4ba08e011bef8f938cea54bdc51d6d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424904"
---
# <a name="interfacetraitscasttobase-method"></a>Metodo InterfaceTraits::CastToBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
static __forceinline Base* CastToBase(
   _In_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo del parametro *ptr*.

*ptr*<br/>
Puntatore a un tipo *T*.

## <a name="return-value"></a>Valore restituito

Un puntatore a `Base`.

## <a name="remarks"></a>Note

Viene eseguito il cast il puntatore specificato a un puntatore a `Base`.

Per altre informazioni sulle `Base`, vedere la sezione typedef pubblici [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura InterfaceTraits](../windows/interfacetraits-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)