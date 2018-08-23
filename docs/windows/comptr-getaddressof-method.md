---
title: 'Metodo comptr:: Getaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::GetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- GetAddressOf method
ms.assetid: 972a41d0-c2ef-4ae3-b2cd-77cc45156ac9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 98609ce9cc15940586d626c52d24b5ca506164e7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598994"
---
# <a name="comptrgetaddressof-method"></a>Metodo ComPtr::GetAddressOf

Recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore all'interfaccia rappresentata da questa **ComPtr**.

## <a name="syntax"></a>Sintassi

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

## <a name="return-value"></a>Valore restituito

L'indirizzo di una variabile.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)