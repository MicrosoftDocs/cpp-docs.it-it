---
description: 'Altre informazioni su: Threading (C++)'
title: Threading (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.threading
helpviewer_keywords:
- threading attribute
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
ms.openlocfilehash: e46a3720280fe7ee7b9debae98e3270825e8db40
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327256"
---
# <a name="threading-c"></a>threading (C++)

Specifica il modello di threading per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ threading(model=enumeration) ]
```

### <a name="parameters"></a>Parametri

*model*<br/>
Opzionale Uno dei modelli di threading seguenti:

- `apartment` (threading Apartment)

- `neutral` (.NET Framework componenti senza interfaccia utente)

- `single` (threading semplice)

- `free` (threading libero)

- `both` (Apartment e Threading libero)

Il valore predefinito è `apartment`.

## <a name="remarks"></a>Commenti

L'attributo C++ **Threading** non viene visualizzato nel file con estensione IDL generato ma verrà usato nell'implementazione dell'oggetto com.

Nei progetti ATL, se è presente anche l'attributo [coclass](coclass.md) , il modello di threading specificato da *Model* viene passato come parametro di modello alla classe [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) , inserito dall' `coclass` attributo.

L'attributo **Threading** protegge anche l'accesso a una [event_source](event-source.md).

## <a name="example"></a>Esempio

Vedere l'esempio [concesso in licenza](licensed.md) per un esempio di utilizzo del **Threading**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclass**|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi COM](com-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Supporto del multithreading per il codice precedente (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md)<br/>
[Appartamenti neutri](/windows/win32/cossdk/neutral-apartments)
