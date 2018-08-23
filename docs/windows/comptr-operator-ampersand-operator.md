---
title: Operatore comptr::&amp; operatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator&
dev_langs:
- C++
helpviewer_keywords:
- operator& operator
ms.assetid: 2d77fda6-f4b2-45c1-8a0e-fbc355013531
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f513ac83e0ee83109f42cf87b80b4fcc4960db1f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598603"
---
# <a name="comptroperatoramp-operator"></a>Operatore comptr::&amp; operatore

Rilascia l'interfaccia associato a questo **ComPtr** dell'oggetto e quindi recupera l'indirizzo delle **ComPtr** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

## <a name="return-value"></a>Valore restituito

Un riferimento debole all'oggetto corrente **ComPtr**.

## <a name="remarks"></a>Note

Questo metodo è diverso da [comptr:: Getaddressof](../windows/comptr-getaddressof-method.md) in quanto questo metodo rilascia un riferimento al puntatore a interfaccia. Usare `ComPtr::GetAddressOf` quando si richiedono l'indirizzo del puntatore a interfaccia ma non si desidera rilasciare tale interfaccia.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)