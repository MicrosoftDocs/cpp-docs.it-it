---
title: Interfaccia Platform::IBox
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Value
ms.assetid: 774df45d-f8a7-45a3-ae24-eecc3c681040
ms.openlocfilehash: 24e70ad646e2673869b135e8cc7657910b9b499c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383295"
---
# <a name="platformibox-interface"></a>Interfaccia Platform::IBox

L'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md) è il nome C++ per l'interfaccia `Windows::Foundation::IReference` .

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
interface class IBox
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del valore boxed.

### <a name="remarks"></a>Note

L'interfaccia `IBox<T>` viene principalmente utilizzata internamente per rappresentare tipi di valore nullable, come descritto in [Classi e struct di valore (C++/CX)](../cppcx/value-classes-and-structs-c-cx.md). L'interfaccia viene anche utilizzata per eseguire il boxing dei tipi di valore passati a metodi C++ che accettano parametri di tipo `Object^`. Puoi dichiarare esplicitamente un parametro di input come `IBox<SomeValueType>`. Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).

### <a name="requirements"></a>Requisiti

### <a name="members"></a>Membri

L'interfaccia `Platform::IBox` eredita dall'interfaccia [Platform::IValueType](../cppcx/platform-ivaluetype-interface.md) . `IBox` dispone di questi membri:

**Proprietà**

|Metodo|Descrizione|
|------------|-----------------|
|[Valore](#value)|Restituisce il valore di tipo unboxed archiviato in precedenza in questa istanza di `IBox` .|

## <a name="value"></a> Proprietà ibox:: value

Restituisce il valore memorizzato in origine in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
property T Value {T get();}
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del valore boxed.

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Restituisce il valore memorizzato in origine in questo oggetto.

### <a name="remarks"></a>Note

Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
