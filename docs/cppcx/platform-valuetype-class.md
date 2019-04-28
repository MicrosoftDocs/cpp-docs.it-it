---
title: Classe Platform::ValueType
ms.date: 02/03/2017
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ValueType::ToString
helpviewer_keywords:
- Platform::ValueType Class
ms.assetid: 79aa8754-b140-4974-a5b1-be046938a10a
ms.openlocfilehash: 889cf3a53468491517d37978ca09472756ad9b7e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182951"
---
# <a name="platformvaluetype-class"></a>Classe Platform::ValueType

Classe di base per istanze di tipi di valore.

## <a name="syntax"></a>Sintassi

```cpp
public ref class ValueType : Object
```

## <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|[ValueType::ToString](#tostring)|Restituisce una rappresentazione di stringa dell'oggetto. Ereditato da [platform:: Object](../cppcx/platform-object-class.md).|

### <a name="remarks"></a>Note

La classe ValueType viene usata per costruire i tipi valore. ValueType è derivato da Object, che contiene i membri di base. Tuttavia, il compilatore consente di scollegare i membri di base dai tipi valore derivati dalla classe ValueType. Il compilatore ricollega questi membri di base quando un tipo valore è di tipo boxed.

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="tostring"></a> Metodo ValueType:: ToString

Restituisce una rappresentazione di stringa dell'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
Platform::String ToString();
```

### <a name="return-value"></a>Valore restituito

Platform:: String che rappresenta il valore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
