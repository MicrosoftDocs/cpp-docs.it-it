---
description: 'Altre informazioni su: classe Platform:: ValueType'
title: Classe Platform::ValueType
ms.date: 02/03/2017
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ValueType::ToString
helpviewer_keywords:
- Platform::ValueType Class
ms.assetid: 79aa8754-b140-4974-a5b1-be046938a10a
ms.openlocfilehash: e6873b4b884586d06dae6e2fd1966041fd49bcc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307808"
---
# <a name="platformvaluetype-class"></a>Classe Platform::ValueType

Classe di base per istanze di tipi di valore.

## <a name="syntax"></a>Sintassi

```cpp
public ref class ValueType : Object
```

## <a name="public-methods"></a>Metodi pubblici

| Nome | Description |
|--|--|
| [ValueType:: ToString](#tostring) | Restituisce una rappresentazione in formato stringa dell'oggetto. Ereditato da [Platform:: Object](../cppcx/platform-object-class.md). |

### <a name="remarks"></a>Commenti

La classe ValueType viene usata per costruire i tipi valore. ValueType è derivato da Object, che contiene i membri di base. Tuttavia, il compilatore consente di scollegare i membri di base dai tipi valore derivati dalla classe ValueType. Il compilatore ricollega questi membri di base quando un tipo valore è di tipo boxed.

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="valuetypetostring-method"></a><a name="tostring"></a> Metodo ValueType:: ToString

Restituisce una rappresentazione in formato stringa dell'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
Platform::String ToString();
```

### <a name="return-value"></a>Valore restituito

Oggetto Platform:: String che rappresenta il valore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
