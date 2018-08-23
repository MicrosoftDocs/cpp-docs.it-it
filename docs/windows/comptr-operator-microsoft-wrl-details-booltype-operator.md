---
title: 'Operatore comptr:: booltype operatore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 135c6d851be5de8f2eb976baf015f2ef449600c0
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595973"
---
# <a name="comptroperator-microsoftwrldetailsbooltype-operator"></a>Operatore ComPtr::operator Microsoft::WRL::Details::BoolType

Indica o meno una **ComPtr** gestisce la durata dell'oggetto di un'interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

## <a name="return-value"></a>Valore restituito

Se un'interfaccia è associata a questo **ComPtr**, l'indirizzo del [boolstruct::](../windows/boolstruct-member-data-member.md) membro dati; in caso contrario, **nullptr**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)  
[Metodo ComPtr::Get](../windows/comptr-get-method.md)