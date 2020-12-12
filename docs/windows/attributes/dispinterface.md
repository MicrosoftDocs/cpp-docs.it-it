---
description: 'Altre informazioni su: interfaccia dispatch'
title: dispatch (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.dispinterface
helpviewer_keywords:
- dispinterface attribute
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
ms.openlocfilehash: fe39e537ccbc350f3733653a710dfd0f0d817339
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122135"
---
# <a name="dispinterface"></a>dispinterface

Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.

## <a name="syntax"></a>Sintassi

```cpp
[dispinterface]
```

## <a name="remarks"></a>Osservazioni

Quando l'attributo **dispinterface** di C++ precede un'interfaccia, quest'ultima viene inserita nel blocco della libreria nel file con estensione idl generato.

A meno che non si specifichi una classe di base, un'interfaccia di dispatch deriverà da `IDispatch`. È necessario specificare un [id](id.md) per i membri di un'interfaccia di dispatch.

L'esempio d'uso relativo a [dispinterface](/windows/win32/Midl/dispinterface) nella documentazione di MIDL:

```cpp
dispinterface helloPro
   { interface hello; };
```

non è valido per l'attributo **dispinterface** .

## <a name="example"></a>Esempio

Per informazioni su come usare [dispinterface](bindable.md) , vedere l'esempio relativo a **bindable**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi per utilizzo](attributes-by-usage.md)<br/>
[UUID](uuid-cpp-attributes.md)<br/>
[Dual](dual.md)<br/>
[personalizzato](custom-cpp.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)
