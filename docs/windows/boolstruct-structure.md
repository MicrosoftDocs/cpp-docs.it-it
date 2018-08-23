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
ms.openlocfilehash: c4981c7f82fe2c544bf907ac59d6e9ca22105cbd
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592537"
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

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)  
[Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)