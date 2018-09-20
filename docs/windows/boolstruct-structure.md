---
title: BoolStruct (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::BoolStruct
dev_langs:
- C++
helpviewer_keywords:
- BoolStruct structure
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 13c1e57ec0b2f7459bdab447a6f7fe98ac8eb1d1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416658"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Note

Il **BoolStruct** struttura definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. **BoolStruct** viene usato internamente dal [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Membro dati BoolStruct::Member](../windows/boolstruct-member-data-member.md)|Specifica che un [ComPtr](../windows/comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)<br/>
[Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)