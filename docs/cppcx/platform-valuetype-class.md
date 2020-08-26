---
title: Classe Platform::ValueType
ms.date: 02/03/2017
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ValueType::ToString
helpviewer_keywords:
- Platform::ValueType Class
ms.assetid: 79aa8754-b140-4974-a5b1-be046938a10a
ms.openlocfilehash: f4ce34fa3f197424833d34bdb866712d412e69c3
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846550"
---
# <a name="platformvaluetype-class"></a>Classe Platform::ValueType

Classe di base per istanze di tipi di valore.

## <a name="syntax"></a>Sintassi

```cpp
public ref class ValueType : Object
```

## <a name="public-methods"></a>Metodi pubblici

| Nome | Descrizione |
|--|--|
| [ValueType:: ToString](#tostring) | Restituisce una rappresentazione in formato stringa dell'oggetto. Ereditato da [Platform:: Object](../cppcx/platform-object-class.md). |

### <a name="remarks"></a>Osservazioni

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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
