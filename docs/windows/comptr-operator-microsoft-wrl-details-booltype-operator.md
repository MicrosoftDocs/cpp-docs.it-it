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
ms.openlocfilehash: 05e26296646b61997baff880a671958769eb099b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433400"
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

[Classe ComPtr](../windows/comptr-class.md)<br/>
[Metodo ComPtr::Get](../windows/comptr-get-method.md)